`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/07/2023 04:41:16 PM
// Design Name: 
// Module Name: ssd_controller_8_digit
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


module ssd_controller_8_digit(
    input ssd_controller_clk,
    input ssd_controller_rst,
    input [55:0] ssd_controller_cc_in,
    output reg [6:0] ssd_controller_cc_out,
    output reg [7:0] ssd_controller_an_out
    );
    
reg [2:0] digit_sel;
reg [15:0] digit_refresh_counter;

always@(posedge ssd_controller_clk)
    begin
        if (ssd_controller_rst)
            begin: RST
            digit_sel <= 0;
            digit_refresh_counter <= 0;
            end: RST
        else if (digit_refresh_counter == 16'd50000)    // 2ms = 100MHz / 50,000. 2 ms = display_on time
            begin: DISP_REFRESH
                digit_refresh_counter <= 0;
                digit_sel <= digit_sel + 1;
            end: DISP_REFRESH
        else //Continue counting
            digit_refresh_counter <= digit_refresh_counter + 1;
    end
    
always@(*)
    begin: AN_SELECT
        case(digit_sel)                                  //Digit from right to left
            3'b000: begin
                    ssd_controller_an_out = 8'b11111110; //0 digit
                    ssd_controller_cc_out = ssd_controller_cc_in[6:0];
                  end
            3'b001: begin
                    ssd_controller_an_out = 8'b11111101; //1 digit
                    ssd_controller_cc_out = ssd_controller_cc_in[13:7];
                    end
            3'b010: begin
                    ssd_controller_an_out = 8'b11111011; //2 digit
                    ssd_controller_cc_out = ssd_controller_cc_in[20:14];
                    end
            3'b011: begin
                    ssd_controller_an_out = 8'b11110111; //3 digit
                    ssd_controller_cc_out = ssd_controller_cc_in[27:21];
                    end
            3'b100: begin
                    ssd_controller_an_out = 8'b11101111; //4 digit
                    ssd_controller_cc_out = ssd_controller_cc_in[34:28];
                    end
            3'b101: begin
                    ssd_controller_an_out = 8'b11011111; //5 digit
                    ssd_controller_cc_out = ssd_controller_cc_in[41:35];
                    end
            3'b110: begin
                    ssd_controller_an_out = 8'b10111111; //6 digit
                    ssd_controller_cc_out = ssd_controller_cc_in[48:42];
                    end
            3'b111: begin
                    ssd_controller_an_out = 8'b01111111; //7 digit
                    ssd_controller_cc_out = ssd_controller_cc_in[55:49];
                    end
            
            default: ssd_controller_an_out = 8'b00000000;
        endcase
    end
    
    
endmodule
