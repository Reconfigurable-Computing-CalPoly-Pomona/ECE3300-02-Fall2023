`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/11/2023 06:08:12 AM
// Design Name: 
// Module Name: pong_top_clkman_tb
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


module pong_top_clkman_tb(
    );
    
    reg clk;                    // 100MHz
    reg reset = 0;                  // btnR
    reg key_clk;                // PS2_CLK
    reg key_data;               // PS2_DATA
    reg inputsw = 0;
    reg [3:0] btn = 0;
    wire hsync;                 // to VGA Connector
    wire vsync;                 // to VGA Connector
    wire [11:0] rgb;            // to DAC, to VGA Connector 
    wire [6:0] ssd_port_cc;     // to SSDs    
    wire [7:0] ssd_port_an_out; // to SSDs
    wire ssd_port_odp;          // to SSDs
    
    initial begin
        clk = 0;
        forever #1 clk = ~clk;
    end
    
    initial begin
        key_clk = 0;
        forever #5 key_clk = ~key_clk; 
    end
    
    initial
    begin
        forever             // 1D = 0001 1101
        begin
            key_data = 0;
            #10;
            
            key_data = 1;
            #10;
            key_data = 0;
            #10;
            key_data = 1;
            #10;
            key_data = 1;
            #10;
            key_data = 1;
            #10;
            key_data = 0;
            #10;
            key_data = 0;
            #10;
            key_data = 0;
            
            key_data = 1; // 1D
            #10;
            key_data = 0;
            #10;
            key_data = 1;
            #10;
            key_data = 1;
            #10;
            key_data = 1;
            #10;
            key_data = 0;
            #10;
            key_data = 0;
            #10;
            key_data = 0;
            
            key_data = 0; // F0
            #10;
            key_data = 0;
            #10;
            key_data = 0;
            #10;
            key_data = 0;
            #10;
            key_data = 1;
            #10;
            key_data = 1;
            #10;
            key_data = 1;
            #10;
            key_data = 1;
        end
    end
    
    integer i, j, k;
    initial
    begin
        for (i=0; i<3; i=i+1)
        begin
            reset = i;
            for (j=0; j<4; j=j+1)
            begin
                inputsw = j;
                for (k=0; k<2**4; k=k+1)
                begin
                    btn = k;
                    #10;
                end
            end
        end
        $finish;
    end
    
    pong_top_clkman tb(
        .clk(clk),
        .reset(reset),
        .key_clk(key_clk),
        .inputsw(inputsw),
        .btn(btn),
        .key_data(key_data),
        .hsync(hsync),
        .vsync(vsync),
        .rgb(rgb),
        .ssd_port_cc(ssd_port_cc),
        .ssd_port_an_out(ssd_port_an_out),
        .ssd_port_odp(ssd_port_odp)
    );
    
endmodule
