`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/09/2023 10:13:41 AM
// Design Name: 
// Module Name: game_downcounter_tens
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


module game_downcounter_tens(
    input dcbcd_clk,
    input dcbcd_rst,
    input dcbcd_en,
    output [3:0] dcbcd_q
    );
    
    wire and_out;
    wire or_out;
    reg [3:0] dcbcd_temp_reg;
   

and(and_out,~dcbcd_temp_reg[3],~dcbcd_temp_reg[2],~dcbcd_temp_reg[1],~dcbcd_temp_reg[0], dcbcd_en);
or(or_out, and_out, dcbcd_rst);


always@(posedge dcbcd_clk)
    begin: UCBCD_OP

        if (or_out)
            dcbcd_temp_reg <= 4'b0010;
        else
            begin: EN_ACTIVE
                if (dcbcd_en)
                    dcbcd_temp_reg <= dcbcd_temp_reg - 1;
            end
    end
    
    assign dcbcd_q = dcbcd_temp_reg;
    
endmodule
