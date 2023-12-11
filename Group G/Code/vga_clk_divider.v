`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/01/2023 02:38:05 PM
// Design Name: 
// Module Name: ClockDivider
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


module vga_clk_divider(
    input clk,          // Input clock signal
    output reg vga_clk  // Output clock signal for VGA, declared as a register because its value is updated in an always block
);
    integer a = 0;      // Counter variable used to track the number of clock cycles
    
    // This always block triggers on the rising edge of the input clock signal
    always @ (posedge clk) begin // If the counter 'a' is less than 'check', increment 'a' and keep the VGA clock low
        if(a < 3) begin
            a <= a + 1;     // Increment 'a' by 1
            vga_clk <= 0;   // Set VGA clock to 0 (low)
        end else begin // Once 'a' reaches the value of 'check', reset 'a' and set VGA clock high
            a <= 0;         // Reset 'a' to 0
            vga_clk <= 1;   // Set VGA clock to 1 (high)
        end
    end
endmodule
