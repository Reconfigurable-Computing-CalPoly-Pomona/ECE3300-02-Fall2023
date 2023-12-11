`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 08:38:42 PM
// Design Name: 
// Module Name: Up_Down_Counter
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


module Up_Down_Counter(
        input count_direction,
        input clock,
        input enable,
        input reset,
        
        output[3:0] digit_out
    );
    
    reg[3:0] digit_out_reg;
    
    always @(clock)
        begin
            if(reset & count_direction) //reset and counting up
                digit_out_reg <= 4'b0000;
            else if(reset & ~count_direction) //reset and counting down
                begin
                    digit_out_reg <= 4'b0000;
                end
            else
                begin
                    if(enable & count_direction) //enabled counting up
                        digit_out_reg <= digit_out_reg + 1;
                    else if(enable & ~count_direction) //enabled counting down
                        begin
                            digit_out_reg <= digit_out_reg - 1;
                        end
                end     
        end
        
    assign digit_out = digit_out_reg;
endmodule
