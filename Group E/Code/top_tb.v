`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 08:58:48 PM
// Design Name: 
// Module Name: top_tb
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


module top_tb( );
    reg clk_tb;              // 100MHz Basys 3
    reg reset_tb;          // sw[15]
    reg set_btn_tb;              // btnC
    reg psd_tb; // reg wire
    reg psc_tb; // reg wire
    reg left_tb;             // btnL
    reg right_tb;            // btnR
    
    reg activate_read_tb;
    reg enable_output_text_tb;
    
    wire hsync_tb;
    wire vsync_tb;    // VGA connector
    wire [7:0] ascii_led_tb;
    wire data_read_led_tb;
    wire [11:0] rgb_tb;    
 
initial
    begin
        clk_tb = 1;
    end
        always
            begin
        #1
            clk_tb = ~clk_tb;
        end  
           
    
 top myTop(
    .clk(clk_tb),              // 100MHz Basys 3
    .reset(reset_tb),            // sw[15]
    .set_btn(set_btn_tb),              // btnC
    .psd(psd_tb),
    .psc(psc_tb),
    .left(left_tb),             // btnL
    .right(right_tb),            // btnR
    
    .activate_read(activate_read_tb),
    .enable_output_text(enable_output_text_tb),
    
    .hsync(hsync_tb), 
    .vsync(vsync_tb),    // VGA connector
    .ascii_led(ascii_led_tb),
    .data_read_led(data_read_led_tb),
    .rgb(rgb_tb)       // DAC, VGA connector
    );
    

initial
    begin
     
        reset_tb = 1'b1;       
        set_btn_tb = 1'b1;              // btnC
        psd_tb = 1'b1; // reg wire
        psc_tb = 1'b1; // reg wire
        left_tb = 1'b0;             // btnL
        right_tb = 1'b0;            // btnR
        #10
        left_tb = 1'b1;             // btnL
        right_tb = 1'b1;  
         
        activate_read_tb = 1'b0;
        #10
        activate_read_tb = 1'b1;
        enable_output_text_tb = 1'b0;
        #10
       // activate_read_tb = 1'b1;
        enable_output_text_tb = 1'b1;
        #100
        #100
//        activate_read_tb = 1'b1;
//        #10
//        activate_read_tb = 1'b0;
//        enable_output_text_tb = 1'b0;
//        activate_read_tb = 1'b1;
//        enable_output_text_tb = 1'b1;
//        #100
    
       $finish;
    end  
 
       

endmodule