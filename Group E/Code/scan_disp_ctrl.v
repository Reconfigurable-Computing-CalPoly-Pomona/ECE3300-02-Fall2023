`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/19/2023 04:14:26 PM
// Design Name: 
// Module Name: scan_disp_ctrl
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


module scan_disp_ctrl(
    input clk,
    input [7:0] dp_in,
    input [7:0] an_in,
    input [4:0] ssd0,
    input [4:0] ssd1,
    input [4:0] ssd2,
    input [4:0] ssd3,
    input [4:0] ssd4,
    input [4:0] ssd5,
    input [4:0] ssd6,
    input [4:0] ssd7,
    output dp_out,
    output [4:0] disp_out,
    output reg [7:0] an_out
    );
    
    reg [8:0] an_out_temp = 8'b000000001;
    
    reg [2:0] counter = 0;
    genvar i;
    generate
        for(i=0; i<5; i=i+1)
            begin
                 mux_nx1 #(.SIZE(8)) MUX8TO1GEN_SSD_IN (
                    .mux_nx1_in( {ssd7[i], ssd6[i], ssd5[i], ssd4[i], ssd3[i], ssd2[i], ssd1[i], ssd0[i]} ),
                    .mux_nx1_out(disp_out[i]),
                    .mux_nx1_sel(counter)
                 );
            end
        mux_nx1 #(.SIZE(8)) MUX8TO1GEN_DP_IN (
            .mux_nx1_in(dp_in),
            .mux_nx1_out(dp_out),
            .mux_nx1_sel(counter)
        );
    endgenerate
    
    always @ (posedge clk)
    begin
        counter = counter+1;
        an_out = (~({an_out_temp, an_out_temp} << counter)) | an_in;
    end
   
endmodule
