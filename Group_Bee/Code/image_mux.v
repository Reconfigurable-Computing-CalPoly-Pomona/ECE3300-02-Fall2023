`default_nettype wire 

/* This module is used to output a specific image to the VGA driver based on the inputs to the switches. */

module image_mux(
        input clk,                  // In final version, this is the 25 MHz clock; BRAM modules depend on this clock to be synced with VGA driver
        input [2:0] mux_selects,    // Output of number_of_correct_inputs module. Selects the corresponding image from the actual mux module below.
        input [7:0] row,            // yCount from VGA driver module. Determines which pixel data to pull from each memory module.
        input [6:0] col,            // xCount from VGA driver module. Determines which pixel data to pull from each memory module.
        output [11:0] colordata     // Actual output of pixel data to VGA module.
    );

wire clk_25MHz;                     // Temporary wire used for TB of this module only. 

wire [11:0] completelyblurred_out;  // Output of "completely blurred" memory.
wire [11:0] somewhatblurred_out;    // Output of "somewhat blurred" memory.
wire [11:0] leastblurred_out;       // Output of "least blurred" memory.
wire [11:0] notblurred_out;         // Output of "not blurred" memory.


/* Temporary module to produce 25MHz clock for memory modules. Used in TB only. Will be commented out in final version */
//clk_wiz_0 clk_25Mhz_gen
//  (  
//  .clk_out1(clk_25MHz),
//  .clk_in1(clk)
//  );

/* "completetly blurred" image memory */
monkey_blur_0_50_100_rom completelyblurred( 
        .clk(clk),
		.row(row),
		.col(col),
		.color_data(completelyblurred_out)
);

/* "somewhat blurred" image memory */
monkey_blur_1_50_100_rom somewhatblurred(      
        .clk(clk),
		.row(row),
		.col(col),
		.color_data(somewhatblurred_out)
);

/* "least blurred" image memory */
monkey_blur_2_50_100_rom leastblurred(         
        .clk(clk),
		.row(row),
		.col(col),
		.color_data(leastblurred_out)
);

/* "not blurred" image memory */
monkey_100_50_rom notblurred( 
        .clk(clk),
		.row(row),
		.col(col),
		.color_data(notblurred_out)
);

/* Mux. Takes in each memory's output, outputs a single image memory 
   based on select from number_of_correct_inputs module.*/
mux4to1 actualMux(                       
    .selects(mux_selects),                   
    .image1(completelyblurred_out),    
    .image2(somewhatblurred_out),  
    .image3(leastblurred_out),  
    .image4(notblurred_out),   
    .image_out(colordata)
);

endmodule