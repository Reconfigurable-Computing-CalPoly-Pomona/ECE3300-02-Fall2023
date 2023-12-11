`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/07/2023 04:39:04 PM
// Design Name: 
// Module Name: barrelshifter
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


module barrelshifter
    (
    input [3:0] barrelshifter_input,
    input  [1:0] barrelshifter_sel,
    input barrelshifter_shiftrotate,
    output [3:0] barrelshifter_out
    );
    

wire [3:0] level_one_out_temp;
wire [3:0] level_two_out_temp;

//level one
assign level_one_out_temp[0] = barrelshifter_sel[0] ? barrelshifter_input[1] : barrelshifter_input[0];
assign level_one_out_temp[1] = barrelshifter_sel[0] ? barrelshifter_input[2] : barrelshifter_input[1]; 
assign level_one_out_temp[2] = barrelshifter_sel[0] ? barrelshifter_input[3] : barrelshifter_input[2]; 
assign level_one_out_temp[3] = barrelshifter_sel[0] ? (barrelshifter_shiftrotate ? barrelshifter_input[0]:0) : barrelshifter_input[3]; 

//level two
assign level_two_out_temp[0] = barrelshifter_sel[1] ? level_one_out_temp[2] : level_one_out_temp[0];
assign level_two_out_temp[1] = barrelshifter_sel[1] ? level_one_out_temp[3] : level_one_out_temp[1]; 
assign level_two_out_temp[2] = barrelshifter_sel[1] ? (barrelshifter_shiftrotate ? level_one_out_temp[0] : 0) : level_one_out_temp[2]; 
assign level_two_out_temp[3] = barrelshifter_sel[1] ? (barrelshifter_shiftrotate ? level_one_out_temp[1] : 0) : level_one_out_temp[3];  
    
assign barrelshifter_out = level_two_out_temp;
endmodule
