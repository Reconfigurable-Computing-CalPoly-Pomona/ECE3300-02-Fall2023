`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/19/2023 04:14:49 PM
// Design Name: 
// Module Name: display_controller
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


module display_controller(
    input display_controller_clk,
    input [7:0] display_controller_dp_in,
    input [7:0] display_controller_an_in,
    input [4:0] display_controller_ssd0,
    input [4:0] display_controller_ssd1,
    input [4:0] display_controller_ssd2,
    input [4:0] display_controller_ssd3,
    input [4:0] display_controller_ssd4,
    input [4:0] display_controller_ssd5,
    input [4:0] display_controller_ssd6,
    input [4:0] display_controller_ssd7,
    output display_controller_dp_out,
    output [6:0] display_controller_cc_out,
    output [7:0] display_controller_an_out
    );
    
    wire [4:0] scan_disp_ctrl_out_temp;
    wire scan_disp_ctrl_dp_out_temp;
    wire [7:0] scan_disp_ctrl_an_out_temp;
    
    scan_disp_ctrl scan_disp_ctrl1(
        .clk(display_controller_clk),
        .dp_in(display_controller_dp_in),
        .an_in(display_controller_an_in),
        .ssd0(display_controller_ssd0),
        .ssd1(display_controller_ssd1),
        .ssd2(display_controller_ssd2),
        .ssd3(display_controller_ssd3),
        .ssd4(display_controller_ssd4),
        .ssd5(display_controller_ssd5),
        .ssd6(display_controller_ssd6),
        .ssd7(display_controller_ssd7),
        .dp_out(scan_disp_ctrl_dp_out_temp),
        .disp_out(scan_disp_ctrl_out_temp),
        .an_out(scan_disp_ctrl_an_out_temp)
    );
    
    ssd_driver ssd_driver1 (
        .ssd_driver_port_in(scan_disp_ctrl_out_temp),
        .ssd_driver_port_dp_in(scan_disp_ctrl_dp_out_temp),
        .ssd_driver_port_an_in(scan_disp_ctrl_an_out_temp),
        .ssd_driver_port_cc(display_controller_cc_out),
        .ssd_driver_port_dp_out(display_controller_dp_out),
        .ssd_driver_port_an_out(display_controller_an_out)        
    );
endmodule
