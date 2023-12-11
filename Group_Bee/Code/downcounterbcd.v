`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/11/2023 12:04:26 PM
// Design Name: 
// Module Name: DownCounterBCD
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


module downcounterbcd(
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
            dcbcd_temp_reg <= 4'b1001;
        else
            begin: EN_ACTIVE
                if (dcbcd_en)
                    dcbcd_temp_reg <= dcbcd_temp_reg - 1;
            end
    end
    
    assign dcbcd_q = dcbcd_temp_reg;
    
endmodule
