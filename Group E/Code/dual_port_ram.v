`timescale 1ns / 1ps

module dual_port_ram
    #(
        parameter DATA_SIZE = 7,
        parameter ADDR_SIZE = 12
    )
    (
        input clk,
        input we,
        input we_encrypt_data,
        input [ADDR_SIZE-1:0] read_info_adrr,
        input [ADDR_SIZE-1:0] read_encrypt_addr,
        input [ADDR_SIZE-1:0] addr_a, addr_b,
        input [DATA_SIZE-1:0] din_a,
        input [DATA_SIZE-1:0] encrypted_data,
        output [6:0] test_getting_data,
        output [DATA_SIZE-1:0] dout_a, dout_b 
    );
    
    // Infer the RAM as block ram
    (* ram_style = "block" *) reg [DATA_SIZE-1:0] ram [2**ADDR_SIZE-1:0];
    
    // Define the file with initial values
    initial begin
      $readmemb("text_info.txt", ram); 
    end
    
    reg [ADDR_SIZE-1:0] addr_a_reg, addr_b_reg;
    
    reg [ADDR_SIZE-1:0] specific_add_rg; 
    
    always @(posedge clk) begin
        if(we)      // write operation
            if(we_encrypt_data)
                ram[read_encrypt_addr] <= encrypted_data;
            else
                ram[addr_a] <= din_a;
        
        addr_a_reg <= addr_a;
        addr_b_reg <= addr_b;
        specific_add_rg <= read_info_adrr; 
    end
    
    // two read operations for screen information        
    assign dout_a = ram[addr_a_reg];
    assign dout_b = ram[addr_b_reg];
    
    // Third read operation for data encryption input
    assign test_getting_data = ram[specific_add_rg];
    
endmodule
