`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 07:15:19 AM
// Design Name: 
// Module Name: bcd_control
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


module bcd_control
    #( parameter                 SIZE = 8)
     ( input  [$clog2(SIZE)-1:0] sel     ,
       input  [SIZE**2-1     :0] in      ,
       output [3             :0] out     );

    assign out = in >> sel * 4;
          
endmodule
