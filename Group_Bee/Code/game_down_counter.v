`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 10:03:52 AM
// Design Name: 
// Module Name: game_down_counter
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


module game_down_counter(
        input sys_clk,
        input enable,
        input counter_reset,
        input clk_reset,
        output [7:0] countdown
    );
    
wire [4:0] locked_speed = 5'b11000;   //RTL Value
//wire [4:0] locked_speed = 5'b00000;     //TB Value
wire slow_clk;
wire tens_enable;

assign tens_enable = enable & (countdown[3:0] == 0);
    
clk_counter slow_clock(
    .sys_clk(sys_clk),
    .sys_rst(clk_reset),
    .speed_selector(locked_speed),
    .block_clk(slow_clk)
);

game_downcounter_tens tens_counter(
    .dcbcd_clk(slow_clk),
    .dcbcd_rst(counter_reset),
    .dcbcd_en(tens_enable),
    .dcbcd_q(countdown[7:4])
);

downcounterbcd ones_counter(
    .dcbcd_clk(slow_clk),
    .dcbcd_rst(counter_reset),
    .dcbcd_en(enable),
    .dcbcd_q(countdown[3:0])

);

    
endmodule
