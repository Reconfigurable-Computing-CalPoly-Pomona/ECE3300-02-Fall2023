`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 10:05:30 AM
// Design Name: 
// Module Name: Score
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


module Score
    ( input        clk   ,
      input  [6:0] in    ,
      output [6:0] cc_out,
      output       dp_out,
      output [7:0] an_out);
    
    wire refresh_clk;
    wire [1:0] bcd_sel;
    wire [8:0] bcd;
    wire [3:0] ONE_DIGIT;
    
    clock_divider #(
        .DIVISOR(10000) // 100MHz/10000 = 10KHz
    ) SSD_CLK_GEN (
        .clk(clk),
        .block_clk(refresh_clk)
    );
    
    refresh_counter #(
        .SIZE(2)
    ) REFRESH_GEN (
        .clk(refresh_clk),
        .out(bcd_sel)
    );
    
    binary_to_bcd #(
        .SIZE(7)
    ) BCD_GEN (
        .bin(in),
        .bcd(bcd)
    );    
    
    bcd_control #(
        .SIZE(4)
    ) BCD_CTL (
        .sel(bcd_sel),
        .in(bcd),
        .out(ONE_DIGIT)
    );
    
    ssd_driver SSD_GEN(
        .ssd_driver_port_inp(ONE_DIGIT),
        .ssd_driver_port_idp(1),
        .ssd_driver_port_sel(bcd_sel),
        .ssd_driver_port_cc(cc_out),
        .ssd_driver_port_odp(dp_out),
        .ssd_driver_port_an(an_out)
    );
    
endmodule
