`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 06:00:54 PM
// Design Name: 
// Module Name: binary_to_bcd
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

module binary_to_bcd
     #( parameter                      SIZE = 8)  // input width
      ( input      [SIZE-1         :0] bin     ,  // binary
        output reg [SIZE+(SIZE-4)/3:0] bcd     ); // bcd {...,thousands,hundreds,tens,ones}

  integer i,j;

  always @(bin) begin
    for(i = 0; i <= SIZE+(SIZE-4)/3; i = i+1) bcd[i] = 0;     // initialize with zeros
    bcd[SIZE-1:0] = bin;                                      // initialize with input vector
    for(i = 0; i <= SIZE-4; i = i+1)                          // iterate on structure depth
      for(j = 0; j <= i/3; j = j+1)                           // iterate on structure width
        if (bcd[SIZE-i+4*j -: 4] > 4)                         // if > 4
          bcd[SIZE-i+4*j -: 4] = bcd[SIZE-i+4*j -: 4] + 4'd3; // add 3
  end

endmodule
