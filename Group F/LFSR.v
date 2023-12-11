`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 04:12:42 PM
// Design Name: 
// Module Name: LFSR
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


module LFSR(
        input clk,
        input rst,
        input roll_trigger,
        output [3:0] rand_out1,
        output [3:0] rand_out2,
        output [3:0] rand_out3,
        output [3:0] rand_out4
        );
    reg [2:0] counter;
    reg [3:0] rand_out1_temp;
    reg [3:0] rand_out2_temp;
    reg [3:0] rand_out3_temp;
    reg [3:0] rand_out4_temp;

    always @(posedge clk or posedge rst) 
    begin
        if (rst) 
        begin
            counter <= 3'b000;
            rand_out1_temp <= 4'b0001;
            rand_out2_temp <= 4'b0010;
            rand_out3_temp <= 4'b0100;
            rand_out4_temp <= 4'b0110;
        end 
        else if (roll_trigger) 
        begin
            counter <= counter + 1;
            // LFSR feedback logic for rand_out1
            rand_out1_temp <= counter % 6 + 1;
      
            // LFSR feedback logic for rand_out2
            rand_out2_temp <= (counter + 1) % 6 + 1;
      
            // LFSR feedback logic for rand_out3
            rand_out3_temp <= (counter + 2) % 6 + 1;
      
            // LFSR feedback logic for rand_out4
            rand_out4_temp <= (counter + 3) % 6 + 1;
        end
    end
    
    assign rand_out1 = rand_out1_temp;
    assign rand_out2 = rand_out2_temp;
    assign rand_out3 = rand_out3_temp;
    assign rand_out4 = rand_out4_temp;

endmodule