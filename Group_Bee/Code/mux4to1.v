/* This is a 4-to-1 mux, 12-bit wide. */

module mux4to1(
    input [2:0] selects,
    input [11:0] image1,    //completely
    input [11:0] image2,    //somewhat 
    input [11:0] image3,    //least 
    input [11:0] image4,    //not blurred 
    output reg [11:0] image_out
);


always@(selects or image1 or image2 or image3 or image4)
    begin
            case(selects)
                2'b00: image_out <= image1;    // No correct inputs
                2'b01: image_out <= image2;    // 1 correct input
                2'b10: image_out <= image3;    // 2 correct inputs
                2'b11: image_out <= image4;    // 3 correct inputs
                default: image_out <= 11'd0;    // Standard default
            endcase
    end


endmodule