`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 06:21:30 PM
// Design Name: 
// Module Name: temper_counter
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


module temper_counter(
    input clk,
    input inc_btn,
    input dec_btn,
    output reg [8:0] temperature = 9'd200
    );
    
    
  // Parameters
  parameter START_VALUE = 9'd200;       //min value is 200 F
  parameter INCREMENT = 9'd5;           // increase and decrease by 5 F
  parameter MAX_VALUE = 9'd400;         // max value is 400 F

  // Internal signals
  reg inc_btn_prev;
  reg dec_btn_prev;

  // Counter logic
  always @(posedge clk) begin
    if (inc_btn & ~inc_btn_prev) begin
      // Increment button is pressed
      temperature <= (temperature + INCREMENT) >= MAX_VALUE ? MAX_VALUE : (temperature + INCREMENT);
    end

    if (dec_btn & ~dec_btn_prev) begin
      // Decrement button is pressed
      temperature <= (temperature - INCREMENT) <= START_VALUE ? START_VALUE : (temperature - INCREMENT);
    end
  end

  // Synchronize button inputs
  always @(posedge clk) begin
    inc_btn_prev <= inc_btn;
    dec_btn_prev <= dec_btn;
  end

endmodule
