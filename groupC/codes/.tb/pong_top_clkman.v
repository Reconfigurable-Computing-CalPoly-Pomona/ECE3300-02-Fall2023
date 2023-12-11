`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 04:30:07 PM
// Design Name: 
// Module Name: pong_top_clkman
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


module pong_top_clkman(
    input clk,              // 100MHz
    input reset,            // btnR
    input key_clk,          // PS2_CLK
    input key_data,         // PS2_DATA
    input inputsw,
    input [3:0] btn,
    output hsync,           // to VGA Connector
    output vsync,           // to VGA Connector
    output [11:0] rgb,       // to DAC, to VGA Connector 
    output [6:0] ssd_port_cc,    // to SSDs    
    output [7:0] ssd_port_an_out,    // to SSDs
    output ssd_port_odp           // to SSDs
    );
    
    wire top_clk;
    wire pix_clk;
    clk_wiz_0 clkwiz(
        .sys_clk(clk),
        .pix_clk(pix_clk),
        .top_clk(top_clk),
        .reset(1'b0),
        .locked()
    );
    
    pong_top pong(
        .top_clk(top_clk),
        .pix_clk(pix_clk),
        .reset(reset),
        .key_clk(key_clk),
        .inputsw(inputsw),
        .btn(btn),
        .key_data(key_data),
        .hsync(hsync),
        .vsync(vsync),
        .rgb(rgb),
        .ssd_port_cc(ssd_port_cc),
        .ssd_port_an_out(ssd_port_an_out),
        .ssd_port_odp(ssd_port_odp)
    );
endmodule
