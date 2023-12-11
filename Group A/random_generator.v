`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 09:49:24 PM
// Design Name: 
// Module Name: random_generator
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


module random_generator
    ( input          VGA_clk,
      output reg [9:0] randX,
      output reg [8:0] randY);
    
    reg [9:0] i = 0, j = 450;
    
    always@(posedge VGA_clk) begin
        if(i < 620) i <= i + 10;
        else i <= 10'd10;
    end
    
    always@(posedge VGA_clk)begin
            if(j > 10) j <= j - 10;
            else j <= 10'd460;
        end
        
    always@(i,j) begin
        randX <= i;
        randY <= j;
    end
    
endmodule
