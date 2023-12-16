`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 09:58:30 PM
// Design Name: 
// Module Name: fourtosixteen_decoder
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


module led_fourtosixteen_decoder(
    input start,
    input done,
    input [3:0] mode,
    output [15:0] LED
    );
    
    reg [15:0] led_temp;
    
    
    always @ (mode or done)
        begin
            if(done == 1'b1) begin
                led_temp = 16'b0000000000000000;
                end
                    case(mode)
                        4'b0010: led_temp = 16'b0000000000011111;   //When Temp is between 200-295 F
                        4'b0011: led_temp = 16'b0000001111111111;   // When temp is between 300-395 F
                        4'b0100: led_temp = 16'b1111111111111111;   // When temp is 400 F
                      default: led_temp = 16'b0001111111111000;
                    endcase
        end
        
        assign LED = led_temp;
        
endmodule
