`timescale 1ns / 1ps

module top(
        input clk,              // 100MHz
        input reset,            
        input set_btn,          // btnC
        input wire psd,
        input wire psc,
        input left,             // btnL
        input right,            // btnR
        input activate_read,
        input enable_output_text,
        output hsync, vsync,    // VGA connector
        output [7:0] ascii_led,
        output data_read_led,
        output [11:0] rgb,       // DAC, VGA connector
        output dp_out,
        output [6:0] display_controller_cc_out,
        output [7:0] display_controller_an_out
    );
    
    // signals
    wire [9:0] w_x, w_y;
    wire w_vid_on, w_p_tick;
    reg [11:0] rgb_reg;
    wire [11:0] rgb_next;
    
    // instantiate vga controller
    vga_controller vga(.clk_100MHz(clk), .reset(reset), .video_on(w_vid_on),
                       .hsync(hsync), .vsync(vsync), .p_tick(w_p_tick), 
                       .x(w_x), .y(w_y));
    
    wire [7:0] ascii;
    wire ascii_ready;
    keyboard_input ASCII_out(
		.clk(clk), 
		.reset(reset),
		.scan_ready(ascii_ready),
		.ps2d(psd), 
		.ps2c(psc),
        .ascii_code(ascii)
	);
    
    assign ascii_led = ascii;
    
    
    // instantiate text generation circuit
    text_screen_gen tsg(.clk(clk), .reset(reset), .video_on(w_vid_on), .set(set_btn),
                        .up(), .down(), .left(left), .right(right), .read_txt_input(activate_read), 
                        .enable_output_text(enable_output_text),
                        .sw(ascii), .x(w_x), .y(w_y), .data_read_led(data_read_led), .rgb(rgb_next));
    
    // rgb buffer
    always @(posedge clk)
        if(w_p_tick)
            rgb_reg <= rgb_next;
            
    // output
    assign rgb = rgb_reg;
    
    
    /* Clk divider for sevent segment */
    wire sev_seg_clk; 
    clk_counter sevSegClk(
        .sys_clk(clk),
        .sys_rst(reset),
        .speed_sel(5'b10000),
        .block_clk(sev_seg_clk)
    );
    
    /* Seven segment*/
    display_controller myDisplayCntrl(
        .display_controller_clk(sev_seg_clk),
        .display_controller_dp_in(8'b11111111),
        .display_controller_an_in(8'b00000000),
        .display_controller_ssd0(ascii[3:0]),
        .display_controller_ssd1(ascii[7:4]),
        .display_controller_ssd2(8'h00), // ALU sign
        .display_controller_ssd3(8'h00), 
        .display_controller_ssd4(8'h00), // sign
        .display_controller_ssd5(8'h00), // mode
        .display_controller_ssd6(8'h00),
        .display_controller_ssd7(8'h00), // sign
        .display_controller_dp_out(dp_out),
        .display_controller_cc_out(display_controller_cc_out),
        .display_controller_an_out(display_controller_an_out)
    );
    
endmodule