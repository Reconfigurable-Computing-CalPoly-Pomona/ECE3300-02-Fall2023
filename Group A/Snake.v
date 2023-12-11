`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/03/2023 08:01:17 AM
// Design Name: 
// Module Name: Snake
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


    module Snake
        ( input            clk   , 
          input            rst   ,
          input            right ,
          input            left  ,
          input            up    ,
          input            down  ,
          output reg [3:0] red   ,
          output reg [3:0] green ,
          output reg [3:0] blue  ,
          output           h_sync,
          output           v_sync,
          output     [6:0] cc_out,
          output           dp_out,
          output     [7:0] an_out);
    
    wire VGA_clk, update_clk, displayArea;
    wire [9:0] xCount, yCount;
    
    wire [3:0] direction;
    wire [9:0] randX, randomX;
    wire [8:0] randY, randomY;
    
    reg apple, border, bodyOdd, bodyEven, head;

    reg [9:0] appleX, appleY;
    reg [9:0] snakeX[127:0];
    reg [9:0] snakeY[127:0];
    
    
    reg gameOver;
    reg gotApple;
    
    integer i, j, k;
    
    integer centerX, centerY;
    integer distX, distY;
    integer distanceSquared;
        
    reg [6:0] head_ptr; // Pointer to the head of the snake in BRAM
    reg [6:0] size; // size of body / number of apples eaten / score
    
    clock_divider #(
        .DIVISOR(4) // 100MHz/4 = 25Mhz ~ 25.175MHz
    ) VGA_CLK_GEN (
        .clk(clk),
        .block_clk(VGA_clk)
    );
    
    clock_divider #(
        .DIVISOR(20000000) // 100MHz/20000000 = 5hz
    ) UPD_CLK_GEN (
        .clk(clk),
        .block_clk(update_clk)
    );
    
    vga_driver VGA_GEN(
        .VGA_clk(VGA_clk),
        .xCount(xCount),
        .yCount(yCount),
        .displayArea(displayArea),
        .VGA_hSync(h_sync),
        .VGA_vSync(v_sync)
    );
    
    random_generator RND_PNT_GEN(
        .VGA_clk(VGA_clk),
        .randX(randX),
        .randY(randY)
    );
    
    input_control BUT_CTL_GEN(
        .clk(clk),
        .rst(gameOver),
        .left(left),
        .right(right),
        .up(up),
        .down(down),
        .direction(direction)
    );
    
    Score score(
        .clk(clk),
        .in(size),
        .cc_out(cc_out),
        .dp_out(dp_out),
        .an_out(an_out)
    );
    
    initial begin
        head_ptr <= 0;
        snakeX[0] <= 10'd200;
        snakeY[0] <= 9'd200;
        size <= 0;
        appleX <= 300;
        appleY <= 350;
        gameOver <= 0;
    end
    
    always@(posedge VGA_clk) begin
    
        // Center of the apple
        centerX = appleX + 5;
        centerY = appleY + 5;
    
        // Calculate distances from the center
        distX = xCount - centerX;
        distY = yCount - centerY;
    
        // Calculate the square of the distance (to avoid square root for simplicity)
        distanceSquared = distX*distX + distY*distY;
    
        // Check if the distance is within the radius (radius squared = 25 for radius of 5)
        apple = (distanceSquared < 25);
    end
     
    always@(posedge VGA_clk) begin
        border = (
            (xCount < 10 | xCount > 630) |
            (yCount < 10 | yCount > 470)
        );
    end
    
    always@(posedge VGA_clk) begin
        head = (
            (xCount > snakeX[head_ptr] & xCount < snakeX[head_ptr] + 10) & 
            (yCount > snakeY[head_ptr] & yCount < snakeY[head_ptr] + 10)
        );
    end
       
    always@(posedge VGA_clk) begin
        for(j = 127, bodyOdd = 0; (127 - j) < size && ~bodyOdd; j = j - 2) begin
            bodyOdd = (
                (xCount > snakeX[(head_ptr + j) % 128] & xCount < snakeX[(head_ptr + j) % 128] + 10) & 
                (yCount > snakeY[(head_ptr + j) % 128] & yCount < snakeY[(head_ptr + j) % 128] + 10)
            );
        end
    end
    
    always@(posedge VGA_clk) begin
        for(k = 126, bodyEven = 0; (127 - k) < size && ~bodyEven; k = k - 2) begin
            bodyEven = (
                (xCount > snakeX[(head_ptr + k) % 128] & xCount < snakeX[(head_ptr + k) % 128] + 10) & 
                (yCount > snakeY[(head_ptr + k) % 128] & yCount < snakeY[(head_ptr + k) % 128] + 10)
            );
        end
    end
    
    always@(posedge VGA_clk) gameOver <= ((head & border) | (head & (bodyOdd | bodyEven)) | rst);
     
    always@(posedge VGA_clk) gotApple <= ((snakeX[head_ptr] == appleX) & (snakeY[head_ptr] == appleY));
    
     always@(posedge update_clk or posedge gameOver) begin
        if(gameOver) begin
            head_ptr <= 0;
            snakeX[0] <= 10'd200;
            snakeY[0] <= 9'd200;
            size <= 0;
            appleX <= 300;
            appleY <= 350;
        end else begin
            case(direction)
                4'b0001: begin
                    snakeX[(head_ptr + 1) % 128] <= snakeX[head_ptr] - 10;
                    snakeY[(head_ptr + 1) % 128] <= snakeY[head_ptr];
                    head_ptr <= (head_ptr + 1) % 128;
                end
                4'b0010: begin
                    snakeX[(head_ptr + 1) % 128] <= snakeX[head_ptr] + 10;
                    snakeY[(head_ptr + 1) % 128] <= snakeY[head_ptr];
                    head_ptr <= (head_ptr + 1) % 128;
                end
                4'b0100: begin
                    snakeY[(head_ptr + 1) % 128] <= snakeY[head_ptr] - 10;
                    snakeX[(head_ptr + 1) % 128] <= snakeX[head_ptr];
                    head_ptr <= (head_ptr + 1) % 128;
                end
                4'b1000: begin
                    snakeY[(head_ptr + 1) % 128] <= snakeY[head_ptr] + 10;
                    snakeX[(head_ptr + 1) % 128] <= snakeX[head_ptr];
                    head_ptr <= (head_ptr + 1) % 128;
                end
            endcase
            if(gotApple)begin
                size <= size + 1;
                appleX <= randX;
                appleY <= randY;
            end
        end 
     end
    
    always@(posedge VGA_clk) begin
        red = {4{(displayArea & apple & !(head | bodyEven))| (displayArea & bodyOdd)}};
        green = {4{displayArea & head | displayArea & (bodyOdd | bodyEven)}};
        blue = {4{displayArea & border}};
    end
            
endmodule
