`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/08/2023 11:32:17 PM
// Design Name: 
// Module Name: image_mux_plus_vga
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


module image_mux_plus_vga(
            input sys_clk,  //25MHz 
            input sys_rst,
            input [1:0] mux_selects_sws,
            output reg [11:0] colordata,
            output vsync,
            output hsync
    );
    

wire [9:0] xCount;  // Current column #
wire [9:0] yCount;  // Current row #
reg [9:0] imageX = 10'd295;   // Location on screen that image should begin displaying (left of image)
reg [9:0] imageY = 10'd190;   // Location on screen that image should begin displaying (top of image)
wire displayArea;   // Check if row and column are currently in the display area before generating pixel.
reg write_image;    // "Enable" for generating a pixel to the screen.
wire [11:0] colordata_temp;     // Connects output of mux (data from BRAM) to the output.
    
vgaTimings outputVGA(
    .VGA_clk(sys_clk),
    .xCount(xCount), 
    .yCount(yCount),
    .displayArea(displayArea),
    .VGA_hSync(hsync), 
    .VGA_vSync(vsync)
);

image_mux muxForImages(
    .clk(sys_clk),
    .mux_selects(mux_selects_sws),
    .row(yCount - imageY),
    .col(xCount - imageX),
    .colordata(colordata_temp)
);
    
always@(posedge sys_clk)
            begin
        if(sys_rst)
            begin
                colordata <= 0;
                write_image <= 0;
            end
            
        else
                write_image <= (
                    (xCount > imageX & xCount < (imageX + 50)) &    // (imageX + #) : # is the width of images
                    (yCount > imageY & yCount < (imageY + 100))     // (imageY + #) : # is the height of images
                               );
                               
    if(write_image & displayArea)
            begin
                colordata <= colordata_temp;
                
            end
            
            else
                begin
                    colordata <= 0;
                end
          
            end
endmodule
