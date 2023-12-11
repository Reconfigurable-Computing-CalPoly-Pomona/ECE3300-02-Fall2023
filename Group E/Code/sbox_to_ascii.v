`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/06/2023 01:26:38 PM
// Design Name: 
// Module Name: sbox_to_ascii
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


module sbox_to_ascii
    (
        input [3:0] encrypted_input,
        output reg [7:0] c 
    );
       
   always @(encrypted_input)
    case (encrypted_input)
       4'h0: c=7'h30;
       4'h1: c=7'h31;
       4'h2: c=7'h32;
       4'h3: c=7'h33;
       4'h4: c=7'h34;
       4'h5: c=7'h35;
       4'h6: c=7'h36;
       4'h7: c=7'h37;
       4'h8: c=7'h38;
       4'h9: c=7'h39;
       4'hA: c=7'h41;
       4'hB: c=7'h42;
       4'hC: c=7'h43;
       4'hD: c=7'h44;
       4'hE: c=7'h45;
       4'hF: c=7'h46;
    endcase      
            
endmodule