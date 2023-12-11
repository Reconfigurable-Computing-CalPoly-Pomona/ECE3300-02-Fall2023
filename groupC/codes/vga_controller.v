`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/15/2023 05:33:36 PM
// Design Name: 
// Module Name: vga_controller
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


module vga_controller(
    input clk_25MHz,    // 25MHz
    input reset,        // system reset
    output video_on,    // ON while pixel counts for x and y and within display area
    output hsync,       // horizontal sync
    output vsync,       // vertical sync
    output [9:0] x,     // pixel count/position of pixel x, max 0-799
    output [9:0] y      // pixel count/position of pixel y, max 0-524
    );
    
    // Based on VGA standards found at vesa.org for 640x480 resolution
    // Total horizontal width of screen = 800 pixels, partitioned  into sections
    parameter HD = 640;             // horizontal display area width in pixels
    parameter HF = 16;              // horizontal front porch width in pixels
    parameter HB = 48;              // horizontal back porch width in pixels
    parameter HR = 96;              // horizontal retrace width in pixels
    parameter HMAX = HD+HF+HB+HR-1; // max value of horizontal counter = 799
    // Total vertical length of screen = 525 pixels, partitioned into sections
    parameter VD = 480;             // vertical display area length in pixels 
    parameter VF = 10;              // vertical front porch length in pixels  
    parameter VB = 33;              // vertical back porch length in pixels   
    parameter VR = 2;               // vertical retrace length in pixels  
    parameter VMAX = VD+VF+VB+VR-1; // max value of vertical counter = 524   
      
    // Counter Registers
    reg [9:0] h_count_reg; //, h_count_next;
    reg [9:0] v_count_reg; //, v_count_next;
    
    wire v_sync_next, h_sync_next;
    // Logic for horizontal counter
    always @(posedge clk_25MHz or posedge reset)      // pixel tick
    begin
        if(reset)
        begin
            h_count_reg <=0;
        end
        else
        begin
            if(h_count_reg == HMAX)                 // end of horizontal scan
                h_count_reg <= 0;
            else
                h_count_reg <= h_count_reg + 1;  
        end       
    end
  
    // Logic for vertical counter
    always @(posedge clk_25MHz or posedge reset)
    begin
        if(reset)
        begin
            v_count_reg <= 0;
        end
        else
        begin
            if(h_count_reg == HMAX)                 // end of horizontal scan
                if((v_count_reg == VMAX))           // end of vertical scan
                    v_count_reg <= 0;
                else
                    v_count_reg <= v_count_reg + 1;
        end
    end
        
    // h_sync_next asserted within the horizontal retrace area
    assign h_sync_next = ~(reset ? 1'b1 : (h_count_reg >= (HD+HF) && h_count_reg <= (HD+HF+HR-1)));
    
    // v_sync_next asserted within the vertical retrace area
    assign v_sync_next = ~(reset ? 1'b1 : (v_count_reg >= (VD+VF) && v_count_reg <= (VD+VF+VR-1)));
    
    // Video ON/OFF - only ON while pixel counts are within the display area
    assign video_on = (h_count_reg < HD) && (v_count_reg < VD); // 0-639 and 0-479 respectively
            
    // Outputs
    assign hsync  = h_sync_next;
    assign vsync  = v_sync_next;
    assign x      = h_count_reg;
    assign y      = v_count_reg;
            
endmodule
