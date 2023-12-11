`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 08:32:27 PM
// Design Name: 
// Module Name: Combination_Lock_Dial
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


module Combination_Lock_Dial(
        input[3:0] combination_digit,
        input[3:0] combination_digit_guess,
    
        output reg digit_found_flag
    );

    
    always @(combination_digit_guess)
        begin
            if(combination_digit_guess == combination_digit)
                digit_found_flag <= 1'b1;
            else
                digit_found_flag <= 1'b0;
        end
    
endmodule
