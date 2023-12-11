`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 02:07:52 AM
// Design Name: 
// Module Name: final_project_main
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


module final_project_main(
            input sys_clk,              //  100MHz clock
            input sys_rst_button,       // resets counter and VGA modules
            input clk_reset_button,     // resets clock modules
            input start_game_button,    // button to start/restart game. Generates new solution upon press.
            input [3:0] num1_switches,  
            input [3:0] num2_switches,
            input [3:0] num3_switches,
            input global_enable_switch, // Allows game to function, but does NOT start game. If off, no part of the game will update/function
            output vsync,               // VGA vsync
            output hsync,               // VGA hsync
            output [11:0] colordata,    // VGA pixel color data
            output [6:0] cc_out,        // Seven segment display common cathode codes.
            output [7:0] an_out,         // Seven segment display anode codes.
            output game_status_led,
            output [2:0] led_colors,
            output num1correct_led,
            output num2correct_led,
            output num3correct_led
    );
    
wire game_win;
wire game_over;
wire start_or_game_over_or_win;



/* This module creates a 25MHz clock from the 100MHz clock using the Clocking Wizard IP */
wire clk_25MHz;

clk_wiz_0 clk_25Mhz_gen
  (  
  .clk_out1(clk_25MHz),
  .clk_in1(sys_clk)
  );

/* Module to determine game status */
wire [7:0] countdown;
wire game_flag;

game_status statusOfGame(
    .start_game(start_or_game_over_or_win),
    .game_reset(sys_rst_button),
    .game_flag(game_flag)
);


/* Module that counts down from 29 to 0. Determines play time of the game.  */
wire game_down_counter_enable; //enable for game's countdown

assign game_down_counter_enable = game_flag & (~game_win) & (~game_over) & global_enable_switch;

game_down_counter twoDigitDownCounter(
    .sys_clk(clk_25MHz),
    .enable(game_down_counter_enable),
    .counter_reset(~game_flag),
    .clk_reset(clk_reset_button),
    .countdown(countdown)
);

/* This module generates the randomized solution. */
wire [11:0] current_lock_combo;

//Combination_Control solutionCombo(
//    .game_start_flag(game_flag),
//    .system_clock(sys_clk),
//    .current_lock_combination(current_lock_combo)
//);

randomizing_combo rngCombo(
    .clk(clk_25MHz),
    .reset(clk_reset_button),
    .game_start_flag(game_flag),
    .randomized_combo(current_lock_combo)
);
    
/* These modules checks the player inputs against the solution. If input = solution, output a 1.  */

wire [2:0] number_of_correct_inputs_temp;

Combination_Lock_Dial num1(
    .combination_digit(current_lock_combo[11:8]),
    .combination_digit_guess(num1_switches),
    .digit_found_flag(number_of_correct_inputs_temp[2])
);

Combination_Lock_Dial num2(
    .combination_digit(current_lock_combo[7:4]),
    .combination_digit_guess(num2_switches),
    .digit_found_flag(number_of_correct_inputs_temp[1])
);

Combination_Lock_Dial num3(
    .combination_digit(current_lock_combo[3:0]),
    .combination_digit_guess(num3_switches),
    .digit_found_flag(number_of_correct_inputs_temp[0])
);

/* This module counts the number of correct inputs and outputs the decimal equivalent. */
wire [1:0] number_of_correct_inputs_for_mux;

number_of_correct_inputs correctSolutionsCount(
    .value_checks(number_of_correct_inputs_temp),                     
    .number_of_correct_inputs(number_of_correct_inputs_for_mux)
);

/* These modules initialize image to BRAM, mux the pixel data together, and outputs pixel data to VGA port based on number of correct inputs from player */

image_mux_plus_vga imageBRAM_to_VGA(
    .sys_clk(clk_25MHz),
    .sys_rst(sys_rst_button),
    .mux_selects_sws(number_of_correct_inputs_for_mux),
    .colordata(colordata),
    .vsync(vsync),
    .hsync(hsync)
);

/* These modules handle the seven display display. */
wire [55:0] ssd_controller_cc_in;

ssd_driver_simple countdown_ones(
    .ssd_driver_port_in(countdown[3:0]),
    .ssd_driver_port_cc(ssd_controller_cc_in[6:0])
);

ssd_driver_simple countdown_tens(
    .ssd_driver_port_in(countdown[7:4]),
    .ssd_driver_port_cc(ssd_controller_cc_in[13:7])
);

ssd_driver_simple solution3(
    .ssd_driver_port_in(current_lock_combo[3:0]),
    .ssd_driver_port_cc(ssd_controller_cc_in[20:14])
);

ssd_driver_simple solution2(
    .ssd_driver_port_in(current_lock_combo[7:4]),
    .ssd_driver_port_cc(ssd_controller_cc_in[27:21])
);

ssd_driver_simple solution1(
    .ssd_driver_port_in(current_lock_combo[11:8]),
    .ssd_driver_port_cc(ssd_controller_cc_in[34:28])
);

ssd_driver_simple player_input3(
    .ssd_driver_port_in(num3_switches),
    .ssd_driver_port_cc(ssd_controller_cc_in[41:35])
);

ssd_driver_simple player_input2(
    .ssd_driver_port_in(num2_switches),
    .ssd_driver_port_cc(ssd_controller_cc_in[48:42])
);

ssd_driver_simple player_input1(
    .ssd_driver_port_in(num1_switches),
    .ssd_driver_port_cc(ssd_controller_cc_in[55:49])
);

ssd_controller_8_digit ssd_refresh(
    .ssd_controller_clk(sys_clk),
    .ssd_controller_rst(sys_rst_button),
    .ssd_controller_cc_in(ssd_controller_cc_in),
    .ssd_controller_cc_out(cc_out),
    .ssd_controller_an_out(an_out)
);

//------------------

rgb_leds ledsRGB(
    .clk(sys_clk),
    .game_win(game_win),
    .led_colors(led_colors)
);

//assign current_lock_combo_leds = current_lock_combo;
assign game_over = (countdown == 0);
assign game_win = ((~game_over) & number_of_correct_inputs_for_mux[0] & number_of_correct_inputs_for_mux[1]);
assign start_or_game_over_or_win = (start_game_button | game_over);
assign game_status_led = game_flag;
assign num1correct_led = number_of_correct_inputs_temp[2];
assign num2correct_led = number_of_correct_inputs_temp[1];
assign num3correct_led = number_of_correct_inputs_temp[0];

endmodule
