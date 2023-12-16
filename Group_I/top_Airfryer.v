`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/11/2023 06:51:55 AM
// Design Name: 
// Module Name: top_Airfryer
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


module top_Airfryer(
    input sys_clk,
    input sys_rst,
    input inc_temp_btn,
    input dec_temp_btn,
    input sw_start,
    input [5:0] minutes_in,
    input [5:0] seconds_in,
    output Hsynq,           //vga outputs
    output Vsynq,
    output [3:0] Red, 
    output [3:0] Green,
    output [3:0] Blue,
    output [15:0] out_LED,      //LED outputs
    output [7:0] out_an,    //7seg outputs
    output [6:0] out_cc
    );
    
    wire done;
        
top_sseg sseg_btn_sw (      //contains switches, buttons, LEDs, and 7 seg
    .clk(sys_clk),
    .rst(sys_rst),
    .start(sw_start),
    .inc_temp_btn(inc_temp_btn),
    .dec_temp_btn(dec_temp_btn),
    .minutes_in(minutes_in),
    .seconds_in(seconds_in),
    .done(done),
    .out_LED(out_LED),
    .out_an(out_an),
    .out_cc(out_cc)
    );
    
vga_top vga(            //vga display
    .clk(sys_clk),
    .start(sw_start),
    .done(done),
    .Hsynq(Hsynq),
    .Vsynq(Vsynq),
    .Red(Red),
    .Green(Green),
    .Blue(Blue)
    );
endmodule
