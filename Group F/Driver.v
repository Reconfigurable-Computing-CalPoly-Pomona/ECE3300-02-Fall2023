module Driver(
        input clk,
        input clkrst,
        input rst,
        input  roll_trigger,
        output [0:6] segment_outputs,
        output [7:0] anode_select, // selectng which anode is needed
        output hsync,
        output vsync,
        output [3:0] red,
        output [3:0] green, 
        output [3:0] blue
    );
    
    wire [3:0] dice1;
    wire [3:0] dice2;
    wire [3:0] dice3;
    wire [3:0] dice4;
    wire [3:0] player1wins;
    wire [3:0] player2wins;
    
    wire clk25;
    wire lock;
    
    clk_wiz_0 CLK(
        .clk_out1(clk25),
        .reset(clkrst),
        .locked(lock),         
        .clk_in1(clk)
     );
    
    DiceGame GamePlay(
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
    
    SSD BoardDisplay(
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

    DiceVGA VGADisplay(
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

endmodule
