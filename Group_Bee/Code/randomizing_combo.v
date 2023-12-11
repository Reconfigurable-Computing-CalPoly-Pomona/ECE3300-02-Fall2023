`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 04:25:09 PM
// Design Name: 
// Module Name: randomizing_combo
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


module randomizing_combo(
        input clk,
        input reset,
        input game_start_flag,
        output reg [11:0] randomized_combo
    );
    
wire count_direction = 1;
wire [3:0] counter_out_to_shifters;
wire [3:0] counter_out_to_selects;
wire counter_enable = 1;
wire [11:0] shifters_out;
    
Up_Down_Counter forCombo(
        .count_direction(count_direction),
        .clock(clk),
        .enable(counter_enable),
        .reset(reset),
        .digit_out(counter_out_to_shifters)
    );

Up_Down_Counter forSelects(
        .count_direction(count_direction),
        .clock(clk),
        .enable(counter_enable),
        .reset(reset),
        .digit_out(counter_out_to_selects)
    );

barrelshifter shifterNum1(
    .barrelshifter_input(counter_out_to_shifters),
    .barrelshifter_sel(counter_out_to_selects[1:0]),
    .barrelshifter_shiftrotate(counter_out_to_selects[2]),
    .barrelshifter_out(shifters_out[11:8])
);

barrelshifter shifterNum2(
    .barrelshifter_input(counter_out_to_shifters),
    .barrelshifter_sel(counter_out_to_selects[2:1]),
    .barrelshifter_shiftrotate(counter_out_to_selects[0]),
    .barrelshifter_out(shifters_out[7:4])
);

barrelshifter shifterNum3(
    .barrelshifter_input(counter_out_to_shifters),
    .barrelshifter_sel({counter_out_to_selects[2],counter_out_to_selects[0]}),
    .barrelshifter_shiftrotate(counter_out_to_selects[1]),
    .barrelshifter_out(shifters_out[3:0])
);

always @(posedge game_start_flag, posedge reset)
	   begin
	       if(reset)
	       randomized_combo <= 0;
	       else
	       randomized_combo <= shifters_out;
	   end
    
endmodule
