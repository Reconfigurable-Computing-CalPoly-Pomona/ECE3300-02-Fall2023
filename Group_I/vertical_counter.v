`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/04/2023 02:21:25 PM
// Design Name: 
// Module Name: vertical_counter
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


module vertical_counter(
    input clk_25MHz,
    input en_V_count,
    output reg [15:0] V_count = 0
    );
always @(posedge clk_25MHz)
    begin
    if (en_V_count == 1'b1)
        begin
            if(V_count < 524) // keep counting until 525
                V_count <= V_count + 1;
            else
                V_count <= 0; // reset Vertical counter
        end
    end
endmodule