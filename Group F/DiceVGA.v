`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 12:33:04 AM
// Design Name: 
// Module Name: DiceVGA
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


module DiceVGA(
    input clk,
    input reset,
    input [3:0] number1,
    input [3:0] number2,
    input [3:0] number3,
    input [3:0] number4,
    output wire [3:0] red,
    output wire [3:0] blue,
    output wire [3:0] green,
    output wire vsync,
    output wire hsync
    );

    // VGA parameters
  parameter hpixels = 10'd800;
  parameter vlines  = 10'd521;
  parameter hbp = 10'd144; 
  parameter hfp = 10'd784; 
  parameter vbp = 10'd31;
  parameter vfp = 10'd511;
  
  reg [10:0] hc = 0;
  reg [10:0] vc = 0;
  reg vsync_reg = 0;
  reg hsync_reg = 0;
  reg vidon = 0;
  reg [3:0] red_reg = 0;
  reg [3:0] blue_reg = 0;
  reg [3:0] green_reg = 0;
  reg [3:0] number_reg = 4'b0000;
  reg vsenable = 0;

  // Draw four squares with numbers logic
  always @(posedge clk or posedge reset) begin
    if (reset) begin
      hc <= 0;
      vc <= 0;
      vsync_reg <= 0;
      hsync_reg <= 0;
      vidon <= 0;
      red_reg <= 4'b0000;
      blue_reg <= 4'b0000;
      green_reg <= 4'b0000;
      number_reg <= 4'b0000;
    end else begin
      // Determine the position of each square
      if (hc < hpixels/2 && vc < vlines/2) begin
        red_reg <= 4'b1111; // Top-left square: Red
        number_reg <= number1; // Number inside the square
      end else if (hc >= hpixels/2 && vc < vlines/2) begin
        green_reg <= 4'b1111; // Top-right square: Green
        number_reg <= number2; // Number inside the square
      end else if (hc < hpixels/2 && vc >= vlines/2) begin
        blue_reg <= 4'b1111; // Bottom-left square: Blue
        number_reg <= number3; // Number inside the square
      end else if (hc >= hpixels/2 && vc >= vlines/2) begin
        red_reg <= 4'b1111;
        green_reg <= 4'b1111;
        blue_reg <= 4'b1111; // Bottom-right square: White
        number_reg <= number4; // Number inside the square
      end

      // VGA timing logic
      if (reset) begin
        hc <= 0;
        vsenable <= 1;
      end else begin
        if (hc == hpixels - 1) begin
          hc <= 0;
          vsenable <= 1;
        end else begin
          hc <= hc + 1;
          vsenable <= 0;
        end
      end

      // Horizontal Sync Pulse
      if (reset) begin
        hsync_reg <= 0;
      end else begin
        if (hc < hbp || hc >= hfp) begin
          hsync_reg <= 1;
        end else begin
          hsync_reg <= 0;
        end
      end

      // Vertical Counter
      if (reset) begin
        vc <= 0;
      end else begin
        if (vsenable) begin
          if (vc == vlines - 1) begin
            vc <= 0;
          end else begin
            vc <= vc + 1;
          end
        end
      end

      // Vertical Sync Pulse
      if (reset) begin
        vsync_reg <= 0;
      end else begin
        if (vc < vbp || vc >= vfp) begin
          vsync_reg <= 1;
        end else begin
          vsync_reg <= 0;
        end
      end

      // Enable video out when within the proches
      if (reset) begin
        vidon <= 0;
      end else begin
        if ((hc < hfp) && (hc > hbp) && (vc < vfp) && (vc > vbp)) begin
          vidon <= 1;
        end else begin
          vidon <= 0;
        end
      end
    end
  end

  // Assign output signals
  assign red = vidon ? red_reg : 4'b0000;
  assign green = vidon ? green_reg : 4'b0000;
  assign blue = vidon ? blue_reg : 4'b0000;
  assign vsync = vsync_reg;
  assign hsync = hsync_reg;

endmodule