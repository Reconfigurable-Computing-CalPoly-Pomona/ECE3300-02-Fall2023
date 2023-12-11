`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/19/2023 04:16:16 PM
// Design Name: 
// Module Name: ssd_driver
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



module ssd_driver(                                          //
    input [4:0] ssd_driver_port_in,                         // Input is a 4 bit number, represents values from 0 to 15, or 0-9 and A-F in hex
    input ssd_driver_port_dp_in,                            // Input for controlling decimal point
    input [7:0] ssd_driver_port_an_in,
    output [6:0] ssd_driver_port_cc,                        // Output to 7 segment
    output ssd_driver_port_dp_out,                          // Output for decimal point
    output [7:0] ssd_driver_port_an_out                         // Output for anode pins for 7 segments; there are 8 SSDs so 1 bit for display
    );                                                      //
                                                            //
    assign ssd_driver_port_dp_out = ssd_driver_port_dp_in;  // Assign dp_out to dp_in             
    assign ssd_driver_port_an_out = ssd_driver_port_an_in;                 // Only want the rightmost SSD to turn on; set bit 0 to 0, bits [7:1] are z
    reg [6:0] ssd_driver_temp_cc;                           // temp register for port_cc       
                                                            //
    assign ssd_driver_port_cc = ssd_driver_temp_cc;         //
                                                            //
    always@(ssd_driver_port_in)                             // 1 means off
        begin: SEG_ENC                                      
            case(ssd_driver_port_in)                        
                5'h0: ssd_driver_temp_cc = 7'b1000000;      
                5'h1: ssd_driver_temp_cc = 7'b1111001;      
                5'h2: ssd_driver_temp_cc = 7'b0100100;      
                5'h3: ssd_driver_temp_cc = 7'b0110000;      
                5'h4: ssd_driver_temp_cc = 7'b0011001;      
                5'h5: ssd_driver_temp_cc = 7'b0010010;      
                5'h6: ssd_driver_temp_cc = 7'b0000010;      
                5'h7: ssd_driver_temp_cc = 7'b1111000;      
                5'h8: ssd_driver_temp_cc = 7'b0000000;      
                5'h9: ssd_driver_temp_cc = 7'b0011000;      
                5'hA: ssd_driver_temp_cc = 7'b0001000;
                5'hB: ssd_driver_temp_cc = 7'b0000011;
                5'hC: ssd_driver_temp_cc = 7'b1000110;
                5'hD: ssd_driver_temp_cc = 7'b0100001;
                5'hE: ssd_driver_temp_cc = 7'b0000110;
                5'hF: ssd_driver_temp_cc = 7'b0001110;
                5'h10: ssd_driver_temp_cc = 7'b0101110;
                5'h11: ssd_driver_temp_cc = 7'b0011010;
                5'h12: ssd_driver_temp_cc = 7'b0011101;
                5'h13: ssd_driver_temp_cc = 7'b0111111;
                5'h14: ssd_driver_temp_cc = 7'b0001001;
                5'h15: ssd_driver_temp_cc = 7'b0110110;
                                                            
                default: ssd_driver_temp_cc = 7'b1111111;     
            endcase                                         
        end                                                 
    
endmodule
