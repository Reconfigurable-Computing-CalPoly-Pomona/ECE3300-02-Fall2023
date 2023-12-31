`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/19/2023 04:14:04 PM
// Design Name: 
// Module Name: mux_nx1
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


module mux_nx1 #(parameter SIZE = 8)                // SIZE sets number of inputs
    (                                               //
    input [($clog2(SIZE))-1:0] mux_nx1_sel,         // The select bit is log2(SIZE)
    input [SIZE-1:0] mux_nx1_in,                    //
    output mux_nx1_out                              //
    );                                              // Ex: If SIZE = 8, mux_nx1_in is [7:0] and mux_nxl_sel is [2:0]. 
													//   mux_nx1_sel is a 3-bit number and can represent values 0 (000) to 7 (111)
    assign mux_nx1_out = mux_nx1_in[mux_nx1_sel];   //   If mux_nx1_sel is 5, then mux_nx1_out = mux_nx1_in[5]
endmodule  
