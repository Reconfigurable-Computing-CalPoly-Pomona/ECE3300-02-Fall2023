`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/18/2023 07:02:05 PM
// Design Name: 
// Module Name: score_counter
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


module score_counter(
    input clk,
    input reset,
    input [1:0] d_inc,
    input d_clr,
    output [3:0] dig0,
    output [3:0] dig1,
    output [3:0] dig2,
    output [3:0] dig3
    );
    
    reg [3:0] r_dig0 = 0, r_dig1 = 0, dig0_next = 0, dig1_next = 0; // transistion state 
    reg [3:0] r_dig2 = 0, r_dig3 = 0, dig2_next = 0, dig3_next = 0; // transistion state 

    // wire [1:0] d_inc_temp;
    // debounce d_inc_debounce (
    //     .clk(clk),
    //     .btn_in_1(d_inc[0]),
    //     .btn_in_2(d_inc[1]),
    //     .btn_out_1(d_inc_temp[0]),
    //     .btn_out_2(d_inc_temp[1])
    // );


    //register control
    always @(posedge clk)
    begin
        if (reset)
        begin
            r_dig3 <=0;
            r_dig2 <=0;
            r_dig1 <=0;
            r_dig0 <=0;
        end
      
        else
        begin
            r_dig3 <= dig3_next;
            r_dig2 <= dig2_next;
            r_dig1 <= dig1_next;
            r_dig0 <= dig0_next;
        end        
    end
    
    always @ (posedge d_inc[0] or posedge d_clr)
    begin
        if (d_clr)
        begin
            dig0_next = 0;
            dig1_next = 0;
        end
        else
        begin
            dig0_next = r_dig0;
            dig1_next = r_dig1;
            if (r_dig0 == 9) //overflow at dig0 place
                dig0_next = 0;
            else                
                dig0_next = r_dig0 + 1;
             
            if((r_dig1 == 9) & (r_dig0 == 9)) // overflow at digit1 place
                dig1_next = 0;
            else if (r_dig0 == 9)
                dig1_next = r_dig1 + 1;
        end
    end
    
    always @ (posedge d_inc[1] or posedge d_clr)
    begin
        if (d_clr)
        begin
            dig2_next = 0;
            dig3_next = 0;
        end
        else
        begin
            dig2_next = r_dig2;
            dig3_next = r_dig3;
            if (r_dig2 == 9) //overflow at dig0 place
                dig2_next = 0;
            else                
                dig2_next = r_dig2 + 1;
             
            if((r_dig3 == 9) & (r_dig2 == 9)) // overflow at digit1 place
                dig3_next = 0;
            else if (r_dig2 == 9)
                dig3_next = r_dig3 + 1;
        end
    end
    
    
    assign dig0 = r_dig0;
    assign dig1 = r_dig1;
    assign dig2 = r_dig2;
    assign dig3 = r_dig3;
    

endmodule
