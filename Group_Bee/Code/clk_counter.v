`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/07/2023 04:37:05 PM
// Design Name: 
// Module Name: clk_counter
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


module clk_counter
		 #(parameter SIZE = 32)
		 (
 		   input sys_clk,
    		   input sys_rst,
                   input [$clog2(SIZE)-1:0] speed_selector,
                   output block_clk
                );
	reg [SIZE-1:0] clk_counter_tmp;
	
	always@(posedge sys_clk)
	      begin 
		if(sys_rst)
		clk_counter_tmp <= 0;
		else
		clk_counter_tmp <= clk_counter_tmp +1;
	     end
	  assign block_clk = clk_counter_tmp[speed_selector]; 
endmodule
