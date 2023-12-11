`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 04:22:58 PM
// Design Name: 
// Module Name: Driver_TB
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


module Driver_TB(
    );
    
    reg clk;
    reg clkrst;
    reg rst;
    reg roll_trigger;
    wire [0:6] segment_outputs;
    wire [7:0] anode_select;
    wire hsync;
    wire vsync;
    wire [3:0] red;
    wire [3:0] green; 
    wire [3:0] blue;
    
    initial
    begin
        clk =1;
    end
    always
    begin
        #10
        clk = ~clk;
    end
    
    wire [3:0] dice1;
    wire [3:0] dice2;
    wire [3:0] dice3;
    wire [3:0] dice4;
    wire [3:0] player1wins;
    wire [3:0] player2wins;
    
    wire clk25;
    wire lock;
    
    clk_wiz_0 CLKTB(
        .clk_out1(clk25),
        .reset(clkrst),
        .locked(lock),         
        .clk_in1(clk)
     );
    
    DiceGame GamePlayTB(
        .clk(clk25 && lock),
        .rst(rst),
        .roll_trigger(roll_trigger),
        .die1(dice1),
        .die2(dice2),
        .die3(dice3),
        .die4(dice4),
        .player1score(player1wins),
        .player2score(player2wins)
    );
    
    SSD BoardDisplayTB(
        .clock(clk),           
        .reset(rst),           
        .in0(player1wins),  // display player 1 total wins
        .in1(dice2),        // display player 1 dice 2
        .in2(dice1),        // display player 1 dice 1
        .in3(4'b0),             // no input
        .in4(4'b0),             // no input
        .in5(dice4),        // display player 2 dice 2 (dice 4)
        .in6(dice3),        // display player 2 dice 1 (dice 3)
        .in7(player2wins),  // display player 2 total wins
        .segment_outputs(segment_outputs),
        .anode_select(anode_select)
    );

    DiceVGA VGADisplayTB(
        .clk(clk25 && lock),
        .reset(rst),
        .number1(dice1),
        .number2(dice2),
        .number3(dice3),
        .number4(dice4),
        .red(red),
        .green(green),
        .blue(blue),
        .vsync(vsync),
        .hsync(hsync)
    );

    initial
    begin
    clkrst = 1;
    rst = 1;
    roll_trigger = 0;
    #20
    clkrst = 0;
    #20
    rst = 0;
    #20;
    roll_trigger = 1;
    #200;
    $finish;
    end
    
    always
    begin
        #20
        roll_trigger = ~roll_trigger;
    end 
    
endmodule
