module Conway_TB;

    // Inputs
    reg top_clk;
    reg rst;
    reg en;
    reg overflow_ctrl;
    reg [7:0] game_spd;
    reg up_btn;
    reg down_btn;
    reg left_btn;
    reg right_btn;
    reg toggle_btn;

    // Outputs
    wire [3:0] red;
    wire [3:0] green;
    wire [3:0] blue;
    wire hsync;
    wire vsync;
    wire [6:0] ssd_cc;
    wire ssd_odp;
    wire [7:0] ssd_an;
    wire [15:0] debug_led;

    // Instantiate the Conway module
    Conway uut (
        .top_clk(top_clk),
        .rst(rst),
        .en(en),
        .overflow_ctrl(overflow_ctrl),
        .game_spd(game_spd),
        .up_btn(up_btn),
        .down_btn(down_btn),
        .left_btn(left_btn),
        .right_btn(right_btn),
        .toggle_btn(toggle_btn),
        .red(red),
        .green(green),
        .blue(blue),
        .hsync(hsync),
        .vsync(vsync),
        .ssd_cc(ssd_cc),
        .ssd_odp(ssd_odp),
        .ssd_an(ssd_an),
        .debug_led(debug_led)
    );

    // Clock initialization
    initial begin
        top_clk = 0;
        forever #5 top_clk = ~top_clk;
    end

    // Monitor output values
    always @(posedge top_clk) begin
        $display("Red: %b, Green: %b, Blue: %b, HSync: %b, VSync: %b", red, green, blue, hsync, vsync);
    end

    // Testbench stimulus
    initial begin
        // Provide test values to inputs
        rst = 1;
        en = 0;
        overflow_ctrl = 0;
        game_spd = 8'd10; // Example game speed
        up_btn = 0;
        down_btn = 0;
        left_btn = 0;
        right_btn = 0;
        toggle_btn = 0;

        // Wait for a few clock cycles
        #100;

        // De-assert reset
        rst = 0;

        // Test scenario 1
        #50;
        en = 1;
        overflow_ctrl = 1;
        game_spd = 8'd5;
        up_btn = 1;
        #20;
        up_btn = 0;
        down_btn = 1;
        #20;
        down_btn = 0;
        left_btn = 1;
        #20;
        left_btn = 0;
        right_btn = 1;
        #20;
        right_btn = 0;
        toggle_btn = 1;
        #20;
        toggle_btn = 0;

        // Test scenario 2
        #50;
        en = 0;
        overflow_ctrl = 0;
        game_spd = 8'd3;
        up_btn = 0;
        down_btn = 1;
        #20;
        down_btn = 0;
        left_btn = 1;
        #20;
        left_btn = 0;
        right_btn = 0;
        toggle_btn = 1;
        #20;
        toggle_btn = 0;

        // Additional stimulus scenarios
        #50;
        en = 1;
        overflow_ctrl = 1;
        game_spd = 8'd7;
        left_btn = 1;
        #30;
        left_btn = 0;
        right_btn = 1;
        #40;
        right_btn = 0;
        toggle_btn = 1;
        #20;
        toggle_btn = 0;
        up_btn = 1;
        #30;
        up_btn = 0;
        down_btn = 1;
        #30;
        down_btn = 0;
        toggle_btn = 1;
        #20;
        toggle_btn = 0;

        // Add more stimulus cycles as needed

        // End simulation
        $finish;
    end

endmodule
