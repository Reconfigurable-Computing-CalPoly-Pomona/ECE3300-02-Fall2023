`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/08/2023 11:45:44 AM
// Design Name: 
// Module Name: number_of_correct_inputs
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


/* This module is used to organize the mux from most blurry to least blurry (no blur). */
                    
module number_of_correct_inputs(
        input [2:0] value_checks,                       //Output of "value check" modules taken together as a bus
        output reg [1:0] number_of_correct_inputs       //Outputs to image mux. Considers # of '1's from value check's, does not care which inputs are correct.
    );                                          
    
always@(value_checks)
    begin
            case(value_checks)
                3'b000: number_of_correct_inputs <= 2'b00;   // No correct inputs
                3'b001: number_of_correct_inputs <= 2'b01;   // 1 correct input
                3'b010: number_of_correct_inputs <= 2'b01;   // 1 correct input
                3'b011: number_of_correct_inputs <= 2'b10;   // 2 correct inputs
                3'b100: number_of_correct_inputs <= 2'b01;   // 1 correct input
                3'b101: number_of_correct_inputs <= 2'b10;   // 2 correct inputs
                3'b110: number_of_correct_inputs <= 2'b10;   // 2 correct inputs
                3'b111: number_of_correct_inputs <= 2'b11;   // 3 correct inputs
                default: number_of_correct_inputs <= 2'd0;    // Standard default
            endcase
    end
   
    
    
    
endmodule
