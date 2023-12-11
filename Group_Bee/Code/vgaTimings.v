module vgaTimings(
        input VGA_clk,
        input rst,
        output reg [9:0] xCount, yCount,
        output reg displayArea,
        output VGA_hSync, VGA_vSync
    );

    reg p_hSync, p_vSync;

    integer porchHF = 640; //start of horizontal front porch
    integer syncH = 656; //start of horizontal sync
    integer porchHB = 752; //start of horizontal back porch
    integer maxH = 800; //total length of colomn


    integer porchVF = 480; //start of vertical front porch
    integer syncV = 490; //start of vertical sync
    integer porchVB = 492; //start of vertical back porch
    integer maxV = 525; //total length of row

//    always@(rst)
//        begin xCount = 0; yCount = 0; end
    
    always@(posedge VGA_clk)
    begin
        if(xCount == maxH)
            xCount <= 0;
        else
            xCount <= xCount + 1'b1;
    end

    always@(posedge VGA_clk)
    begin
        if(xCount == maxH)
            begin
                if (yCount == maxV)
                    yCount <= 0;
                else
                    yCount <= yCount + 1'b1;
            end
    end

    always@(posedge VGA_clk)
        begin
            displayArea <= ((xCount < porchHF) && (yCount < porchVF));
        end

    always@(posedge VGA_clk)
        begin
            p_hSync <= ((xCount >= syncH) && (xCount < porchHB));
            p_vSync <= ((yCount >= syncV) && (yCount < porchVB));
        end

    assign VGA_vSync = ~p_vSync;
    assign VGA_hSync = ~p_hSync;

endmodule