`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/05/2023 03:14:34 PM
// Design Name: 
// Module Name: keyboard
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


module keyboard(
        input keyboard_clk,         // CLK100MHZ
        input keyboard_kclk,        // PS2_CLK
        input keyboard_kdata,       // PS2_DATA
        output keyboard_uart_rxd,   // UART_RXD_OUT
        output [3:0] keyboard_out,
        output [31:0] keyboard_code
    );
    
    
    wire keyboard_kclkf, keyboard_kdataf;
    reg keyboard_clk_tmp = 0;
    reg [7:0] keyboard_datacur;                 // 8 bit data signal
    reg [7:0] keyboard_dataprev;                // 8 bit data signal
    reg [3:0] keyboard_cnt;
    reg [31:0] keyboard_keycode;                // 32 bit data buffer for keyboard data input
    reg keyboard_flag;
    reg [3:0] keyboard_out_tmp = 0;
    
    always@(posedge keyboard_clk)               
    begin
        keyboard_clk_tmp <= ~keyboard_clk_tmp;   // 50 MHz clock
    end
    initial 
    begin
        keyboard_keycode[31:0] = 32'h00000000;
        keyboard_cnt = 4'b0000;                 // Start keyboard count at 0
        keyboard_flag = 1'b0;                   // Keyboard flag initially off
    end
    
    debounce keyboard_debounce(                 // Debouncer; basically input signals are noisy, so they
        .clk(keyboard_clk_tmp),                 // must be smoothed out so there are no accidental multi-presses
        .btn_in_1(keyboard_kclk),
        .btn_in_2(keyboard_kdata),
        .btn_out_1(keyboard_kclkf),
        .btn_out_2(keyboard_kdataf)
    );
        
    always@(negedge(keyboard_kclkf))                    // Use keyboard polling clk to read keyboard data
    begin
        case(keyboard_cnt)                              // Read the current keyboard data input, store into current bit based on counter
            0:;                                         //Start bit, 8 bit data signal
            1: keyboard_datacur[0] <= keyboard_kdataf;
            2: keyboard_datacur[1] <= keyboard_kdataf;
            3: keyboard_datacur[2] <= keyboard_kdataf;
            4: keyboard_datacur[3] <= keyboard_kdataf;
            5: keyboard_datacur[4] <= keyboard_kdataf;
            6: keyboard_datacur[5] <= keyboard_kdataf;
            7: keyboard_datacur[6] <= keyboard_kdataf;
            8: keyboard_datacur[7] <= keyboard_kdataf;
            9: keyboard_flag <= 1'b1;                   // Turn on keyboard flag; activate always block down below
            10: keyboard_flag <= 1'b0;                  // Turn off keyboard flag
        
        endcase
            if(keyboard_cnt <= 9)                       // Increment keyboard counter every time keyboard polls
                keyboard_cnt <= keyboard_cnt+1;
            else if(keyboard_cnt == 10)                 // After bit 10, reset back to 0
                keyboard_cnt <= 0;
            
    end
    
    always @(posedge keyboard_flag)
    begin                                                       //write keyboard data into an array
        if ((keyboard_dataprev != keyboard_datacur) || (keyboard_keycode[15:8] == 8'hF0))              // If previously written-in data does not match new data, leftshift keyboard_keycode,
        begin                                                   // load current data into rightmost 8-bit of keyboard_keycode
            keyboard_keycode[31:24] <= keyboard_keycode[23:16]; // Leftmost 8-bit data is overwritten by second-leftmost
            keyboard_keycode[23:16] <= keyboard_keycode[15:8];  // Second-leftmost overwritten with third-leftmost
            keyboard_keycode[15:8] <= keyboard_dataprev;        // Third-leftmost overwritten with data_prev
            keyboard_keycode[7:0] <= keyboard_datacur;          // Rightmost 8-bit overwritten with data_current
            keyboard_dataprev <= keyboard_datacur;              // Data_prev overwriteen with data_current
        end
    end
    
    always@(posedge keyboard_clk)                               
    begin
        //numpad 8
        // if(keyboard_keycode[15:8] != 8'hF0 && keyboard_keycode[7:0] == 8'h75)   // Keycode for numpad 8 (right player up)
        //     keyboard_out_tmp[0] <= 1;
        // else if(keyboard_keycode[15:0] == 16'hF075)                             // Keycode for numpad 8 release    
        //     keyboard_out_tmp[0] <= 0;
        // //numpad 5
        // if(keyboard_keycode[15:8] != 8'hF0 && keyboard_keycode[7:0] == 8'h73)   // Keycode for numpad 5 (right player down)
        //     keyboard_out_tmp[1] <= 1;   
        // else if(keyboard_keycode[15:0] == 16'hF073)                             // Keycode for numpad 5 release
        //     keyboard_out_tmp[1] <= 0;

        if((keyboard_keycode[15:8] != 8'hF0 && keyboard_keycode[7:0] == 8'h75) || keyboard_keycode[15:0] == 16'hE075)   // Keycode for numpad 8 or up arrow (right player up)
            keyboard_out_tmp[0] <= 1;
        else if(keyboard_keycode[15:0] == 16'hF075)                             // Keycode for numpad 8 or up arrow release    
            keyboard_out_tmp[0] <= 0;
        //numpad 5
        if((keyboard_keycode[15:8] != 8'hF0 && keyboard_keycode[7:0] == 8'h73) || keyboard_keycode[15:0] == 16'hE072)   // Keycode for numpad 5 or down arrow (right player down)
            keyboard_out_tmp[1] <= 1;   
        else if(keyboard_keycode[15:0] == 16'hF073 || keyboard_keycode[15:0] == 16'hF072)                             // Keycode for numpad 5 or down arrow release
            keyboard_out_tmp[1] <= 0;

        //w
        if(keyboard_keycode[15:8] != 8'hF0 && keyboard_keycode[7:0] == 8'h1D)   // If F0 release key signal is not found and W key is pressed (left player up)
            keyboard_out_tmp[2] <= 1;
        else if(keyboard_keycode[15:0] == 16'hF01D)                             // W key released
            keyboard_out_tmp[2] <= 0;
        //s
        if(keyboard_keycode[15:8] != 8'hF0 && keyboard_keycode[7:0] == 8'h1B)   // If F0 release key signal is not found and S key is pressed (left player down)
            keyboard_out_tmp[3] <= 1;
        else if(keyboard_keycode[15:0] == 16'hF01B)                             // S key released
            keyboard_out_tmp[3] <= 0;
    end
        
    assign keyboard_out = keyboard_out_tmp;
    assign keyboard_code = keyboard_keycode;
endmodule
