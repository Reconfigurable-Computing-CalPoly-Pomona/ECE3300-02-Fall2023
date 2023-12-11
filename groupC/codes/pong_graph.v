`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/18/2023 07:29:47 PM
// Design Name: 
// Module Name: pong_graph
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

module pong_graph(
    input clk,  
    input reset,    
    input [3:0] btn,        // right pad (btn[0] = up, btn[1] = down), left pad (btn[2] = up, btn[3] = down)
    input gra_still,        // still graphics - newgame, game over states
    input video_on,
    input [9:0] x,
    input [9:0] y,
    output graph_on,
    output reg [1:0] miss,   // ball hit or miss
    output reg [1:0] hit,
    output reg [11:0] graph_rgb
    );
    parameter SPEED_MULT = 1;

    // maximum x, y values in display area
    parameter X_MIN = 30;
    parameter X_MAX = 639;
    parameter Y_MAX = 479;
    
    // create 60Hz refresh tick
    wire refresh_tick;
    assign refresh_tick = ((y == 481) && (x == 0)) ? 1 : 0; // start of vsync(vertical retrace)
    
    
    // WALLS
    // TOP wall boundaries
    parameter T_WALL_T = 64;    
    parameter T_WALL_B = 71;    // 8 pixels wide
    // BOTTOM wall boundaries
    parameter B_WALL_T = 472;    
    parameter B_WALL_B = 479;    // 8 pixels wide
    
    
    
    // PADDLES
    parameter PAD_HEIGHT = 72;  // 72 pixels high
    // paddle moving velocity when a button is pressed
    parameter PAD_VELOCITY = 3 * SPEED_MULT;     // change to speed up or slow down paddle movement 
    // LEFT pad boundaries
    // paddle horizontal boundaries
    parameter X_L_PAD_L = 36;
    parameter X_L_PAD_R = 39;    // 4 pixels wide
    // paddle vertical boundary signals
    wire [9:0] y_l_pad_t, y_l_pad_b;
    // register to track top boundary and buffer
    reg [9:0] y_l_pad_reg = 204;      // Paddle starting position
    reg [9:0] y_l_pad_next;

    // RIGHT pad boundaries
    // paddle horizontal boundaries
    parameter X_R_PAD_L = 600;
    parameter X_R_PAD_R = 603;    // 4 pixels wide
    // paddle vertical boundary signals
    wire [9:0] y_r_pad_t, y_r_pad_b;
    // register to track top boundary and buffer
    reg [9:0] y_r_pad_reg = 204;      // Paddle starting position
    reg [9:0] y_r_pad_next;
    
    
    // BALL
    // square rom boundaries
    parameter BALL_SIZE = 8;
    // ball horizontal boundary signals
    wire [9:0] x_ball_l, x_ball_r;
    // ball vertical boundary signals
    wire [9:0] y_ball_t, y_ball_b;
    // register to track top left position
    reg [9:0] y_ball_reg, x_ball_reg;
    // signals for register buffer
    wire [9:0] y_ball_next, x_ball_next;
    // registers to track ball speed and buffers
    reg [9:0] x_delta_reg, x_delta_next;
    reg [9:0] y_delta_reg, y_delta_next;
    // positive or negative ball velocity
    parameter BALL_VELOCITY_POS = 2 * SPEED_MULT;    // ball speed positive pixel direction(down, right)
    parameter BALL_VELOCITY_NEG = -2 * SPEED_MULT;   // ball speed negative pixel direction(up, left)
    // round ball from square image
    wire [2:0] rom_addr, rom_col;   // 3-bit rom address and rom column
    reg [7:0] rom_data;             // data at current rom address
    wire rom_bit;                   // signify when rom data is 1 or 0 for ball rgb control
    
    
    // Register Control
    always @(posedge clk or posedge reset)
        if(reset) begin                 // Reset ball and paddles to starting position
            y_l_pad_reg <= 204;
            y_r_pad_reg <= 204;
            x_ball_reg <= 0;
            y_ball_reg <= 0;
            x_delta_reg <= 10'h002;
            y_delta_reg <= 10'h002;
        end
        else begin
            ball_rng_start <= ball_rng_start + 1;
            y_l_pad_reg <= y_l_pad_next;
            y_r_pad_reg <= y_r_pad_next;
            x_ball_reg <= x_ball_next;
            y_ball_reg <= y_ball_next;
            x_delta_reg <= x_delta_next;
            y_delta_reg <= y_delta_next;
        end
    
    
    // ball rom, used to render ball
    always @*
        case(rom_addr)
            3'b000 :    rom_data = 8'b00111100; //   ****  
            3'b001 :    rom_data = 8'b01111110; //  ******
            3'b010 :    rom_data = 8'b11111111; // ********
            3'b011 :    rom_data = 8'b11111111; // ********
            3'b100 :    rom_data = 8'b11111111; // ********
            3'b101 :    rom_data = 8'b11111111; // ********
            3'b110 :    rom_data = 8'b01111110; //  ******
            3'b111 :    rom_data = 8'b00111100; //   ****
        endcase
    
    
    // OBJECT STATUS SIGNALS
    wire l_pad_on, t_wall_on, b_wall_on, r_pad_on, sq_ball_on, ball_on;
    wire [11:0] wall_rgb, pad_rgb, ball_rgb, bg_rgb;
    
    
    // pixel within wall boundaries
//    assign l_pad_on = ((L_PAD_L <= x) && (x <= L_PAD_R)) ? 1 : 0;
    assign t_wall_on = ((T_WALL_T <= y) && (y <= T_WALL_B)) ? 1 : 0;
    assign b_wall_on = ((B_WALL_T <= y) && (y <= B_WALL_B)) ? 1 : 0;
    
    
    // assign object colors
    assign wall_rgb   = 12'hFFF;    // white walls
    assign pad_rgb    = 12'hFFF;    // white paddle
    assign ball_rgb   = 12'hFFF;    // white ball
    assign bg_rgb     = 12'h000;    // black background
    
    
    // left paddle 
    assign y_l_pad_t = y_l_pad_reg;                             // paddle top position
    assign y_l_pad_b = y_l_pad_t + PAD_HEIGHT - 1;              // paddle bottom position
    assign l_pad_on = (X_L_PAD_L <= x) && (x <= X_L_PAD_R) &&     // pixel within paddle boundaries
                    (y_l_pad_t <= y) && (y <= y_l_pad_b);
    // right paddle 
    assign y_r_pad_t = y_r_pad_reg;                             // paddle top position
    assign y_r_pad_b = y_r_pad_t + PAD_HEIGHT - 1;              // paddle bottom position
    assign r_pad_on = (X_R_PAD_L <= x) && (x <= X_R_PAD_R) &&     // pixel within paddle boundaries
                    (y_r_pad_t <= y) && (y <= y_r_pad_b);
       

    //Paddle Control
    always @* begin
        // Left
        y_l_pad_next = y_l_pad_reg;     // no move
        // Right
        y_r_pad_next = y_r_pad_reg;     // no move
        
        if(refresh_tick)
        begin
            // Left
            if((btn[3] == 1) & (y_l_pad_b < (B_WALL_T - 1 - PAD_VELOCITY)))
                y_l_pad_next = y_l_pad_reg + PAD_VELOCITY;  // move down
            else if((btn[2] == 1) & (y_l_pad_t > (T_WALL_B - 1 - PAD_VELOCITY)))
                y_l_pad_next = y_l_pad_reg - PAD_VELOCITY;  // move up
                
            // Right
            if((btn[1] == 1) & (y_r_pad_b < (B_WALL_T - 1 - PAD_VELOCITY)))
                y_r_pad_next = y_r_pad_reg + PAD_VELOCITY;  // move down
            else if((btn[0] == 1) & (y_r_pad_t > (T_WALL_B - 1 - PAD_VELOCITY)))
                y_r_pad_next = y_r_pad_reg - PAD_VELOCITY;  // move up
        end
    end
    
    
    // rom data square boundaries
    assign x_ball_l = x_ball_reg;
    assign y_ball_t = y_ball_reg;
    assign x_ball_r = x_ball_l + BALL_SIZE - 1;
    assign y_ball_b = y_ball_t + BALL_SIZE - 1;
    // pixel within rom square boundaries
    assign sq_ball_on = (x_ball_l <= x) && (x <= x_ball_r) &&
                        (y_ball_t <= y) && (y <= y_ball_b);
    // map current pixel location to rom addr/col
    assign rom_addr = y[2:0] - y_ball_t[2:0];   // 3-bit address
    assign rom_col = x[2:0] - x_ball_l[2:0];    // 3-bit column index
    assign rom_bit = rom_data[rom_col];         // 1-bit signal rom data by column
    // pixel within round ball
    assign ball_on = sq_ball_on & rom_bit;      // within square boundaries AND rom data bit == 1
 
  
    // new ball position
    assign x_ball_next = (gra_still) ? X_MAX / 2 :
                         (refresh_tick) ? x_ball_reg + x_delta_reg : x_ball_reg;
    assign y_ball_next = (gra_still) ? Y_MAX / 2 :
                         (refresh_tick) ? y_ball_reg + y_delta_reg : y_ball_reg;
    
    reg [1:0] ball_rng_start;
    initial ball_rng_start = 2'b00;
    // change ball direction after collision
    always @ (posedge clk) begin
        hit <= 2'b00;
        miss <= 2'b00;
        // x_delta_next <= x_delta_reg;
        // y_delta_next <= y_delta_reg;
        
        if(gra_still) begin
            x_delta_next <= ((ball_rng_start[0]) ? BALL_VELOCITY_POS : BALL_VELOCITY_NEG);
            y_delta_next <= ((ball_rng_start[1]) ? BALL_VELOCITY_POS : BALL_VELOCITY_NEG);
        end
        
        else if(y_ball_t < T_WALL_B)                   // reach top
            y_delta_next <= BALL_VELOCITY_POS;   // move down
        
        else if(y_ball_b > (B_WALL_T))         // reach bottom wall
            y_delta_next <= BALL_VELOCITY_NEG;   // move up
        
//        else if(x_ball_l <= L_PAD_R)           // reach left wall
//            x_delta_next = BALL_VELOCITY_POS;   // move right
        
        else if((X_L_PAD_R+5 >= x_ball_r) && (x_ball_r >= X_L_PAD_L+5) &&               // Left paddle hit, if ball is between the left and right sides of paddle
                (y_l_pad_t <= y_ball_b) && (y_ball_t <= y_l_pad_b)) begin           // and between top and bottom sides, then deflect
                    x_delta_next <= BALL_VELOCITY_POS;
                    hit[0] <= 1'b1; 
        end     
        
        else if((X_R_PAD_L <= x_ball_r) && (x_ball_r <= X_R_PAD_R) &&               // Left paddle hit, if ball is between the left and right sides of paddle
                (y_r_pad_t <= y_ball_b) && (y_ball_t <= y_r_pad_b)) begin           // and between top and bottom sides, then deflect
                    x_delta_next <= BALL_VELOCITY_NEG;
                    hit[1] <= 1'b1;         
        end
        
        else if((x_ball_r > X_MAX))           //miss at left and right side of the screens, past the paddles
            miss[0] <= 1'b1;
        else if((x_ball_r < X_MIN))
            miss[1] <= 1'b1;
    end                    
    
    // output status signal for graphics 
    assign graph_on = l_pad_on | t_wall_on | b_wall_on | r_pad_on | ball_on;
    
    
    // rgb multiplexing circuit
    always @*
        if(~video_on)
            graph_rgb = 12'h000;      // no value, blank
        else
            if(t_wall_on | b_wall_on)
                graph_rgb = wall_rgb;     // wall color
            else if(l_pad_on | r_pad_on)
                graph_rgb = pad_rgb;      // paddle color
            else if(ball_on)
                graph_rgb = ball_rgb;     // ball color
            else
                graph_rgb = bg_rgb;       // background
       
endmodule
