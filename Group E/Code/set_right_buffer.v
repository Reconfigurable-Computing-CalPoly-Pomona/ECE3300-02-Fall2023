`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/03/2023 01:16:19 PM
// Design Name: 
// Module Name: set_right_buffer
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


module set_right_buffer(
        input clk,
        input reset,
        input set,
        output reg mov_r
    );
    
    reg [1:0] state = 2'b00;
    
    always@(posedge clk)
    begin
        if(reset)
            state <= 2'b00;
            
        case(state)
            2'b00:
                if(set)
                begin
                    state <= state+1;
                    mov_r <= 1'b0;
                end
            2'b01:    
                if(~set)
                begin
                    mov_r <= 1'b1;
                    state <= 2'b10;
                end
            2'b10:
                if(~set)
                begin
                    mov_r <= 1'b0;
                    state <= 2'b00;
                end
        endcase    
        
    end
    
    
    
    
endmodule
