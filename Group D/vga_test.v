`timescale 1ns / 1ps

module vga_test(
	input clk,      
	input rst,
	input [2:0] SW,       
	output hsync, 
	output vsync,
	output [2:0] rgb      
);
	
reg [11:0] rgb_reg;    
wire vidon;         
    
    vga_controller vga_c(
                          .clk(clk), 
                          .rst(rst), 
                          .hsync(hsync), 
                          .vsync(vsync),
                          .vidon(vidon), 
                          .p_tick(), 
                          .x(), 
                          .y()
                        );
always @(posedge clk or posedge rst)
    if (rst)
       rgb_reg <= 0;
    else
       rgb_reg <= SW;
    
assign rgb = (vidon) ? rgb_reg : 12'b0; 
        
endmodule
