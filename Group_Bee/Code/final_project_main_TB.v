`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 10:42:44 PM
// Design Name: 
// Module Name: final_project_main_TB
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


module final_project_main_TB();
        reg sys_clk;              
        reg sys_rst_button;       
        reg clk_reset_button;     
        reg start_game_button;    
        reg [3:0] num1_switches;  
        reg [3:0] num2_switches;
        reg [3:0] num3_switches;
        reg global_enable_switch; 
        wire vsync;               
        wire hsync;              
        wire [11:0] colordata;    
        wire [6:0] cc_out;        
        wire [7:0] an_out;        
        wire game_status_led;
        wire [2:0] led_colors;
        wire num1correct_led;
        wire num2correct_led;
        wire num3correct_led;

final_project_main DUT(
            .sys_clk(sys_clk),              
            .sys_rst_button(sys_rst_button),       
            .clk_reset_button(clk_reset_button),     
            .start_game_button(start_game_button),    
            .num1_switches(num1_switches),  
            .num2_switches(num2_switches),
            .num3_switches(num3_switches),
            .global_enable_switch(global_enable_switch), 
            .vsync(vsync),             
            .hsync(hsync),             
            .colordata(colordata),    
            .cc_out(cc_out),        
            .an_out(an_out),         
            .game_status_led(game_status_led),
            .led_colors(led_colors),
            .num1correct_led(num1correct_led),
            .num2correct_led(num2correct_led),
            .num3correct_led(num3correct_led)
);

initial
    begin
        sys_clk = 1;              
        sys_rst_button = 1;       
        clk_reset_button = 1;     
        start_game_button = 0;    
        num1_switches = 4'd0;  
        num2_switches = 4'd0;
        num3_switches = 4'd0;
        global_enable_switch = 1; 
        
        
        DUT.twoDigitDownCounter.tens_counter.dcbcd_temp_reg = 0;
        DUT.twoDigitDownCounter.ones_counter.dcbcd_temp_reg = 0;
        DUT.twoDigitDownCounter.slow_clock.clk_counter_tmp = 0;
        
        DUT.rngCombo.forSelects.digit_out_reg = 0;
        DUT.rngCombo.forCombo.digit_out_reg = 0;
        
        DUT.imageBRAM_to_VGA.outputVGA.p_hSync = 0;
        DUT.imageBRAM_to_VGA.outputVGA.p_vSync = 0;
        DUT.imageBRAM_to_VGA.outputVGA.xCount = 0;
        DUT.imageBRAM_to_VGA.outputVGA.yCount = 0;
        DUT.imageBRAM_to_VGA.outputVGA.displayArea = 1;
        
        DUT.imageBRAM_to_VGA.write_image = 0;
        
        DUT.imageBRAM_to_VGA.muxForImages.notblurred.row_reg = 0;
        DUT.imageBRAM_to_VGA.muxForImages.notblurred.col_reg = 0;
        
        DUT.imageBRAM_to_VGA.muxForImages.leastblurred.row_reg = 0;
        DUT.imageBRAM_to_VGA.muxForImages.leastblurred.col_reg = 0;
        
        DUT.imageBRAM_to_VGA.muxForImages.somewhatblurred.row_reg = 0;
        DUT.imageBRAM_to_VGA.muxForImages.somewhatblurred.col_reg = 0;
        
        DUT.imageBRAM_to_VGA.muxForImages.completelyblurred.row_reg = 0;
        DUT.imageBRAM_to_VGA.muxForImages.completelyblurred.col_reg = 0;
        
        DUT.countdown_ones.ssd_driver_temp_cc = 0;
        DUT.countdown_tens.ssd_driver_temp_cc = 0;
        
        DUT.solution3.ssd_driver_temp_cc = 0;
        DUT.solution2.ssd_driver_temp_cc = 0;
        DUT.solution1.ssd_driver_temp_cc = 0;
        
        DUT.player_input3.ssd_driver_temp_cc = 0;
        DUT.player_input2.ssd_driver_temp_cc = 0;
        DUT.player_input1.ssd_driver_temp_cc = 0;
        
        DUT.ssd_refresh.digit_sel = 0;
        DUT.ssd_refresh.digit_refresh_counter = 0;
        
        #20 sys_rst_button = 0;
        #20 clk_reset_button = 0;
        #31000 start_game_button = 1;
        #100 start_game_button = 0;
        #1000 start_game_button = 1;
        #100 start_game_button = 0;
        #1000 start_game_button = 1;
        #100 start_game_button = 0;
        #100 DUT.imageBRAM_to_VGA.write_image = 1;
        
        #1000 num1_switches = 4'd8;
        #1000 num2_switches = 4'd8;
        #1000 num3_switches = 4'd8;
    end
    
always
    begin
        #100 sys_clk = ~sys_clk;
    end

endmodule
