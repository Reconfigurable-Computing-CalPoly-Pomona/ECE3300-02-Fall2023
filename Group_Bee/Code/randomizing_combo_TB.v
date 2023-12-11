`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 04:48:12 PM
// Design Name: 
// Module Name: randomizing_combo_TB
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


module randomizing_combo_TB();
reg clk;
reg reset;
reg game_start_flag;
wire [11:0] randomized_combo;

randomizing_combo DUT(
.clk(clk),
.reset(reset),
.game_start_flag(game_start_flag),
.randomized_combo(randomized_combo)
);


initial
    begin
        clk = 1;
        reset = 1;
        game_start_flag = 0;
        
        #20 reset = 0;
        
        
        
    end
    

always
    begin
        #10 clk = ~clk;
        #30 game_start_flag = ~game_start_flag;
    end




endmodule
