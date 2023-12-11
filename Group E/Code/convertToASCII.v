`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/06/2023 01:18:09 PM
// Design Name: 
// Module Name: convertToASCII
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


module convertToASCII
    (
        input clk,
        input enable,
        input reset,
        input [8:0] shift_amount,
        input [127:0] encrypted_input,
        output [7:0] ascii_output
              
    );
  
  reg [7:0] Enc_input;
  always@(posedge clk)
  begin
    if(reset)
        Enc_input <= 0;
    else
    begin
        if(enable)
        begin
            Enc_input <= encrypted_input >> (4* shift_amount);
        end
    end
  end
  
  
  sbox_to_ascii myConverter1(
    .encrypted_input(Enc_input), 
    .c(ascii_output)
  );
  

endmodule