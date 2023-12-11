
module Conway(
    input top_clk,
    input rst,
    input en,
    input overflow_ctrl,
    input [7:0] game_spd,
    input up_btn,
    input down_btn,
    input left_btn,
    input right_btn,
    input toggle_btn,
    
    // VGA outputs
    output reg [3:0] red,
    output reg [3:0] green,
    output reg [3:0] blue,
    output hsync,
    output vsync,
    
    // 7-segment display outputs
//    output [15:0] ssd_led,
    output [6:0] ssd_cc,
    output ssd_odp,
    output [7:0] ssd_an,
    
    output [15:0] debug_led
);
    reg [3:0] cursor_x = 4'b0000;
    reg [3:0] cursor_y = 4'b0000;    
    wire [9:0] count_x;
    wire [9:0] count_y;
    wire displayArea;
    wire R, G, B;
    
    reg [4:0] last_input = 5'b11111; // { toggle, right, left, down, up }
    
    wire [11:0] speed_display; // BCD 0 - 255
    reg [15:0] gen_display = 16'b0000000000000000;
    
    assign debug_led = gen_display; // mostly for debug reasons, but it looks cool
    
    reg [15:0] game_grid [0:15];
    reg [15:0] next_grid [0:15];
    reg [1:0] last_update = 2'b00;
    reg [1:0] request_update = 2'b00;
    
    wire ssd_clk;
    wire vga_clk;
    wire game_clk;
    
    clk_manager ssd_manager(
        .clk_in(top_clk),
        .clk_out(ssd_clk),
        .clk_spd(8'b00000000) // zero-out for sims
    );
    
    vga_clk_divider vga_divider(
        .clk(top_clk),
        .vga_clk(vga_clk)
    );
    
    clk_manager game_clk_mgr(
        .clk_in(top_clk),
        .clk_out(game_clk),
        .clk_spd(~game_spd) // inverted, that way higher number = faster
    );
    
    vga_generator vga_gen(
        .vga_clk(vga_clk),
        .hSync(hsync),
        .vSync(vsync),
        .countX(count_x),
        .countY(count_y),
        .displayArea(displayArea)
    );
    
    ssd_driver ssd_output (
        .ssd_clk(ssd_clk),
        .ssd_driver_port_inp({ speed_display, 4'b0000, gen_display }),
        .ssd_driver_port_en(8'b11101111),
        .ssd_driver_port_idp(1'b1),
        // outputs
//        .ssd_driver_port_led(ssd_led),
        .ssd_driver_port_cc(ssd_cc),
        .ssd_driver_port_odp(ssd_odp),
        .ssd_driver_port_an(ssd_an)
    );
    
    binary_bcd_converter binary_bcd(
        .bin(game_spd),
        .bcd(speed_display)
    );
    
    // grid update stuff
    reg [4:0] updater_x = 5'b00000;
    reg [4:0] updater_y = 5'b00000;    
    reg [2:0] neighbors = 3'b000;
    
    
    always @ (posedge top_clk) begin: check_for_updates
    
        
        if (rst) begin
            for (updater_y = 0; updater_y < 16; updater_y = updater_y + 1) begin
                for (updater_x = 0; updater_x < 16; updater_x = updater_x + 1) begin
                    game_grid[updater_y][updater_x] = 1'b0;
                    next_grid[updater_y][updater_x] = 1'b0; // also clear this cell in next gen
                    gen_display = 0;
                end
            end
        end
        
        // if rst is false, check if grid needs to be updated
        else if ((last_update != request_update) & (game_spd > 0)) begin
            // first: update the NEXT generation
            for (updater_y = 0; updater_y < 16; updater_y = updater_y + 1) begin
                for (updater_x = 0; updater_x < 16; updater_x = updater_x + 1) begin// the following IF statements sum up the neighbors of this cell
                    neighbors = 3'b000; // I know this CAN overflow, but the outcome is the same for 0 and 8
                    if (overflow_ctrl) begin // disallow wrap-around
                        if (updater_y > 0) begin // top left, top mid, top right
                            if ((updater_x > 0) & game_grid[updater_y-1][updater_x-1]) neighbors = neighbors + 1;
                            if (game_grid[updater_y-1][updater_x]) neighbors = neighbors + 1;
                            if ((updater_x < 15) & game_grid[updater_y-1][updater_x+1]) neighbors = neighbors + 1;
                        end
                        if (updater_y < 15) begin // bot left, bot mid, bot right
                            if ((updater_x > 0) & game_grid[updater_y+1][updater_x-1]) neighbors = neighbors + 1;
                            if (game_grid[updater_y+1][updater_x]) neighbors = neighbors + 1;
                            if ((updater_x < 15) & game_grid[updater_y+1][updater_x+1]) neighbors = neighbors + 1;
                        end
                        // mid left, mid right
                        if (updater_x > 0 & game_grid[updater_y][updater_x-1]) neighbors = neighbors + 1;
                        if (updater_x < 15 & game_grid[updater_y][updater_x+1]) neighbors = neighbors + 1;
                    end
                    else begin // allow wrap-around
                        if (game_grid[((updater_y-1)&5'b01111)][((updater_x-1)&5'b01111)]) neighbors = neighbors + 1;
                        if (game_grid[((updater_y-1)&5'b01111)][((updater_x  )&5'b01111)]) neighbors = neighbors + 1;
                        if (game_grid[((updater_y-1)&5'b01111)][((updater_x+1)&5'b01111)]) neighbors = neighbors + 1;
                        if (game_grid[((updater_y  )&5'b01111)][((updater_x-1)&5'b01111)]) neighbors = neighbors + 1;
                        if (game_grid[((updater_y  )&5'b01111)][((updater_x+1)&5'b01111)]) neighbors = neighbors + 1;
                        if (game_grid[((updater_y+1)&5'b01111)][((updater_x-1)&5'b01111)]) neighbors = neighbors + 1;
                        if (game_grid[((updater_y+1)&5'b01111)][((updater_x  )&5'b01111)]) neighbors = neighbors + 1;
                        if (game_grid[((updater_y+1)&5'b01111)][((updater_x+1)&5'b01111)]) neighbors = neighbors + 1;
                    end
                    
                    
                    // rules: (n = neighbors)
                    // if (n < 2), die
                    // if (n == 2), stay dead or alive
                    // if (n == 3), become alive
                    // if (n > 3), die
                    if (neighbors == 2) next_grid[updater_y][updater_x] = game_grid[updater_y][updater_x]; // stay
                    else if (neighbors == 3) next_grid[updater_y][updater_x] = 1'b1; // alive
                    else next_grid[updater_y][updater_x] = 1'b0; // die
                    
                end
            end
            
            
            // next: update the visual display
            for (updater_y = 0; updater_y < 16; updater_y = updater_y + 1) begin
                for (updater_x = 0; updater_x < 16; updater_x = updater_x + 1) begin
                    game_grid[updater_y][updater_x] = next_grid[updater_y][updater_x];
                end
            end
            
            // and apply changes
            gen_display = gen_display + 1;
            last_update = last_update + 1;
        end
        
        // cursor movement update
        if (up_btn & ~last_input[0])    cursor_y = cursor_y - 1;
        if (down_btn & ~last_input[1])  cursor_y = cursor_y + 1;
        if (left_btn & ~last_input[2])  cursor_x = cursor_x - 1;
        if (right_btn & ~last_input[3]) cursor_x = cursor_x + 1;
        if (toggle_btn & ~last_input[4] & ~rst) game_grid[cursor_y][cursor_x] = ~game_grid[cursor_y][cursor_x];
        
        last_input <= { toggle_btn, right_btn, left_btn, down_btn, up_btn };
    end
    
    always @ (posedge game_clk) begin: display_next_gen
        if (en) request_update = request_update + 1;
    end
    
    assign R = (displayArea & game_grid[count_y / 30][(count_x-80) / 30]);
    assign G = (displayArea & game_grid[count_y / 30][(count_x-80) / 30]);
    assign B = (displayArea & game_grid[count_y / 30][(count_x-80) / 30]);
    
    
    wire x_edge, y_edge;
    assign x_edge = ((count_x-80) % 30 < 2) | ((count_x-80) % 30 > 27);
    assign y_edge = (count_y % 30 < 2) | (count_y % 30 > 27);
    
    always @ (posedge vga_clk) begin: write_rgb_output
        if (count_x > 560 | count_x < 80) begin
            red <= 4'b0010;
            green <= 4'b0010;
            blue <= 4'b0010;
        end else if ((count_y/30 == cursor_y) & (count_x-80)/30 == cursor_x) begin
            red <=   ((x_edge | y_edge) ? 4'b1111 : {4{R}});
            green <= ((x_edge | y_edge) ? 4'b0000 : {4{G}});
            blue <=  ((x_edge | y_edge) ? 4'b0000 : {4{B}});
        end else begin
            red <=   ((x_edge | y_edge) ? 4'b0100 : {4{R}}); // 4'b0111 is grey, used for drawing cell lines
            green <= ((x_edge | y_edge) ? 4'b0100 : {4{G}});
            blue <=  ((x_edge | y_edge) ? 4'b0100 : {4{B}});
        end
    end
    
endmodule
