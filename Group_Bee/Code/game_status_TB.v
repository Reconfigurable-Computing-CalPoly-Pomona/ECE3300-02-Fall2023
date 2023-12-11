`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 07:27:29 PM
// Design Name: 
// Module Name: game_status_TB
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


module game_status_TB();
    reg start_game;
    reg game_reset;
    wire game_flag;
    
game_status DUT(
.start_game(start_game),
.game_reset(game_reset),
.game_flag(game_flag)
);

initial
    begin
        start_game = 0;
        game_reset = 1;
        
        #40 game_reset = 0;
        #20 start_game = 1;
        #20 start_game = 0;
        #20 start_game = 1;
        #20 start_game = 0;
        #20 start_game = 1;
        
        
    end

endmodule
