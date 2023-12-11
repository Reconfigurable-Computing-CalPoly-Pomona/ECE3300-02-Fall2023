`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/18/2023 07:41:53 PM
// Design Name: 
// Module Name: top_pong
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module pong_top(
    input top_clk,                  // 100MHz
    input pix_clk,                  // 25MHz
    input reset,                    // btnR
    input key_clk,                  // PS2_CLK from keyboard
    input key_data,                 // PS2_DATA from keyboard
    input inputsw,                  // Switch between onboard buttons or keyboard input
    input [3:0] btn,                // Onboard buttons 
    output hsync,                   // to VGA Connector
    output vsync,                   // to VGA Connector
    output [11:0] rgb,              // to VGA Connector
    output [6:0] ssd_port_cc,       // to SSDs    
    output [7:0] ssd_port_an_out,   // to SSDs
    output ssd_port_odp             // to SSDs
    );
    
    // state declarations for 4 states
    parameter newgame = 2'b00;
    parameter play    = 2'b01;
    parameter newball = 2'b10;
    parameter over    = 2'b11;
           
    // signal declaration
    // reg showPongText;
    reg [1:0] state_reg, state_next;
    wire [9:0] w_x, w_y;
    wire w_vid_on, graph_on, w_pix_clk;
    wire [1:0] hit, miss;                                 // 2-bit hit flag, hit[0] is for left, hit[1] is for right
    reg [1:0]  d_inc;                               // 2-bit increment score flag, d_inc[0] is for left, d_inc[1] is right
    wire [3:0] text_on;
    wire [11:0] graph_rgb, text_rgb;
    reg [11:0] rgb_reg, rgb_next;
    wire [3:0] dig0, dig1, dig2, dig3;              // 4-bit BCD for score counters; {dig1, dig0} is left, {dig3, dig2} is right
    reg gra_still, d_clr, timer_start;
    wire timer_tick, timer_up;
    reg [1:0] ball_reg, ball_next;
    wire [3:0] keyboard_key;                        //[3:2] are left player; [1:0] are right player
    wire [31:0] keyboard_code;                      // fed into SEG_7 module 

    assign w_pix_clk = pix_clk;
    vga_controller vga_unit(
        .clk_25MHz(w_pix_clk),
        .reset(reset),
        .video_on(w_vid_on),
        .hsync(hsync),
        .vsync(vsync),
        .x(w_x),
        .y(w_y));
    
    pong_text text_unit(
        .clk(top_clk),
        .x(w_x),
        .y(w_y),
        .dig0(dig0),
        .dig1(dig1),
        .dig2(dig2),
        .dig3(dig3),
        .ball(ball_reg),
        .text_on(text_on),
        .text_rgb(text_rgb));
        
    pong_graph graph_unit(
        .clk(top_clk),
        .reset(reset),
        .btn(inputsw ? btn : keyboard_key),
        .gra_still(gra_still),
        .video_on(w_vid_on),
        .x(w_x),
        .y(w_y),
        .hit(hit),
        .miss(miss),
        .graph_on(graph_on),
        .graph_rgb(graph_rgb));
    
    // 60 Hz tick when screen is refreshed
    assign timer_tick = (w_x == 0) && (w_y == 0);
    timer timer_unit(
        .clk(top_clk),
        .reset(reset),
        .timer_tick(timer_tick),
        .timer_start(timer_start),
        .timer_up(timer_up));
    
    score_counter counter_unit(
        .clk(top_clk),
        .reset(reset),
        .d_inc(miss),
        .d_clr(d_clr),
        .dig0(dig0),
        .dig1(dig1),
        .dig2(dig2),
        .dig3(dig3));
       
    keyboard keyboard_unit(
        .keyboard_clk(top_clk),
        .keyboard_kclk(key_clk),
        .keyboard_kdata(key_data),
        .keyboard_uart_rxd(),
        .keyboard_out(keyboard_key),
        .keyboard_code(keyboard_code)
    );

    SEG_7 keyboard_code_ssd (
        .x(keyboard_code),
        .clk(top_clk),
        .seg(ssd_port_cc),
        .an(ssd_port_an_out),
        .dp(ssd_port_odp)
    );
        
    // FSMD state and registers
    always @(posedge top_clk or posedge reset)
    begin
        if(reset) begin
            state_reg <= newgame;
            ball_reg <= 0;
        end
        else
        begin
            state_reg <= state_next;
            ball_reg <= ball_next;            
        end
    end
    
    always @ (posedge w_pix_clk or posedge reset)
    begin
        if (reset)
            rgb_reg <= 0;
        else
            rgb_reg <= rgb_next;
    end
    

    // initial showPongText = 1; // Show PONG text at beginning of first game, turn off for the rest of the game
    // FSMD next state logic
    always @ (posedge top_clk) begin
        gra_still <= 1'b1;
        timer_start <= 1'b0;
        d_clr <= 1'b0;
        state_next <= state_reg;
        ball_next <= ball_reg;
        
        case(state_reg)
            newgame: begin
                ball_next <= 2'b11;          // three balls
                d_clr <= 1'b1;               // clear score
                
                if(((inputsw ? btn[1:0] : keyboard_key[1:0]) != 0) || ((inputsw ? btn[3:2] : keyboard_key[3:2]) != 0)) begin      // button pressed
                    // showPongText <= 0;
                    state_next <= play;
                    ball_next <= ball_reg - 1;    
                end
            end
            
            play: begin
                gra_still <= 1'b0;   // animated screen
                
                if(miss[0] || miss[1]) begin
                    if(ball_reg == 0)
                        state_next <= over;
                    
                    else
                        state_next <= newball;
                    
                    timer_start <= 1'b1;     // 2 sec timer
                    ball_next <= ball_reg - 1;
                end
            end
            
            newball: // wait for 2 sec and until button pressed
            if(timer_up && (((inputsw ? btn[1:0] : keyboard_key[1:0]) != 0) || ((inputsw ? btn[3:2] : keyboard_key[3:2]) != 0)))
                state_next <= play;
                
            over:   // wait 2 sec to display game over
                if(timer_up)
                    state_next <= newgame;
        endcase           
    end
    
    // rgb multiplexing
    // text_on = {score_on, logo_on, rule_on, over_on}
    always @ (posedge w_pix_clk)
        if(~w_vid_on)
            rgb_next <= 12'h000; // blank
        
        else
            if(text_on[3] || ((state_reg == newgame) && text_on[1]) || ((state_reg == over) && text_on[0]))
                rgb_next <= text_rgb;    // Show scores text, rules text on new game, game over text
            
            else if(graph_on)
                rgb_next <= graph_rgb;   // colors in graph_text
                
            else if(text_on[2] && (state_reg == newgame))
                rgb_next <= text_rgb;    // PONG logo
                
            else
                rgb_next <= 12'h000;     // black background
    
    // output
    assign rgb = rgb_reg;
    
endmodule
