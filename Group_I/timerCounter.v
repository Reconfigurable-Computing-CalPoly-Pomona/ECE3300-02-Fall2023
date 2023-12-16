`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 05:54:48 PM
// Design Name: 
// Module Name: timerCounter
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


module timerCounter(
    input clk_1Hz,
    input rst,
    input start,
    input increment,
    input decrement,
    input [5:0] minutes_in,
    input [5:0] seconds_in,
    output reg [5:0] minutes,
    output reg [5:0]seconds,
    output reg timer_end
    );
    
   
    integer i = 0; // used to check if the microwave should be idle
 
    always @(posedge clk_1Hz)
        begin
        timer_end = 0;   
            if(rst)
                begin
                    timer_end = 0;
                    minutes = minutes_in;
                    seconds = seconds_in;
                end
            if(i == 0)
                begin
                    minutes = minutes_in;
                    seconds = seconds_in;
                end
            
            if(start) // if start is high
            begin
                if(minutes == 0 && seconds == 0) // if the counter reaches 0 minutes and 0 seconds (frying complete)
                    begin
                        minutes = minutes; // no longer decrementing
                        seconds = seconds; // no longer decrementing
                        i = 0;
                        timer_end = 1; // sends indicator that the microwave is done heating
                    end
                else
                    begin  
                        if(seconds == 6'b000000) // if the counter reaches 0 seconds
                            begin
                                seconds <= 6'b111011; // reset seconds to 59 seconds
                                i = 1;
                                if(minutes == 6'b000000) // of the counter reaches 0 minutes
                                    minutes = minutes; // minutes stop decrementing
                                else    
                                    minutes <= minutes - 1; // decrement minutes by 1
                            end
                        else
                            seconds = seconds - 1; // decrement seconds by 1
                            i = 1;
                    end
                end            
        end
endmodule
