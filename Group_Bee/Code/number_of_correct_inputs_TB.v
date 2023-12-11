`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/08/2023 12:42:36 PM
// Design Name: 
// Module Name: number_of_correct_inputs_TB
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


module number_of_correct_inputs_TB();
        reg [2:0] value_checks;                       //Output of "value check" modules taken together as a bus
        wire [1:0] number_of_correct_inputs;
    
number_of_correct_inputs DUT(
    .value_checks(value_checks),
    .number_of_correct_inputs(number_of_correct_inputs)
);
  
integer i;
  
initial
    begin
        value_checks = 0;
        
        for(i=0; i<8; i = i+1)
                begin
                    #20
                    value_checks = i;
                end
        
    end
  
    
endmodule
