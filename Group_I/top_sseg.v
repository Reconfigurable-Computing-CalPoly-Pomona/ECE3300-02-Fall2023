`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 05:21:18 PM
// Design Name: 
// Module Name: top_sseg
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


module top_sseg(
    input clk,
    input rst,
    input start,
    input inc_temp_btn,
    input dec_temp_btn,
    input [5:0] minutes_in,
    input [5:0] seconds_in,
    output done,
    output [15:0] out_LED,
    output [7:0] out_an,
    output [6:0] out_cc
    );
    
    wire clk_1Hz, clk_400Hz;
    wire [2:0] sel;
    wire [5:0] minutes, seconds;
    wire [8:0] temperature;
    wire [3:0] mode;
    wire [3:0] min_1, min_0, sec_1, sec_0, temp_2, temp_1, temp_0;
    wire [6:0] sseg_min1, sseg_min0, sseg_sec1, sseg_sec0, sseg_off;
    wire [6:0] sseg_hundred_temp, sseg_tens_temp, sseg_ones_temp;
    
    //produces a 1Hz clock for the timer, and a 400Hz clock for the anode controller
    clk_divider clks(
            .clk(clk),
            .clk_1Hz(clk_1Hz),
            .clk_400Hz(clk_400Hz)
        );
        
    //counter refresh for anode controller
    counter_refresh anodeRefresh(
            .clk(clk_400Hz),
            .select(sel)
        );
        
    //loads in switch values and counts down the timer using a 1Hz clock (1sec)
    timerCounter minSec(
            .clk_1Hz(clk_1Hz),
            .rst(rst),
            .start(start),
            .minutes_in(minutes_in),
            .seconds_in(seconds_in),
            .minutes(minutes),
            .seconds(seconds),
            .timer_end(done)
        );
        
    //produces the temperature
    temper_counter temp(
            .clk(clk_400Hz),
            .inc_btn(inc_temp_btn),
            .dec_btn(dec_temp_btn),
            .temperature(temperature)
       );
       
    //separates the digits of the timer and the temperature 
    digitSeparator digits(
            .minutes(minutes),
            .seconds(seconds),
            .temp(temperature),
            .min_1(min_1),
            .min_0(min_0),
            .sec_1(sec_1),
            .sec_0(sec_0),
            .temp_hundred(temp_2),
            .temp_ten(temp_1),
            .temp_ones(temp_0),
            .mode(mode)
        );
        
    // controls the LEDs for the set mode
    led_fourtosixteen_decoder LEDs(
            .start(start),
            .done(done),
            .mode(mode),
            .LED(out_LED)
        );
        
    //the sseg display for the minutes, seconds, and temperature
    display_sseg display(
            .min_1(min_1),
            .min_0(min_0),
            .sec_1(sec_1),
            .sec_0(sec_0),
            .space(4'b0000),
            .temp_2(temp_2),
            .temp_1(temp_1),
            .temp_0(temp_0),
            .disp_min_1(sseg_min1),
            .disp_min_0(sseg_min0),
            .disp_sec_1(sseg_sec1),
            .disp_sec_0(sseg_sec0),
            .disp_off(sseg_off),
            .disp_temp_2(sseg_hundred_temp),
            .disp_temp_1(sseg_tens_temp),
            .disp_temp_0(sseg_ones_temp)
        );
        
    //controls the sseg anodes
    anodeControl anode(
            .clk(clk),
            .sel(sel),
            .dis_min_1(sseg_min1),
            .dis_min_0(sseg_min0),
            .dis_sec_1(sseg_sec1),
            .dis_sec_0(sseg_sec0),
            .disp_off(sseg_off),
            .dis_temp_2(sseg_hundred_temp),
            .dis_temp_1(sseg_tens_temp),
            .dis_temp_0(sseg_ones_temp),
            .out_an(out_an),
            .out_cc(out_cc),
            .out_dp(out_dp)
        );
    
endmodule
