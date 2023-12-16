`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2023 06:39:23 PM
// Design Name: 
// Module Name: display_sseg
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


module display_sseg(
    input [3:0] min_1,
    input [3:0] min_0,
    input [3:0] sec_1,
    input [3:0] sec_0,
    input [3:0] space,
    input [3:0] temp_2,
    input [3:0] temp_1,
    input [3:0] temp_0,
    output reg [6:0] disp_min_1,
    output reg [6:0] disp_min_0,
    output reg [6:0] disp_sec_1,
    output reg [6:0] disp_sec_0,
    output reg [6:0] disp_off,
    output reg [6:0] disp_temp_2,
    output reg [6:0] disp_temp_1,
    output reg [6:0] disp_temp_0
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
     
    always @(min_1) // Changes the 7seg display for every second (at the ones place)
    begin
        case(min_1)
            4'b0000: disp_min_1 <= ZERO; //0
            4'b0001: disp_min_1 <= ONE; //1
            4'b0010: disp_min_1 <= TWO; //2
            4'b0011: disp_min_1 <= THREE; //3
            4'b0100: disp_min_1 <= FOUR; //4
            4'b0101: disp_min_1 <= FIVE; //5
            4'b0110: disp_min_1 <= SIX; //6
            4'b0111: disp_min_1 <= SEVEN; //7
            4'b1000: disp_min_1 <= EIGHT; //8
            4'b1001: disp_min_1 <= NINE; //9
            default: disp_min_1 <= 7'dz;
        endcase        
    end
    always @(min_0) // Changes the 7seg display for every second (at the tens place)
        begin
            case(min_0)
                4'b0000: disp_min_0 <= ZERO; //0
                4'b0001: disp_min_0 <= ONE; //1
                4'b0010: disp_min_0 <= TWO; //2
                4'b0011: disp_min_0 <= THREE; //3
                4'b0100: disp_min_0 <= FOUR; //4
                4'b0101: disp_min_0 <= FIVE; //5
                4'b0110: disp_min_0 <= SIX; //6
                4'b0111: disp_min_0 <= SEVEN; //7
                4'b1000: disp_min_0 <= EIGHT; //8
                4'b1001: disp_min_0 <= NINE; //9
                default: disp_min_0 <= 7'dz;
            endcase        
        end
    always @(sec_1) // Changes the 7seg display for every minute (at the ones place)
        begin
            case(sec_1)
                4'b0000: disp_sec_1 <= ZERO; //0
                4'b0001: disp_sec_1 <= ONE; //1
                4'b0010: disp_sec_1 <= TWO; //2
                4'b0011: disp_sec_1 <= THREE; //3
                4'b0100: disp_sec_1 <= FOUR; //4
                4'b0101: disp_sec_1 <= FIVE; //5
                4'b0110: disp_sec_1 <= SIX; //6
                4'b0111: disp_sec_1 <= SEVEN; //7
                4'b1000: disp_sec_1 <= EIGHT; //8
                4'b1001: disp_sec_1 <= NINE; //9
                default: disp_sec_1 <= 7'dz;
            endcase        
        end
    always @(sec_0) // Changes the 7seg display for every minute (at the tens place)
        begin
            case(sec_0)
                4'b0000: disp_sec_0 <= ZERO; //0
                4'b0001: disp_sec_0 <= ONE; //1
                4'b0010: disp_sec_0 <= TWO; //2
                4'b0011: disp_sec_0 <= THREE; //3
                4'b0100: disp_sec_0 <= FOUR; //4
                4'b0101: disp_sec_0 <= FIVE; //5
                4'b0110: disp_sec_0 <= SIX; //6
                4'b0111: disp_sec_0 <= SEVEN; //7
                4'b1000: disp_sec_0 <= EIGHT; //8
                4'b1001: disp_sec_0 <= NINE; //9
                default: disp_sec_0 <= 7'dz;
            endcase        
        end
    always @(space) // Changes the 7seg display for every minute (at the tens place)
        begin
            case(space)
                4'b0000: disp_off <= 7'b1111111; //0
                4'b0001: disp_off <= 7'b1111111; //1
                default: disp_off <= 7'dz;
            endcase        
        end    
    always @(temp_2) // Changes the 7seg display for every second (at the ones place)
        begin
            case(temp_2)
                4'b0000: disp_temp_2 <= ZERO; //0
                4'b0001: disp_temp_2 <= ONE; //1
                4'b0010: disp_temp_2 <= TWO; //2
                4'b0011: disp_temp_2 <= THREE; //3
                4'b0100: disp_temp_2 <= FOUR; //4
                4'b0101: disp_temp_2 <= FIVE; //5
                4'b0110: disp_temp_2 <= SIX; //6
                4'b0111: disp_temp_2 <= SEVEN; //7
                4'b1000: disp_temp_2 <= EIGHT; //8
                4'b1001: disp_temp_2 <= NINE; //9
                default: disp_temp_2 <= 7'dz;
            endcase        
        end
    always @(temp_1) // Changes the 7seg display for every second (at the tens place)
        begin
            case(temp_1)
                4'b0000: disp_temp_1 <= ZERO; //0
                4'b0001: disp_temp_1 <= ONE; //1
                4'b0010: disp_temp_1 <= TWO; //2
                4'b0011: disp_temp_1 <= THREE; //3
                4'b0100: disp_temp_1 <= FOUR; //4
                4'b0101: disp_temp_1 <= FIVE; //5
                4'b0110: disp_temp_1 <= SIX; //6
                4'b0111: disp_temp_1 <= SEVEN; //7
                4'b1000: disp_temp_1 <= EIGHT; //8
                4'b1001: disp_temp_1 <= NINE; //9
                default: disp_temp_1 <= 7'dz;
            endcase        
        end
    always @(temp_0) // Changes the 7seg display for every minute (at the ones place)
        begin
            case(temp_0)
                4'b0000: disp_temp_0 <= ZERO; //0
                4'b0001: disp_temp_0 <= ONE; //1
                4'b0010: disp_temp_0 <= TWO; //2
                4'b0011: disp_temp_0 <= THREE; //3
                4'b0100: disp_temp_0 <= FOUR; //4
                4'b0101: disp_temp_0 <= FIVE; //5
                4'b0110: disp_temp_0 <= SIX; //6
                4'b0111: disp_temp_0 <= SEVEN; //7
                4'b1000: disp_temp_0 <= EIGHT; //8
                4'b1001: disp_temp_0 <= NINE; //9
                default: disp_temp_0 <= 7'dz;
            endcase        
        end
endmodule
