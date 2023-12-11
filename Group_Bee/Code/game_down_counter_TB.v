`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 10:24:27 AM
// Design Name: 
// Module Name: game_down_counter_TB
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


module game_down_counter_TB();
    reg sys_clk;
    reg enable;
    reg counter_reset;
    reg clk_reset;
    wire [7:0] countdown;

game_down_counter DUT(
    .sys_clk(sys_clk),
    .enable(enable),
    .counter_reset(counter_reset),
    .clk_reset(clk_reset),
    .countdown(countdown)
);

initial
    begin
        sys_clk = 1;
        enable = 0;
        counter_reset = 1;
        clk_reset = 1;
        
        #30 clk_reset = 0;
        #30 counter_reset = 0;
        #20 enable = 1;
        
    end

always
    begin
        #10 sys_clk = ~sys_clk;
    end
    
endmodule
