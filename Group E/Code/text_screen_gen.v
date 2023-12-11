`timescale 1ns / 1ps

// Reference book: "FPGA Prototyping by Verilog Examples"
//                    "Xilinx Spartan-3 Version"
// Authored by: Pong P. Chu
// Published by: Wiley, 2008

// Adapted for use on Basys 3 FPGA with Xilinx Artix-7
// by: David J. Marion aka FPGA Dude

module text_screen_gen(
    input clk, reset,
    input video_on,
    input set,
    input up,
    input down,
    input left,
    input right,
    input read_txt_input,
    input enable_output_text,
    input [6:0] sw,
    input [9:0] x, y,
    output data_read_led,
    output reg [11:0] rgb
    );
    
    // signal declaration
    // ascii ROM
    wire [10:0] rom_addr;
    wire [6:0] char_addr;
    wire [3:0] row_addr;
    wire [2:0] bit_addr;
    wire [7:0] font_word;
    wire ascii_bit;
    
    // tile RAM
    wire we;                    // write enable
    wire [11:0] addr_r, addr_w;
    wire [6:0] din, dout;
    // 80-by-30 tile map
    parameter MAX_X = 80;   // 640 pixels / 8 data bits = 80 
    parameter MAX_Y = 30;   // 480 pixels / 16 data rows = 30  
    
    // Min y Value parameter for cursor
    parameter MIN_X = 17;
    parameter MIN_Y = 5; 
    
    // cursor registers
    reg [6:0] cur_x_reg;
    wire [6:0] cur_x_next;
    reg [4:0] cur_y_reg;
    wire [4:0] cur_y_next;
    wire move_xl_tick, move_yu_tick, move_xr_tick, move_yd_tick, cursor_on, set_xr_tick;
    
    // delayed pixel count
    reg [9:0] pix_x1_reg, pix_y1_reg;
    reg [9:0] pix_x2_reg, pix_y2_reg;
    
    // Output rgb signals
    wire [11:0] text_rgb, text_rev_rgb;
    
    // body
    // instantiate debounce for four buttons
    debounce_chu db_left(.clk(clk), .reset(reset), .sw(left), .db_level(), .db_tick(move_xl_tick));
    debounce_chu db_up(.clk(clk), .reset(reset), .sw(up), .db_level(), .db_tick(move_yu_tick));
    debounce_chu db_down(.clk(clk), .reset(reset), .sw(down), .db_level(), .db_tick(move_yd_tick));
    debounce_chu db_right(.clk(clk), .reset(reset), .sw(right), .db_level(), .db_tick(move_xr_tick));
    // move cursor right after writing letter
    debounce_chu db_right_set(.clk(clk), .reset(reset), .sw(set), .db_level(), .db_tick(set_xr_tick));
    // instantiate the ascii / font rom
    ascii_rom a_rom(.clk(clk), .addr(rom_addr), .data(font_word));
    // instantiate dual-port video RAM (2^12-by-7)
    

    wire mov_right_buffer;
    set_right_buffer mySetBuffer(
        .clk(clk),
        .reset(reset),
        .set(set),
        .mov_r(mov_right_buffer)
    );
    
    /* recieving input */
    reg [11:0] text_input_pos = 12'b001010100000; // 657 b001010010001 //659 b001010010011
    reg [11:0] ram_addr_pos = 0;
    wire [6:0] byte_data;
    
    reg [127:0] total_output;
    reg [8:0] index;
    
    /* Storing info into wire */
    wire [127:0] txt_info;
    
    /* Writing to screen */
    reg [11:0] text_output_pos = 12'b100100010010; // address 2322 100100010010 // address 2354
    reg [11:0] encrypted_data_addr = 0;
//    wire [11:0] encrypted_data_addr;
    reg [8:0] wr_index;
    reg en_enc_data_wr;
    wire enc_we;
    reg [7:0] current_write_data;
    
    // Output text
    wire[127:0] encrypted128;
    // Encrypted Key
    wire[127:0] key128 = 128'h000102030405060708090a0b0c0d0e0f;
    
    wire[127:0] OutPutText = (enable_output_text) ? encrypted128 : 0;
    
    wire [255:0] encrypted_to_ASCCI;
    wire [6:0] data_to_text;
    
    // Reading the input text and then writing the encrypted data
    always@(posedge clk)
    begin
            /* Reading Data */
            if(reset || !read_txt_input)
            begin    
                index <= 0;
                ram_addr_pos <= 0;
            end
            
            if(read_txt_input && index < 20 && index > 1)
            begin
                ram_addr_pos <= text_input_pos - (index-2); //msb is read first
                total_output <= (total_output << 8) | {1'b0, byte_data}; // shift msb all the way to the left
                index <= index+1;
            end
            else if(read_txt_input && index <= 1) // 2 cycle buffer in read to prevent issues in reading data
            begin
                index <= index+1;
            end
            
            
            /* Writing Data */
            if(!read_txt_input && enable_output_text && wr_index < 32) // Go through all data values
            begin
                encrypted_data_addr <= text_output_pos + wr_index; // Written because the data is reversed
                
                current_write_data <= data_to_text; // if something doesn't work it's this line
                
                en_enc_data_wr <= 1;
                wr_index <= wr_index +1;
            end
            else if(enable_output_text && wr_index > 32) // State to stop the enable writing to screen
            begin
                en_enc_data_wr <= 0;
                wr_index <= 0;
                encrypted_data_addr <= 0;
            end
            else
            begin
                en_enc_data_wr <= 0;
                wr_index <= 0;
                encrypted_data_addr <= 0;
            end
    end
    
    // goes into encryption
    assign txt_info = total_output;
    
    // Encrypting text input using AES
    AES_Encrypt a(txt_info,key128,encrypted128); 

    wire enableEncryptedText = (!read_txt_input && enable_output_text && wr_index < 32) ? 1'b1 : 1'b0;
    convertToASCII myASCII
    (       
        .clk(clk),
        .enable(enableEncryptedText),
        .reset(reset),
        .shift_amount(wr_index),
        .encrypted_input(OutPutText),
        .ascii_output(data_to_text)                   
    );
    
    
    assign data_read_led = (txt_info > 0) ? 1'h1 : 1'h0;
    assign enc_we = (enable_output_text) ? en_enc_data_wr : 1'b0;
    
    wire [7:0] encrypted_data;
    assign encrypted_data = current_write_data;
    dual_port_ram dp_ram(.clk(clk), .we(we || enc_we), .we_encrypt_data(enable_output_text), .read_info_adrr(ram_addr_pos),
                         .read_encrypt_addr(encrypted_data_addr), .addr_a(addr_w), .addr_b(addr_r), .test_getting_data(byte_data),
                         .din_a(din), .encrypted_data(encrypted_data), .dout_a(), .dout_b(dout)); // 
    
    
    // Cursor registers
    always @(posedge clk or posedge reset)
        if(reset) begin
            cur_x_reg <= MIN_X;
            cur_y_reg <= MIN_Y;
            pix_x1_reg <= 0;
            pix_x2_reg <= 0;
            pix_y1_reg <= 0;
            pix_y2_reg <= 0;
        end    
        else begin
            cur_x_reg <= cur_x_next;
            cur_y_reg <= cur_y_next;
            pix_x1_reg <= x;
            pix_x2_reg <= pix_x1_reg;
            pix_y1_reg <= y;
            pix_y2_reg <= pix_y1_reg;
        end
    
    // tile RAM write
    assign addr_w = {cur_y_reg, cur_x_reg};
    assign we = set;
    assign din = sw;
    
    // tile RAM read
    // use nondelayed coordinates to form tile RAM address
    assign addr_r = {y[8:4], x[9:3]};
    assign char_addr = dout;
    // font ROM
    assign row_addr = y[3:0];
    assign rom_addr = {char_addr, row_addr};
    // use delayed coordinate to select a bit
    assign bit_addr = pix_x2_reg[2:0];
    assign ascii_bit = font_word[~bit_addr];
    
    // new cursor position
    assign cur_x_next = (move_xr_tick && (cur_x_reg == MAX_X - 1)) || (move_xl_tick && (cur_x_reg == 0)) ? 0 :
                        (mov_right_buffer && cur_x_reg < (MIN_X + 15)) ? cur_x_reg + 1 :  // move right when set is high
                        (move_xr_tick && cur_x_reg < (MIN_X + 15)) ? cur_x_reg + 1 :      // move right and limit lowest xval
                        (move_xl_tick && cur_x_reg > MIN_X) ? cur_x_reg - 1 :             // move left
                        cur_x_reg;                                                        // no move
                                           
    assign cur_y_next = (move_yu_tick && (cur_y_reg == 0)) || (move_yd_tick && (cur_y_reg == MAX_Y - 1)) ? 0 :    
                        (move_yu_tick && cur_y_reg > MIN_Y) ? cur_y_reg - 1 :    // move up                        
                        (move_yd_tick) ? cur_y_reg + 1 :    // move down
                        cur_y_reg;                          // no move           
    
    // green over black and reversed video for cursor
    assign text_rgb = (ascii_bit) ? 12'h0F0 : 12'h000;
    assign text_rev_rgb = (ascii_bit) ? 12'h000 : 12'h0F0;
    // use delayed coordinates for comparison
    assign cursor_on = (pix_y2_reg[8:4] == cur_y_reg) &&
                       (pix_x2_reg[9:3] == cur_x_reg);
                       
    // rgb multiplexing circuit
    always @*
        if(~video_on)
            rgb = 12'h000;     // blank
        else
            if(cursor_on)
                rgb = text_rev_rgb;
            else
                rgb = text_rgb; // for actual saved text
      
endmodule