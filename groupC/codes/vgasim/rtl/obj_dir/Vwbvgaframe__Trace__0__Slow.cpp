// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwbvgaframe__Syms.h"


VL_ATTR_COLD void Vwbvgaframe___024root__trace_init_sub__TOP__0(Vwbvgaframe___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+59,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"i_pixclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"i_test",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"i_base_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+65,0,"i_line_words",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+66,0,"i_hm_width",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+67,0,"i_hm_porch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+68,0,"i_hm_synch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+69,0,"i_hm_raw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+70,0,"i_vm_height",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+71,0,"i_vm_porch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+72,0,"i_vm_synch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+73,0,"i_vm_raw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+74,0,"o_wb_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"o_wb_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"o_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+77,0,"i_wb_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"i_wb_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"i_wb_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"i_wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"o_vga_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_vga_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"o_vga_red",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"o_vga_grn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"o_vga_blu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+86,0,"o_interrupt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wbvgaframe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"WB_SOURCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+107,0,"ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"BUS_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"BITS_PER_COLOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"FW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"BPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"LGF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"i_pixclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"i_test",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"i_base_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+65,0,"i_line_words",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+66,0,"i_hm_width",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+67,0,"i_hm_porch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+68,0,"i_hm_synch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+69,0,"i_hm_raw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+70,0,"i_vm_height",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+71,0,"i_vm_porch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+72,0,"i_vm_synch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+73,0,"i_vm_raw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+74,0,"o_wb_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"o_wb_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"o_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+77,0,"i_wb_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"i_wb_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"i_wb_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"i_wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"o_vga_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_vga_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"o_vga_red",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"o_vga_grn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"o_vga_blu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+86,0,"o_interrupt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"vga_newline",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"vga_newframe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"vga_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("VIDEO_MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"fifo_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"fifo_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"fifo_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"unused_wbfifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("readmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"LGFLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"BUSW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"FIFO_ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"FAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"i_pixclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"i_newframe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"i_baseaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+65,0,"i_linewords",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+70,0,"i_nlines",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+74,0,"o_wb_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"o_wb_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"o_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+77,0,"i_wb_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"i_wb_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"i_wb_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"i_wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"i_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"o_word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"o_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"last_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"last_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"room_for_another_line_in_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"end_of_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"vpos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+45,0,"fifo_availability",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+46,0,"fifo_fill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+90,0,"wb_reset_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+91,0,"wb_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"pix_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"pix_reset_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+31,0,"stb_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+32,0,"ack_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+34,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"wb_reset_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"pix_reset_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"DSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"ASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"i_wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"i_wrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"i_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"i_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"o_wfull",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"o_wfill_level",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+60,0,"i_rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"i_rrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"i_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"o_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"o_rempty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+35,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+98,0,"wfull_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rempty_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+50,0,"wbin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+51,0,"wq2_rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+52,0,"wq1_rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+100,0,"rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+36,0,"rbin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+37,0,"rq2_wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+38,0,"rq1_wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+101,0,"wgraynext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+102,0,"wbinnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+53,0,"wq2_rbin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+112,0,"g2b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+103,0,"rgraynext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+104,0,"rbinnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("newframe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"NFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"i_src_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"i_dest_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"i_stb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"o_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"lcl_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"lcl_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"tfr_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"tfr_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("vgahw", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"BITS_PER_COLOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"HW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"VW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"BPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"BITS_PER_PIXEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"BPP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"i_pixclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"i_test",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"i_rgb_pix",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+66,0,"i_hm_width",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+67,0,"i_hm_porch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+68,0,"i_hm_synch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+69,0,"i_hm_raw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+70,0,"i_vm_height",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+71,0,"i_vm_porch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+72,0,"i_vm_synch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+73,0,"i_vm_raw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+2,0,"o_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"o_newline",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"o_newframe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"o_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"o_red",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"o_grn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"o_blu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"i_red",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"i_grn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"i_blu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"hpos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+44,0,"vpos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+3,0,"hrd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"vrd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"first_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"w_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"tst_red",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"tst_grn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"tst_blu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("vgatsrc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"BITS_PER_COLOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"HW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"VW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"BPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"BITS_PER_PIXEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"BPP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"i_pixclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"i_width",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+70,0,"i_height",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+2,0,"i_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_newline",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"i_newframe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"o_pixel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+114,0,"white",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+115,0,"black",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+116,0,"purplish_blue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+117,0,"purple",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+118,0,"dark_gray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+119,0,"darkest_gray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+120,0,"mid_white",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+121,0,"mid_cyan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+122,0,"mid_magenta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+123,0,"mid_red",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+124,0,"mid_green",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+125,0,"mid_blue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+126,0,"mid_yellow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+127,0,"midv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+128,0,"mid_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"hpos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+12,0,"hedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+13,0,"ypos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+14,0,"yedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+15,0,"yline",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"hbar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"dline",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"topbar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+19,0,"midbar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+20,0,"fatbar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+21,0,"gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+22,0,"pattern",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+23,0,"last_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+129,0,"FRACB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"hfrac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"h_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vwbvgaframe___024root__trace_init_top(Vwbvgaframe___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_init_top\n"); );
    // Body
    Vwbvgaframe___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vwbvgaframe___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vwbvgaframe___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vwbvgaframe___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vwbvgaframe___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vwbvgaframe___024root__trace_register(Vwbvgaframe___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vwbvgaframe___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vwbvgaframe___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vwbvgaframe___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vwbvgaframe___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vwbvgaframe___024root__trace_const_0_sub_0(Vwbvgaframe___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vwbvgaframe___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_const_0\n"); );
    // Init
    Vwbvgaframe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwbvgaframe___024root*>(voidSelf);
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vwbvgaframe___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vwbvgaframe___024root__trace_const_0_sub_0(Vwbvgaframe___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+106,(1U));
    bufp->fullIData(oldp+107,(0x18U),32);
    bufp->fullIData(oldp+108,(0x20U),32);
    bufp->fullIData(oldp+109,(8U),32);
    bufp->fullIData(oldp+110,(0xdU),32);
    bufp->fullIData(oldp+111,(0xcU),32);
    bufp->fullIData(oldp+112,(0xffffffffU),32);
    bufp->fullIData(oldp+113,(2U),32);
    bufp->fullIData(oldp+114,(0xffffffU),24);
    bufp->fullIData(oldp+115,(0U),24);
    bufp->fullIData(oldp+116,(0x2040U),24);
    bufp->fullIData(oldp+117,(0x3f007fU),24);
    bufp->fullIData(oldp+118,(0x202020U),24);
    bufp->fullIData(oldp+119,(0x101010U),24);
    bufp->fullIData(oldp+120,(0xc0c0c0U),24);
    bufp->fullIData(oldp+121,(0xc0c0U),24);
    bufp->fullIData(oldp+122,(0xc000c0U),24);
    bufp->fullIData(oldp+123,(0xc00000U),24);
    bufp->fullIData(oldp+124,(0xc000U),24);
    bufp->fullIData(oldp+125,(0xc0U),24);
    bufp->fullIData(oldp+126,(0xc0c000U),24);
    bufp->fullCData(oldp+127,(0xc0U),8);
    bufp->fullCData(oldp+128,(0U),8);
    bufp->fullIData(oldp+129,(0x10U),32);
}

VL_ATTR_COLD void Vwbvgaframe___024root__trace_full_0_sub_0(Vwbvgaframe___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vwbvgaframe___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_full_0\n"); );
    // Init
    Vwbvgaframe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwbvgaframe___024root*>(voidSelf);
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vwbvgaframe___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vwbvgaframe___024root__trace_full_0_sub_0(Vwbvgaframe___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->wbvgaframe__DOT__vga_newline));
    bufp->fullBit(oldp+2,(vlSelf->wbvgaframe__DOT__vga_rd));
    bufp->fullBit(oldp+3,(vlSelf->wbvgaframe__DOT__vgahw__DOT__hrd));
    bufp->fullBit(oldp+4,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vrd));
    bufp->fullBit(oldp+5,(vlSelf->wbvgaframe__DOT__vgahw__DOT__first_frame));
    bufp->fullBit(oldp+6,(vlSelf->wbvgaframe__DOT__vgahw__DOT__w_rd));
    bufp->fullCData(oldp+7,((0xffU & (vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                      >> 0x10U))),8);
    bufp->fullCData(oldp+8,((0xffU & (vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                      >> 8U))),8);
    bufp->fullCData(oldp+9,((0xffU & vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8)),8);
    bufp->fullIData(oldp+10,(vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8),24);
    bufp->fullSData(oldp+11,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos),13);
    bufp->fullSData(oldp+12,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge),13);
    bufp->fullSData(oldp+13,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos),12);
    bufp->fullSData(oldp+14,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge),12);
    bufp->fullCData(oldp+15,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline),4);
    bufp->fullCData(oldp+16,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar),4);
    bufp->fullBit(oldp+17,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__dline));
    bufp->fullIData(oldp+18,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__topbar),24);
    bufp->fullIData(oldp+19,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__midbar),24);
    bufp->fullIData(oldp+20,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__fatbar),24);
    bufp->fullIData(oldp+21,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__gradient),24);
    bufp->fullIData(oldp+22,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__pattern),24);
    bufp->fullSData(oldp+23,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__last_width),13);
    bufp->fullSData(oldp+24,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac),16);
    bufp->fullSData(oldp+25,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step),16);
    bufp->fullBit(oldp+26,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack));
    bufp->fullBit(oldp+27,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb));
    bufp->fullBit(oldp+28,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo));
    bufp->fullBit(oldp+29,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame));
    bufp->fullSData(oldp+30,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos),12);
    bufp->fullSData(oldp+31,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count),13);
    bufp->fullSData(oldp+32,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count),13);
    bufp->fullBit(oldp+33,((1U & (~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty)))));
    bufp->fullBit(oldp+34,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty));
    bufp->fullSData(oldp+35,((0x1fffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin))),13);
    bufp->fullSData(oldp+36,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin),14);
    bufp->fullSData(oldp+37,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray),14);
    bufp->fullSData(oldp+38,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray),14);
    bufp->fullBit(oldp+39,(vlSelf->wbvgaframe__DOT__vga_newframe));
    bufp->fullBit(oldp+40,(vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_stb));
    bufp->fullBit(oldp+41,(vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_ack));
    bufp->fullBit(oldp+42,(vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_ack));
    bufp->fullSData(oldp+43,(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos),13);
    bufp->fullSData(oldp+44,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos),12);
    bufp->fullSData(oldp+45,((0x3fffU & ((IData)(0x2000U) 
                                         - (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill)))),14);
    bufp->fullSData(oldp+46,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill),14);
    bufp->fullBit(oldp+47,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full));
    bufp->fullSData(oldp+48,((0x1fffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin))),13);
    bufp->fullSData(oldp+49,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray),14);
    bufp->fullSData(oldp+50,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin),14);
    bufp->fullSData(oldp+51,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray),14);
    bufp->fullSData(oldp+52,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray),14);
    bufp->fullSData(oldp+53,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin),14);
    bufp->fullIData(oldp+54,((0xffffffU & vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word)),24);
    bufp->fullIData(oldp+55,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word),32);
    bufp->fullCData(oldp+56,((0xffU & (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
                                       >> 0x10U))),8);
    bufp->fullCData(oldp+57,((0xffU & (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
                                       >> 8U))),8);
    bufp->fullCData(oldp+58,((0xffU & vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word)),8);
    bufp->fullBit(oldp+59,(vlSelf->i_clk));
    bufp->fullBit(oldp+60,(vlSelf->i_pixclk));
    bufp->fullBit(oldp+61,(vlSelf->i_reset));
    bufp->fullBit(oldp+62,(vlSelf->i_en));
    bufp->fullBit(oldp+63,(vlSelf->i_test));
    bufp->fullIData(oldp+64,(vlSelf->i_base_addr),24);
    bufp->fullSData(oldp+65,(vlSelf->i_line_words),14);
    bufp->fullSData(oldp+66,(vlSelf->i_hm_width),13);
    bufp->fullSData(oldp+67,(vlSelf->i_hm_porch),13);
    bufp->fullSData(oldp+68,(vlSelf->i_hm_synch),13);
    bufp->fullSData(oldp+69,(vlSelf->i_hm_raw),13);
    bufp->fullSData(oldp+70,(vlSelf->i_vm_height),12);
    bufp->fullSData(oldp+71,(vlSelf->i_vm_porch),12);
    bufp->fullSData(oldp+72,(vlSelf->i_vm_synch),12);
    bufp->fullSData(oldp+73,(vlSelf->i_vm_raw),12);
    bufp->fullBit(oldp+74,(vlSelf->o_wb_cyc));
    bufp->fullBit(oldp+75,(vlSelf->o_wb_stb));
    bufp->fullIData(oldp+76,(vlSelf->o_wb_addr),24);
    bufp->fullBit(oldp+77,(vlSelf->i_wb_ack));
    bufp->fullBit(oldp+78,(vlSelf->i_wb_err));
    bufp->fullBit(oldp+79,(vlSelf->i_wb_stall));
    bufp->fullIData(oldp+80,(vlSelf->i_wb_data),32);
    bufp->fullBit(oldp+81,(vlSelf->o_vga_vsync));
    bufp->fullBit(oldp+82,(vlSelf->o_vga_hsync));
    bufp->fullCData(oldp+83,(vlSelf->o_vga_red),8);
    bufp->fullCData(oldp+84,(vlSelf->o_vga_grn),8);
    bufp->fullCData(oldp+85,(vlSelf->o_vga_blu),8);
    bufp->fullBit(oldp+86,(vlSelf->o_interrupt));
    bufp->fullBit(oldp+87,(((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0) 
                            & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full))));
    bufp->fullSData(oldp+88,(((0x7f8U & (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
                                         >> 0x15U)) 
                              | (((IData)(vlSelf->wbvgaframe__DOT__vga_newline) 
                                  << 2U) | ((((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0) 
                                              & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full)) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty))))))),11);
    bufp->fullBit(oldp+89,(vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3));
    bufp->fullCData(oldp+90,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe),3);
    bufp->fullBit(oldp+91,((1U & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                                  >> 2U))));
    bufp->fullBit(oldp+92,((IData)((((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe) 
                                     >> 2U) | (IData)(vlSelf->wbvgaframe__DOT__vga_newframe)))));
    bufp->fullCData(oldp+93,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe),3);
    bufp->fullBit(oldp+94,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n));
    bufp->fullBit(oldp+95,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n));
    bufp->fullBit(oldp+96,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n) 
                            & (IData)(vlSelf->wbvgaframe__DOT__vga_rd))));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext) 
                            == ((0x3000U & ((~ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                                                >> 0xcU)) 
                                            << 0xcU)) 
                                | (0xfffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray))))));
    bufp->fullBit(oldp+99,(((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext) 
                            == (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray))));
    bufp->fullSData(oldp+100,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray),14);
    bufp->fullSData(oldp+101,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext),14);
    bufp->fullSData(oldp+102,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext),14);
    bufp->fullSData(oldp+103,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext),14);
    bufp->fullSData(oldp+104,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext),14);
    bufp->fullCData(oldp+105,(vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_stb),3);
}
