`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 09:34:15 PM
// Design Name: 
// Module Name: input_control
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


module input_control
    ( input            clk      ,
      input            rst      ,
      input            left     ,
      input            right    ,
      input            up       ,
      input            down     ,
      output reg [3:0] direction);
    
    wire left_debounced;
    wire right_debounced;
    wire up_debounced;
    wire down_debounced;
    
    always@(posedge clk)
        begin
            if(rst == 1) direction <= 4'b0000;
            else if((left == 1) & (direction != 4'b0010)) direction <= 4'b0001; //left
            else if (right == 1 & (direction != 4'b0001)) direction <= 4'b0010; //right
            else if (up == 1 & (direction != 4'b1000)) direction <= 4'b0100; // up
            else if (down == 1 & (direction != 4'b0100)) direction <= 4'b1000; // down
            else direction <= direction; //keep input
        end
    
endmodule
