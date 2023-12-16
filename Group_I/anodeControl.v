`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 06:59:57 PM
// Design Name: 
// Module Name: anodeControl
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


module anodeControl(
    input clk,
    input [2:0] sel,
    input [6:0] dis_min_1,
    input [6:0] dis_min_0,
    input [6:0] dis_sec_1,
    input [6:0] dis_sec_0,
    input [6:0] disp_off,
    input [6:0] dis_temp_2,
    input [6:0] dis_temp_1,
    input [6:0] dis_temp_0,
    output reg [7:0] out_an,
    output reg [6:0] out_cc,
    output reg out_dp
    );
    
    reg [7:0] AN1, AN2, AN3, AN4, AN5, AN6, AN7, AN8;   // The eight segments that are to be lit up

    always@(sel)
        begin
            AN1 = 8'b11111110; // sets a scenario for each individual 7 seg to be lit up
            AN2 = 8'b11111101;
            AN3 = 8'b11111011;
            AN4 = 8'b11110111;
            AN5 = 8'b11101111;
            AN6 = 8'b11011111;
            AN7 = 8'b10111111;
            AN8 = 8'b01111111;
                
            case(sel)
                3'b000: // if counter is at 0
                    begin
                        out_cc <= dis_sec_0; // select 1st pattern
                        out_an <= AN1; // light up 1st 7 seg display
                    end
                3'b001: // if counter is at 1
                    begin
                        out_cc <= dis_sec_1; // select 2nd pattern
                        out_an <= AN2; // light up 2nd 7seg display
                    end
                3'b010: // if counter is at 2
                    begin
                        out_cc <= dis_min_0; // select 3rd pattern
                        out_an <= AN3; // light up 3rd 7seg display
                    end
                3'b011: // if counter is at 3
                    begin
                        out_cc <= dis_min_1; // select 4th pattern
                        out_an <= AN4; // light up 4th 7seg display
                    end
    
                3'b100: // if counter is at 4
                    begin
                        out_cc <= disp_off; // select 5th pattern
                        out_an <= AN5; // light up 5th 7seg display
                    end
                3'b101: // if counter is at 5
                    begin
                        out_cc <= dis_temp_0; // select 6th pattern
                        out_an <= AN6; // light up 6th 7seg display
                    end
                3'b110: // if counter is at 6
                    begin
                        out_cc <= dis_temp_1; // select 7th pattern
                        out_an <= AN7; // light up 7th 7seg display
                    end
                3'b111: // if counter is at 7
                    begin
                        out_cc <= dis_temp_2; // select 8th pattern
                        out_an <= AN8; // light up 8th 7seg display
                    end
                default:
                    begin
                        out_cc <= 7'b0111111; // otherwise display '-' and this
                        out_an <= 8'b01010101; // flipping pattern
                    end
            endcase
        end
endmodule
