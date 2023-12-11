`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly Pomona ECE 3300
// Engineer: R. Wong
// 
// Create Date: 10/22/2023 03:31:55 PM
// Design Name: 8-bit Clock Manager
// Module Name: clk_manager
// Project Name: 
// Target Devices: Nexys A7
// Tool Versions: 
// Description: Clock divider with an 8-bit speed control
// 
// Dependencies: ur mum
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module clk_manager (
    input clk_in,
    input [7:0] clk_spd,
    output clk_out
);

    reg toggle_clk = 0;
    reg [23:0] clk_counter = 24'b0000000000000000000000000;
    
    always @ (posedge clk_in) begin
        if (clk_counter[23:16] >= clk_spd) begin
            toggle_clk = ~toggle_clk;
            clk_counter = 0;
        end else
            clk_counter = clk_counter + 1;
    end
    
    assign clk_out = toggle_clk;

endmodule
