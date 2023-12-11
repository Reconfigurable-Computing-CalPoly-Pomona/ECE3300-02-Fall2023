`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 06:15:44 PM
// Design Name: 
// Module Name: clock_divider
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


module clock_divider 
    #( parameter  DIVISOR = 1)
     ( input      clk        ,
       output reg block_clk  );
    
    integer check = 0;
    
    always@(posedge clk) begin
        if(check < DIVISOR) begin
            check <= check + 1;
            block_clk <= 0;
        end
        else begin
            check <= 0;
            block_clk <= 1;
        end
    end
    
endmodule
