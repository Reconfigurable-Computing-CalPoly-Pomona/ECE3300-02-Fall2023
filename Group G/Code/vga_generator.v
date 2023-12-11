`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/01/2023 02:12:30 PM
// Design Name: 
// Module Name: VGA_Generator
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

module vga_generator(
    input vga_clk,
    
    output reg [9:0] countX,
    output reg [9:0] countY,
    output reg displayArea,
    output hSync,
    output vSync
 );
 
reg p_hSync;
reg p_vSync;

integer HFporch = 640; //Horizontal Front Porch
integer Hsync = 656; //Horizontal Sync
integer HBporch = 752; //Horizontal Back Porch
integer Hmax = 800; //Total Length of Line

integer VFporch = 480; //Vertical Front Porch
integer Vsync = 490; //Vertical Sync
integer VBporch = 492; //Vertical Back Porch
integer Vmax = 525; //Number of Rows

always @ (posedge vga_clk)
    begin
        if (countX == Hmax)
            countX <= 0;
        else
            countX <= countX + 1'b1;
    end
                 
always @ (posedge vga_clk)
    begin
        if (countX == Hmax)
            begin
                if (countY == Vmax)
                    countY <= 0;
                else
                    countY <= countY + 1'b1;
            end
    end
    
always @ (posedge vga_clk)
    begin
        displayArea <= ((countX < HFporch) && (countY < VFporch));
    end

always @ (posedge vga_clk)
    begin
        p_hSync <= ((countX >= Hsync) && (countX < HBporch));
        p_vSync <= ((countY >= Vsync) && (countY < VBporch));
    end
    
assign vSync = ~p_vSync;
assign hSync = ~p_hSync;
                 

endmodule
