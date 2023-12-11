`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/07/2023 04:39:38 PM
// Design Name: 
// Module Name: ssd_driver_simple
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


module ssd_driver_simple(
    input [3:0] ssd_driver_port_in,
    output [6:0] ssd_driver_port_cc
    );
    
    reg [6:0] ssd_driver_temp_cc;
    wire [3:0] ssd_driver_digits;
    assign ssd_driver_digits = ssd_driver_port_in;
    
    always @(ssd_driver_digits)
        begin:SEG_EN
            
            case(ssd_driver_digits)
                4'h0: ssd_driver_temp_cc = 7'b1000000;
                4'h1: ssd_driver_temp_cc = 7'b1111001;
                4'h2: ssd_driver_temp_cc = 7'b0100100;
                4'h3: ssd_driver_temp_cc = 7'b0110000;
                4'h4: ssd_driver_temp_cc = 7'b0011001;
                4'h5: ssd_driver_temp_cc = 7'b0010010;
                4'h6: ssd_driver_temp_cc = 7'b0000010;
                4'h7: ssd_driver_temp_cc = 7'b1111000;
                4'h8: ssd_driver_temp_cc = 7'b0000000;
                4'h9: ssd_driver_temp_cc = 7'b0010000;
                4'hA: ssd_driver_temp_cc = 7'b0001000;
                4'hB: ssd_driver_temp_cc = 7'b0000011;
                4'hC: ssd_driver_temp_cc = 7'b1000110;
                4'hD: ssd_driver_temp_cc = 7'b0100001;
                4'hE: ssd_driver_temp_cc = 7'b0000110;
                4'hF: ssd_driver_temp_cc = 7'b0001110;
                default: ssd_driver_temp_cc = 7'hzz;
            endcase
        end
    assign ssd_driver_port_cc = ssd_driver_temp_cc;

endmodule
