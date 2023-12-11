`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 11:57:24 PM
// Design Name: 
// Module Name: image_mux_TB
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


module image_mux_TB();
        reg clk;
        reg [2:0] mux_selects;
        reg [7:0] row;
        reg [6:0] col;
        wire [11:0] colordata;

image_mux DUT(
    .clk(clk),
    .mux_selects(mux_selects),
    .row(row),
    .col(col),
    .colordata(colordata)
);

integer i;

initial
    begin
        clk = 0;
        mux_selects = 0;
        row = 8'd0;
        col = 8'b10010010;
    end

always
    begin
        #10 clk = ~clk;
        
        for(i=0; i<4; i = i+1)
                begin
                    #20
                    mux_selects = i;
                end
    end

endmodule