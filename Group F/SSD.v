`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/07/2023 12:19:23 AM
// Design Name: 
// Module Name: SSD
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


module SSD(
        input clock, //100
        input reset,
        input [3:0] in0,
        input [3:0] in1,
        input [3:0] in2,
        input [3:0] in3,
        input [3:0] in4,
        input [3:0] in5,
        input [3:0] in6,
        input [3:0] in7,
        output reg [0:6] segment_outputs,
        output reg [7:0] anode_select // selectng which anode is needed
        );
        
     parameter ZERO  = 7'b0000001;
     parameter ONE   = 7'b1001111;
     parameter TWO   = 7'b0010010;
     parameter THREE = 7'b0000110;
     parameter FOUR  = 7'b1001100;
     parameter FIVE  = 7'b0100100;
     parameter SIX   = 7'b0100000;
     parameter SEVEN = 7'b0001111;
     parameter EIGHT = 7'b0000000;
     parameter NINE  = 7'b0000100;
     
     reg [2:0] digit_select;
     reg [16:0] digit_timer;
     
     always @(posedge clock or posedge reset)
     begin
        if (reset)
        begin 
            digit_select <= 0;
            digit_timer <= 0;
            //anode_select <= 8'b11111100;
        end
        else
            if (digit_timer == 99999)
            begin
                digit_timer <= 0;
                digit_select <= digit_select + 1;
            end
            else 
                digit_timer <= digit_timer + 1;
     end
     
     always @(digit_select or reset) // digit select is being controlled by the timer
        begin
            if(reset == 1'b1) // if reset is high, both anodes are turned to be 00
                begin
                anode_select = 8'b00000000;
                end
           else if (reset == 1'b0 && digit_select == 3'b000) // player one score
                begin
                    anode_select = 8'b11111110;
                end
          else if (reset == 1'b0 && digit_select == 3'b001) // dice 2
                begin
                    anode_select = 8'b11111101;
                end
          else if (reset == 1'b0 && digit_select == 3'b010) // dice 1
                begin
                    anode_select = 8'b11111011;
                end
          else if (reset == 1'b0 && digit_select == 3'b011) // off
                begin
                    anode_select = 8'b11111111;
                end
          else if (reset == 1'b0 && digit_select == 3'b100) // off
                begin
                    anode_select = 8'b11111111;
                end
          else if (reset == 1'b0 && digit_select == 3'b101) // dice 4
                begin
                    anode_select = 8'b11011111;             
                end
          else if (reset == 1'b0 && digit_select == 3'b110) // dice 3
                begin
                    anode_select = 8'b10111111;
                end
          else if (reset == 1'b0 && digit_select == 3'b111) // player two score
                begin
                    anode_select = 8'b01111111;
                end
                        
        /*  case(digit_select)
                1'b00 : anode_select = 8'b11111110;
                1'b01 : anode_select = 8'b11111101;
                // default : anode_select = 8'b11111100;
            endcase
         */  end 
      
     
      always @*  
        case(digit_select)
            3'b000 : begin
                   case (in0)   // player 1 score
                        4'b0000 : segment_outputs = ZERO;
                        4'b0001 : segment_outputs = ONE;
                        4'b0010 : segment_outputs = TWO;
                        4'b0011 : segment_outputs = THREE;
                        4'b0100 : segment_outputs = FOUR;
                        4'b0101 : segment_outputs = FIVE;
                        4'b0110 : segment_outputs = SIX;
                        4'b0111 : segment_outputs = SEVEN;
                        4'b1000 : segment_outputs = EIGHT;
                        4'b1001 : segment_outputs = NINE;
                   endcase
                end
            
            3'b001 : begin 
                 case (in1)     // dice 1
                        4'b0000 : segment_outputs = ZERO;
                        4'b0001 : segment_outputs = ONE;
                        4'b0010 : segment_outputs = TWO;
                        4'b0011 : segment_outputs = THREE;
                        4'b0100 : segment_outputs = FOUR;
                        4'b0101 : segment_outputs = FIVE;
                        4'b0110 : segment_outputs = SIX;
                        4'b0111 : segment_outputs = SEVEN;
                        4'b1000 : segment_outputs = EIGHT;
                        4'b1001 : segment_outputs = NINE;
                   endcase
                end
            3'b010 : begin 
                 case (in2)     // dice 2
                        4'b0000 : segment_outputs = ZERO;
                        4'b0001 : segment_outputs = ONE;
                        4'b0010 : segment_outputs = TWO;
                        4'b0011 : segment_outputs = THREE;
                        4'b0100 : segment_outputs = FOUR;
                        4'b0101 : segment_outputs = FIVE;
                        4'b0110 : segment_outputs = SIX;
                        4'b0111 : segment_outputs = SEVEN;
                        4'b1000 : segment_outputs = EIGHT;
                        4'b1001 : segment_outputs = NINE;
                   endcase
                end 
            3'b011 : begin 
                 case (in3)
                        4'b0000 : segment_outputs = ZERO;
                        4'b0001 : segment_outputs = ONE;
                        4'b0010 : segment_outputs = TWO;
                        4'b0011 : segment_outputs = THREE;
                        4'b0100 : segment_outputs = FOUR;
                        4'b0101 : segment_outputs = FIVE;
                        4'b0110 : segment_outputs = SIX;
                        4'b0111 : segment_outputs = SEVEN;
                        4'b1000 : segment_outputs = EIGHT;
                        4'b1001 : segment_outputs = NINE;
                   endcase
                end 
            3'b100 : begin 
                 case (in4)
                        4'b0000 : segment_outputs = ZERO;
                        4'b0001 : segment_outputs = ONE;
                        4'b0010 : segment_outputs = TWO;
                        4'b0011 : segment_outputs = THREE;
                        4'b0100 : segment_outputs = FOUR;
                        4'b0101 : segment_outputs = FIVE;
                        4'b0110 : segment_outputs = SIX;
                        4'b0111 : segment_outputs = SEVEN;
                        4'b1000 : segment_outputs = EIGHT;
                        4'b1001 : segment_outputs = NINE;
                   endcase
                end
             3'b101 : begin 
                 case (in5)
                        4'b0000 : segment_outputs = ZERO;
                        4'b0001 : segment_outputs = ONE;
                        4'b0010 : segment_outputs = TWO;
                        4'b0011 : segment_outputs = THREE;
                        4'b0100 : segment_outputs = FOUR;
                        4'b0101 : segment_outputs = FIVE;
                        4'b0110 : segment_outputs = SIX;
                        4'b0111 : segment_outputs = SEVEN;
                        4'b1000 : segment_outputs = EIGHT;
                        4'b1001 : segment_outputs = NINE;
                   endcase
                end
             3'b110 : begin 
                 case (in6)
                        4'b0000 : segment_outputs = ZERO;
                        4'b0001 : segment_outputs = ONE;
                        4'b0010 : segment_outputs = TWO;
                        4'b0011 : segment_outputs = THREE;
                        4'b0100 : segment_outputs = FOUR;
                        4'b0101 : segment_outputs = FIVE;
                        4'b0110 : segment_outputs = SIX;
                        4'b0111 : segment_outputs = SEVEN;
                        4'b1000 : segment_outputs = EIGHT;
                        4'b1001 : segment_outputs = NINE;
                   endcase
                end 
            3'b111 : begin 
                 case (in7)
                        4'b0000 : segment_outputs = ZERO;
                        4'b0001 : segment_outputs = ONE;
                        4'b0010 : segment_outputs = TWO;
                        4'b0011 : segment_outputs = THREE;
                        4'b0100 : segment_outputs = FOUR;
                        4'b0101 : segment_outputs = FIVE;
                        4'b0110 : segment_outputs = SIX;
                        4'b0111 : segment_outputs = SEVEN;
                        4'b1000 : segment_outputs = EIGHT;
                        4'b1001 : segment_outputs = NINE;
                   endcase
                end 
         endcase
endmodule

