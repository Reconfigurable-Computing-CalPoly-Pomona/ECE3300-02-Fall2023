`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 07:04:41 PM
// Design Name: 
// Module Name: rgb_leds
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


module rgb_leds(
            input clk,
            input game_win,
            output reg [2:0] led_colors
    );
    
always@(posedge clk)
    if(game_win)
        led_colors <= 3'b010;
    else 
        led_colors <= 3'b100;

endmodule
