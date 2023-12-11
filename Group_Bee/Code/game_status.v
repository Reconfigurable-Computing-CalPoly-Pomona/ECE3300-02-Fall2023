`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 01:56:06 PM
// Design Name: 
// Module Name: game_status
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


module game_status(
            input start_game,
            input game_reset,
            output reg game_flag
    );

always@(posedge start_game, posedge game_reset)
    begin
        if(game_reset)
            game_flag <= 0;
        else
            game_flag <= ~game_flag;
    end


endmodule
