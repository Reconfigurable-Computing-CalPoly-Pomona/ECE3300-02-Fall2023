`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/06/2023 11:44:35 PM
// Design Name: 
// Module Name: DiceGame
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


module DiceGame(
        input clk,
        input rst,
        input roll_trigger,
        output [3:0] die1,
        output [3:0] die2,
        output [3:0] die3,
        output [3:0] die4,
        output [3:0] player1score,
        output [3:0] player2score
    );

    wire [3:0] die1_temp;
    wire [3:0] die2_temp;
    wire [3:0] die3_temp;
    wire [3:0] die4_temp;
    reg [3:0] player1score_temp;
    reg [3:0] player2score_temp;
    
    reg increment_done;

    LFSR RandomGenerator(
        .clk(clk),
        .rst(rst),
        .roll_trigger(roll_trigger),
        .rand_out1(die1_temp),
        .rand_out2(die2_temp),
        .rand_out3(die3_temp),
        .rand_out4(die4_temp)
    );

    always @(posedge clk or posedge rst) 
    begin
        if (rst) 
        begin
            player1score_temp <= 0;
            player2score_temp <= 0;
            increment_done <= 0;
        end 
            else if (roll_trigger && !increment_done)
            begin
                // Compare the totals only if a new roll has occurred and increment is not done yet
                if ((die1_temp + die2_temp) > (die3_temp + die4_temp)) 
                begin
                    player1score_temp <= player1score_temp + 1; // player 1 wins
                    increment_done <= 1;
                end 
                else if ((die1_temp + die2_temp) < (die3_temp + die4_temp)) 
                begin
                    player2score_temp <= player2score_temp + 1; // player 2 wins
                    increment_done <= 1;
                end
            end 
            else if (!roll_trigger) 
            begin
                // Reset increment_done when no roll trigger is active
                increment_done <= 0;
            end
        end
    
    // Output the individual dice values
    assign die1 = die1_temp;
    assign die2 = die2_temp;
    assign die3 = die3_temp;
    assign die4 = die4_temp;
    assign player1score = player1score_temp;
    assign player2score = player2score_temp;

endmodule