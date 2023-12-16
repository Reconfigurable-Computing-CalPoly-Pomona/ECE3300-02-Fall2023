`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 06:26:10 PM
// Design Name: 
// Module Name: digitSeparator
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


module digitSeparator(
    input [5:0] minutes,
    input [5:0] seconds,
    input [8:0] temp,
    output reg [3:0] min_1,
    output reg [3:0] min_0,
    output reg [3:0] sec_1,
    output reg [3:0] sec_0,
    output reg [3:0] temp_hundred,
    output reg [3:0] temp_ten,
    output reg [3:0] temp_ones,
    output reg [3:0] mode
    );
    
    always@(minutes) // at every minute
        begin
            min_0 = minutes % 10;           // separate one's place digit into one value
            min_1 = minutes / 10;           // separate ten's place digit into another value
        end
    always@(seconds) // at every second
        begin
            sec_0 = seconds % 10;           // separate one's place digit into one value
            sec_1 = seconds / 10;           // separate ten's place digit into another value
        end
    always@(temp) // at every temperature
        begin
            temp_ones = temp % 10;          // separate temperature one's place digit into one value
            temp_ten = (temp / 10) % 10;    // separate temperature ten's place digit into another value
            temp_hundred = temp / 100;      // separate temperature hundreds's place digit into another value
            mode = temp_hundred;
        end
endmodule
