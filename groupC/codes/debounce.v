`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/18/2023 06:10:02 PM
// Design Name: 
// Module Name: debounce
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


module debounce(                    // Dual input/output debouncer
        input clk,                  // System clock, used for polling
        input btn_in_1,             // Input signal 1
        input btn_in_2,             // Input signal 2
        output btn_out_1,           // Output signal 1
        output btn_out_2            // Output signal 2
    );
    
    reg [4:0] cnt0, cnt1;           // Counter registers used to create buffer
    reg iv0 = 0,iv1 = 0;            // Temp input registers
    reg out0, out1;                 // Output registers

	// Debouncer: Uses a buffer; output only matches input after a small buffer of time to debounce
	// The state of the input is stored into a temp reg
	// Input state must match the stored state in the temp reg long enough for the buffer to end,
	// otherwise the buffer will reset and the output register will not be updated
    
    always@(posedge(clk))
    begin
        if(btn_in_1 == iv0)         // If the button input state stays stable and matches
        begin                       // the currently stored state in the temp input register,
            if (cnt0 == 19)         // then the buffer will count continously until the buffer reaches its limit.
                out0 <= btn_in_1;   // The output register will then be updated with the current input state.
            else
                cnt0 <= cnt0+1;
          end
        else begin                  // If the button input state does not match the current state in the temp reg,
            cnt0 <= 5'b00000;       // then update the temp reg with the current input state.
            iv0 <= btn_in_1;        // If the button input state does not stay stable, then the temp reg will be updated again
        end                         // and the buffer will be reset, with no change to the output register.
        if (btn_in_2 == iv1)begin
            if (cnt1 == 19)
                out1 <= btn_in_2;
            else
                cnt1 <= cnt1+1;
        end
        else
        begin
            cnt1 <= 5'b00000;
            iv1 <= btn_in_2;
        end
    end
  
    assign btn_out_1 = out0;
    assign btn_out_2 = out1;
   
endmodule
