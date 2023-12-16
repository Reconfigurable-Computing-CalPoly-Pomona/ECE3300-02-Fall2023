`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 05:37:13 PM
// Design Name: 
// Module Name: clk_divider
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


module clk_divider(
    input clk,
    output clk_1Hz,         //1Hz Clock for timer
    output clk_400Hz        //400Hz Clock for anode control
    );
reg clk_1Hz = 0, clk_400Hz = 0;
reg [26:0] counter1 = 0;
reg [26:0] counter2 = 0;

always@(posedge clk) // at positive edge of system clock
    begin
        counter1 <= counter1 + 1;
        counter2 <= counter2 + 1;
        
        if (counter1 == 50000000) // parameter of 50,000,000 for 1 Hz clock
            begin
                clk_1Hz <= ~clk_1Hz; // flip signal
                counter1 <= 0;  // restart counter for 1 Hz clock
            end
        if (counter2 == 125000) // parameter of 125,000 for 400 Hz clock
            begin
                clk_400Hz <= ~clk_400Hz; // flip signal
                counter2 <= 0;  // restart other counter for 400 Hz clock
            end
    end
  
endmodule
