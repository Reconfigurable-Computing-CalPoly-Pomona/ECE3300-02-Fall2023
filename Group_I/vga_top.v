`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/04/2023 02:13:24 PM
// Design Name: 
// Module Name: vga_top
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


module vga_top(
    input clk,
    input start,
    input done,
    output Hsynq,
    output Vsynq,
    output [3:0] Red,
    output [3:0] Green,
    output [3:0] Blue
    );
    wire clk_25Mhz;
    wire en_V_count;
    wire [15:0] H_counter;
    wire [15:0] V_counter;
    reg [3:0] r_red;
    reg [3:0] r_green;
    reg [3:0] r_blue;

clk_vga vga_clk( 
                .clk(clk), // 100MHz
                .divided_clk(clk_25Mhz) //25MHz
                );
horizontal_counter horizontal(
                .clk_25MHz(clk_25Mhz),
                .en_V_counter(en_V_count),
                .H_count(H_counter)
                );
vertical_counter vertical(
                .clk_25MHz(clk_25Mhz),
                .en_V_count(en_V_count),
                .V_count(V_counter)
                );
// outputs
assign Hsynq = (H_counter < 96) ? 1'b1:1'b0;
assign Vsynq = (V_counter < 2) ? 1'b1:1'b0;

always @ (posedge clk_25Mhz)
begin

//////////////////////////////////////////////////////////////////////////////////////////  
    if (V_counter < 75)
        begin 
            r_red <= 4'hF;    // white                white section above airfryer 
            r_blue <= 4'hF;
            r_green <= 4'hF;
        end  
//////////////////////////////////////////////////////////////////////////////////////////    
  
//////////////////////////////////////////////////////////////////////////////////////////     
    else if (V_counter >= 75 && V_counter < 138)
        begin
            if (H_counter < 200)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
            else if (H_counter >= 200 && H_counter < 600)
                begin
                    r_red <= 4'h0;    // black                           
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 600)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
        end
//////////////////////////////////////////////////////////////////////////////////////////   
   
//////////////////////////////////////////////////////////////////////////////////////////         
    else if (V_counter >= 138 && V_counter < 225)
        begin
            if (H_counter < 200)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
            else if (H_counter >= 200 && H_counter < 250)
                begin
                    r_red <= 4'h0;    // black                         
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 250 && H_counter < 550)
                begin
                    if (start == 1'b1)
                        begin
                            r_red <= 4'hC;    // yellow                         
                            r_blue <= 4'h0;
                            r_green <= 4'hC;
                        end
                    else
                        begin
                            r_red <= 4'hB;    // glass white      
                            r_blue <= 4'hB;
                            r_green <= 4'hB;
                        end
                end
            else if (H_counter >= 550 && H_counter < 600)
                begin
                    r_red <= 4'h0;    // black 
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 600)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
        end
//////////////////////////////////////////////////////////////////////////////////////////   
   
//////////////////////////////////////////////////////////////////////////////////////////          
    else if (V_counter >= 225 && V_counter < 250)
        begin
            if (H_counter < 200)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
            else if (H_counter >= 200 && H_counter < 600)
                begin
                    r_red <= 4'h0;    // black                           
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 600)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
        end
//////////////////////////////////////////////////////////////////////////////////////////  
    
//////////////////////////////////////////////////////////////////////////////////////////          
    else if (V_counter >= 250 && V_counter < 288)
        begin
            if (H_counter < 200)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
            else if (H_counter >= 200 && H_counter < 275)
                begin
                    r_red <= 4'h0;    // black                         
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 275 && H_counter < 375)
                begin
                    if (done == 1'b1)
                        begin
                            r_red <= 4'hF;    // red                         
                            r_blue <= 4'h0;
                            r_green <= 4'h0;
                        end
                    else
                        begin
                            r_red <= 4'h0;    // black      
                            r_blue <= 4'h0;
                            r_green <= 4'h0;
                        end
                end
            else if (H_counter >= 375 && H_counter < 425)
                begin
                    r_red <= 4'h0;    // black 
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 425 && H_counter < 525)
                begin
                    if (start == 1'b1)
                        begin
                            r_red <= 4'h0;    // green                         
                            r_blue <= 4'h0;
                            r_green <= 4'hF;
                        end
                    else if (done == 1'b1)
                        begin
                            r_red <= 4'h0;    // black      
                            r_blue <= 4'h0;
                            r_green <= 4'h0;
                        end
                end
            else if (H_counter >= 525 && H_counter < 600)
                begin
                    r_red <= 4'h0;    // black
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 600)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
        end
//////////////////////////////////////////////////////////////////////////////////////////  
    
//////////////////////////////////////////////////////////////////////////////////////////         
    else if (V_counter >= 288 && V_counter < 313)
        begin
            if (H_counter < 200)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
            else if (H_counter >= 200 && H_counter < 600)
                begin
                    r_red <= 4'h0;    // black                           
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 600)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
        end
//////////////////////////////////////////////////////////////////////////////////////////  
    
//////////////////////////////////////////////////////////////////////////////////////////            
    else if (V_counter >= 313 && V_counter < 326)
        begin
            if (H_counter < 200)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
            else if (H_counter >= 200 && H_counter < 225)
                begin
                    r_red <= 4'h0;    // black                         
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 225 && H_counter < 575)
                begin
                    r_red <= 4'h8;    // gray 
                    r_blue <= 4'h8;
                    r_green <= 4'h8;
                end
            else if (H_counter >= 575 && H_counter < 600)
                begin
                    r_red <= 4'h0;    // black 
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 600)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
        end  
//////////////////////////////////////////////////////////////////////////////////////////  
    
//////////////////////////////////////////////////////////////////////////////////////////          
    else if (V_counter >= 326 && V_counter < 425)
        begin
            if (H_counter < 200)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
            else if (H_counter >= 200 && H_counter < 225)
                begin
                    r_red <= 4'h0;    // black                         
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 225 && H_counter < 375)
                begin
                    r_red <= 4'h8;    // gray 
                    r_blue <= 4'h8;
                    r_green <= 4'h8;
                end
            else if (H_counter >= 375 && H_counter < 425)
                begin
                    r_red <= 4'h3;    // darker gray 
                    r_blue <= 4'h3;
                    r_green <= 4'h3;
                end
            else if (H_counter >= 425 && H_counter < 575)
                begin
                    r_red <= 4'h8;    // gray 
                    r_blue <= 4'h8;
                    r_green <= 4'h8;
                end
            else if (H_counter >= 575 && H_counter < 600)
                begin
                    r_red <= 4'h0;    // black
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 600)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
        end
//////////////////////////////////////////////////////////////////////////////////////////  
    
//////////////////////////////////////////////////////////////////////////////////////////           
    else if (V_counter >= 425 && V_counter < 475)
        begin
            if (H_counter < 200)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
            else if (H_counter >= 200 && H_counter < 225)
                begin
                    r_red <= 4'h0;    // black                         
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 225 && H_counter < 575)
                begin
                    r_red <= 4'h8;    // gray 
                    r_blue <= 4'h8;
                    r_green <= 4'h8;
                end
            else if (H_counter >= 575 && H_counter < 600)
                begin
                    r_red <= 4'h0;    // black 
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 600)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
        end  
//////////////////////////////////////////////////////////////////////////////////////////  

//////////////////////////////////////////////////////////////////////////////////////////           
    else if (V_counter >= 475 && V_counter < 500)
        begin
            if (H_counter < 200)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
            else if (H_counter >= 200 && H_counter < 600)
                begin
                    r_red <= 4'h0;    // black                         
                    r_blue <= 4'h0;
                    r_green <= 4'h0;
                end
            else if (H_counter >= 600)
                begin
                    r_red <= 4'hF;    // white
                    r_blue <= 4'hF;
                    r_green <= 4'hF;
                end
        end 
//////////////////////////////////////////////////////////////////////////////////////////      
//////////////////////////////////////////////////////////////////////////////////////////           
    else if (V_counter >= 500)
        begin
            r_red <= 4'hF;    // white                white section below airfryer 
            r_blue <= 4'hF;
            r_green <= 4'hF;
        end


end



// colors - all colors high = white screen
assign Red = (H_counter < 784 && H_counter > 143 && V_counter < 515 && V_counter > 34) ? r_red : 4'h0;
assign Green = (H_counter < 784 && H_counter > 143 && V_counter < 515 && V_counter > 34) ? r_green : 4'h0;
assign Blue = (H_counter < 784 && H_counter > 143 && V_counter < 515 && V_counter > 34) ? r_blue : 4'h0;

endmodule