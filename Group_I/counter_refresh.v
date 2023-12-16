`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 05:42:11 PM
// Design Name: 
// Module Name: counter_refresh
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


module counter_refresh(
    input clk,
    output reg [2:0] select = 0
    );
    
always @(posedge clk) // input clk is 400Hz, at positive edge of 400 Hz clock
    select <= select + 1; // increment select counter by 1    
endmodule
