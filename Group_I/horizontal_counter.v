`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/04/2023 02:21:25 PM
// Design Name: 
// Module Name: horizontal_counter
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


module horizontal_counter(
    input clk_25MHz,
    output reg en_V_counter = 0,
    output reg [15:0] H_count = 0
    );
    
always @(posedge clk_25MHz)
    begin
        if(H_count < 799)
            begin
                H_count <= H_count + 1;
                en_V_counter <= 0; // disable vertical counter
            end
        else
            begin
                H_count <= 0; // reset Horizontal counter
                en_V_counter <= 1; // trigger V counter
            end
    end
    
endmodule