`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/18/2023 07:36:06 PM
// Design Name: 
// Module Name: pong_text
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

/*
For each ASCII character in the ascii_rom.v module, it utilizes 8-bit wide registers to represent 8-pixel wide
characters. Then each character uses 16 of those 8-pixel wide registers to form a height of 16-pixels. I

Each character can be scaled up in multiples of the base dimension.
For example the width can be 8 pixels, 16, 24, etc.
The height can be 16, 32, 48, 64, etc.

In order to use the characters a variable for different parts of text is used to determine where and when
there should be text. 

For example score_on is used for the scoring and this variable should only be true for the desired 
coordinates of text. For the scoring it only outputs/draws text between y-pixel counts between 32 and 61, and x-pixel counts
of 1 and 639 

Case statement is used based on the x and y value the display is at when drawing that would be shown
on the screen. The case statements and what the text region variable requirements for being true are what 
scales the characters as manipulating these force a scaled amount of pixels to be drawn as the regsisters are based on 
powers of 2^n.

Color is determined by a 12-bit value where the first 4-bit value represents red, then the next 4 is green,
then blue. 
*/


module pong_text(
    input clk,
    input [1:0] ball,
    input [3:0] dig0, dig1, dig2, dig3,
    input [9:0] x, y,
    output [3:0] text_on,
    output reg [11:0] text_rgb
    );
    
    // signal declaration
    wire [10:0] rom_addr;
    reg [6:0] char_addr, char_addr_s, char_addr_l, char_addr_r, char_addr_o;
    reg [3:0] row_addr;
    wire [3:0] row_addr_s, row_addr_l, row_addr_r, row_addr_o;
    reg [2:0] bit_addr;
    wire [2:0] bit_addr_s, bit_addr_l, bit_addr_r, bit_addr_o;
    wire [7:0] ascii_word;
    wire ascii_bit, score_on, logo_on, rule_on, over_on;
    wire [5:0] rule_rom_addr;
    
   // instantiate ascii rom
   ascii_rom ascii_unit(.clk(clk), .addr(rom_addr), .data(ascii_word));
   
   // ---------------------------------------------------------------------------
   // score region
   // - display two-digit score and ball # on top left
   // - scale to 16(width) by 32(height) text size
   // - line 1, 16 chars: "Score: dd Ball: d"
   // ---------------------------------------------------------------------------
   assign score_on = (y >= 32) && (y < 64) && (x > 0) && (x < 640);     // Render score if 32 <= y < 64 and x < 01 1111 xxxx == 496
   //assign score_on = (y[9:5] == 0) && (x[9:4] < 16);
   assign row_addr_s = y[4:1];          // 4-bit row address for ASCII ROM
   assign bit_addr_s = x[3:1];          // 3-bit bit address for ASCII ROM
   always @*
    case(x[9:4])
        6'h0 : char_addr_s = 7'h00;     // 
        6'h1 : char_addr_s = 7'h00;     // 
        6'h2 : char_addr_s = 7'h00;     // 
        6'h3 : char_addr_s = 7'h00;     // 
        6'h4 : char_addr_s = 7'h00;     //
        6'h5 : char_addr_s = 7'h53;     // S
        6'h6 : char_addr_s = 7'h43;     // C
        6'h7 : char_addr_s = 7'h4F;     // O
        6'h8 : char_addr_s = 7'h52;     // R
        6'h9 : char_addr_s = 7'h45;     // E
        6'hA : char_addr_s = 7'h00;     // 
        6'hB : char_addr_s = 7'h4C;     // L
        6'hC : char_addr_s = 7'h3A;     // :
        6'hD : char_addr_s = {3'b011, dig1};    // tens digit
        6'hE : char_addr_s = {3'b011, dig0};    // ones digit
        6'hF : char_addr_s = 7'h00;     //
        6'h10 : char_addr_s = 7'h00;     //
        6'h12 : char_addr_s = 7'h42;     // B
        6'h13 : char_addr_s = 7'h41;     // A
        6'h14 : char_addr_s = 7'h4c;     // L
        6'h15 : char_addr_s = 7'h4c;     // L
        6'h16 : char_addr_s = 7'h3A;    // :
        6'h17 : char_addr_s = {5'b01100, ball};
        6'h18 : char_addr_s = 7'h00;     //
        6'h19 : char_addr_s = 7'h00;     //
        6'h1A : char_addr_s = 7'h53;     // S
        6'h1B : char_addr_s = 7'h43;     // C
        6'h1C : char_addr_s = 7'h4F;     // O
        6'h1D : char_addr_s = 7'h52;     // R
        6'h1E : char_addr_s = 7'h45;     // E
        6'h1F : char_addr_s = 7'h00;     // 
        6'h20 : char_addr_s = 7'h52;     // R
        6'h21 : char_addr_s = 7'h3A;     // :
        6'h22 : char_addr_s = {3'b011, dig3};    // tens digit
        6'h23 : char_addr_s = {3'b011, dig2};    // ones digit
        default: char_addr_s = 7'h00;
    endcase
    
    // 5'h20 = 0 0000
    // 5'h0  = 0 0000

    // --------------------------------------------------------------------------
    // logo region
    // - display logo "PONG" at top center
    // - used as background
    // - scale to 64 by 128 text size
    // --------------------------------------------------------------------------
    assign logo_on = (y[9:7] == 2) && (3 <= x[9:6]) && (x[9:6] <= 6);           
    assign row_addr_l = y[6:3];                 // 4-bit row address for ASCII ROM
    assign bit_addr_l = x[5:3];                 // 3-bit bit address for ASCII ROM
    always @*
        case(x[8:6])                        // -x xx-- ----
            3'o3 :    char_addr_l = 7'h50; // P
            3'o4 :    char_addr_l = 7'h4F; // O
            3'o5 :    char_addr_l = 7'h4E; // N
            default : char_addr_l = 7'h47; // G
        endcase
    
    // --------------------------------------------------------------------------
    // rule region
    // - display rule (4 by 16 tiles) on center
    // - rule text:
    //      Rule:
    //          Use two buttons
    //          to move paddle
    //          up and down
    // --------------------------------------------------------------------------
    assign rule_on = (x[9:7] == 2) && (y[9:6] == 2);
    assign row_addr_r = y[3:0];                 // 4-bit row address for ASCII ROM
    assign bit_addr_r = x[2:0];                 // 3-bit bit address for ASCII ROM
    assign rule_rom_addr = {y[5:4], x[6:3]};// 6-bit address, 2-bits used for y, 4-bits used for x; y[5:4] == 00 00xx 0000, x[9:6] == xx xx00 0000
    always @*                               // y = 
        case(rule_rom_addr)                 // Print character based on xy position
            // row 1
            6'h00 : char_addr_r = 7'h52;    // R
            6'h01 : char_addr_r = 7'h55;    // U
            6'h02 : char_addr_r = 7'h4c;    // L
            6'h03 : char_addr_r = 7'h45;    // E
            6'h04 : char_addr_r = 7'h3A;    // :
            6'h05 : char_addr_r = 7'h00;    //
            6'h06 : char_addr_r = 7'h00;    //
            6'h07 : char_addr_r = 7'h00;    //
            6'h08 : char_addr_r = 7'h00;    //
            6'h09 : char_addr_r = 7'h00;    //
            6'h0A : char_addr_r = 7'h00;    //
            6'h0B : char_addr_r = 7'h00;    //
            6'h0C : char_addr_r = 7'h00;    //
            6'h0D : char_addr_r = 7'h00;    //
            6'h0E : char_addr_r = 7'h00;    //
            6'h0F : char_addr_r = 7'h00;    //
            // row 2
            6'h10 : char_addr_r = 7'h55;    // U
            6'h11 : char_addr_r = 7'h53;    // S
            6'h12 : char_addr_r = 7'h45;    // E
            6'h13 : char_addr_r = 7'h00;    // 
            6'h14 : char_addr_r = 7'h41;    // A
            6'h15 : char_addr_r = 7'h52;    // R
            6'h16 : char_addr_r = 7'h52;    // R
            6'h17 : char_addr_r = 7'h4F;    // O
            6'h18 : char_addr_r = 7'h57;    // W
            6'h19 : char_addr_r = 7'h00;    // 
            6'h1A : char_addr_r = 7'h4b;    // K
            6'h1B : char_addr_r = 7'h45;    // E
            6'h1C : char_addr_r = 7'h59;    // Y
            6'h1D : char_addr_r = 7'h53;    // S
            6'h1E : char_addr_r = 7'h00;    // 
            6'h1F : char_addr_r = 7'h00;    //
            // row 3
            6'h20 : char_addr_r = 7'h54;    // T
            6'h21 : char_addr_r = 7'h4F;    // O
            6'h22 : char_addr_r = 7'h00;    // 
            6'h23 : char_addr_r = 7'h4D;    // M
            6'h24 : char_addr_r = 7'h4F;    // O
            6'h25 : char_addr_r = 7'h56;    // V
            6'h26 : char_addr_r = 7'h45;    // E
            6'h27 : char_addr_r = 7'h00;    //
            6'h28 : char_addr_r = 7'h50;    // P
            6'h29 : char_addr_r = 7'h41;    // A
            6'h2A : char_addr_r = 7'h44;    // D
            6'h2B : char_addr_r = 7'h44;    // D
            6'h2C : char_addr_r = 7'h4C;    // L
            6'h2D : char_addr_r = 7'h45;    // E
            6'h2E : char_addr_r = 7'h00;    // 
            6'h2F : char_addr_r = 7'h00;    //
            // row 4
            6'h30 : char_addr_r = 7'h55;    // U
            6'h31 : char_addr_r = 7'h50;    // P
            6'h32 : char_addr_r = 7'h00;    // 
            6'h33 : char_addr_r = 7'h41;    // A
            6'h34 : char_addr_r = 7'h4E;    // N
            6'h35 : char_addr_r = 7'h44;    // D
            6'h36 : char_addr_r = 7'h00;    // 
            6'h37 : char_addr_r = 7'h44;    // D
            6'h38 : char_addr_r = 7'h4F;    // O
            6'h39 : char_addr_r = 7'h57;    // W
            6'h3A : char_addr_r = 7'h4E;    // N
            6'h3B : char_addr_r = 7'h2E;    // 
            6'h3C : char_addr_r = 7'h00;    // 
            6'h3D : char_addr_r = 7'h00;    // 
            6'h3E : char_addr_r = 7'h00;    // 
            6'h3F : char_addr_r = 7'h00;    //
        endcase
    // --------------------------------------------------------------------------
    // game over region
    // - display "GAME OVER" at center
    // - scale to 32(x) by 64(y) text size
    // --------------------------------------------------------------------------
    assign over_on = (y[9:6] == 3) && (5 <= x[9:5]) && (x[9:5] <= 13);  // y[9:6] == 3 == 00 1100 0000 == 192, x[9:5] <= 5 <= 00 1010 0000 <= 160, x[9:5] <= 13 <= 01 1011 1111 <= 447
    assign row_addr_o = y[5:2];                                         // if 160 <= x <= 447 and y pos == 192 is between these values, then over_on == 1, render the GAME OVER text
    assign bit_addr_o = x[4:2];
    always @*
        case(x[8:5])                        // -x xxx- ---- 
            4'h5 : char_addr_o = 7'h47;     // G    4'h5 = -0 101- ---- x-values 160 to 191; don't care about 9th bit since 
            4'h6 : char_addr_o = 7'h41;     // A    4'h6 = -0 110- ---- x-values 192 to 223 
            4'h7 : char_addr_o = 7'h4D;     // M    4'h7 = -0 111- ---- x-values 224 to 255
            4'h8 : char_addr_o = 7'h45;     // E    4'h8 = -1 000- ---- x-values 256 to 287
            4'h9 : char_addr_o = 7'h00;     //      4'h9 = -1 001- ---- x-values 288 to 319
            4'hA : char_addr_o = 7'h4F;     // O    4'hA = -1 010- ---- x-values 320 to 351
            4'hB : char_addr_o = 7'h56;     // V    4'hB = -1 011- ---- x-values 352 to 383
            4'hC : char_addr_o = 7'h45;     // E    4'hC = -1 100- ---- x-values 384 to 415
            default : char_addr_o = 7'h52;  // R    4'hD = -1 101- ---- to 4'hF = -1 111- ----, x-values to 416 to 447
        endcase
    
    // mux for ascii ROM addresses and rgb
    always @* begin
        text_rgb = 12'h000;     // black background
        
        if(score_on) begin
            char_addr = char_addr_s;
            row_addr = row_addr_s;
            bit_addr = bit_addr_s;
            if(ascii_bit)
                text_rgb = 12'hFFF; // white pixel
        end
        
        else if(rule_on) begin
            char_addr = char_addr_r;
            row_addr = row_addr_r;
            bit_addr = bit_addr_r;
            if(ascii_bit)
                text_rgb = 12'hFFF; // white pixel
        end
        
        else if(logo_on) begin
            char_addr = char_addr_l;
            row_addr = row_addr_l;
            bit_addr = bit_addr_l;
            if(ascii_bit)
                text_rgb = 12'hFFF; // white pixel
        end
        
        else begin // game over
            char_addr = char_addr_o;
            row_addr = row_addr_o;
            bit_addr = bit_addr_o;
            if(ascii_bit)
                text_rgb = 12'hFFF; // white pixel
        end        
    end
    
    assign text_on = {score_on, logo_on, rule_on, over_on};     // score_on: flag to render scores if x and y pos are in position
                                                                // logo_on:  flag to render PONG logo                           
    // ascii ROM interface                                      // rule_on:  flag to render rules                               
    assign rom_addr = {char_addr, row_addr};                    // over_on:  flag to render GAME OVER text                          
    assign ascii_bit = ascii_word[~bit_addr];
                                                                // [6:0] char_addr + [3:0] row_addr == 11 bits
                                                                // char_addr is used to reference the start of a character; 2^7 = 128 different characters
                                                                // row_addr is used to reference the rows of binary used to render each character; there are 2^4 = 16 rows per character
endmodule                                                       // Each character is 16 pixels (16 rows) tall, 8 pixels wide by default
