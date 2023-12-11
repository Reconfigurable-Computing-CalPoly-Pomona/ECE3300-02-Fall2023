// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwbvgaframe__Syms.h"


void Vwbvgaframe___024root__trace_chg_0_sub_0(Vwbvgaframe___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vwbvgaframe___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_chg_0\n"); );
    // Init
    Vwbvgaframe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwbvgaframe___024root*>(voidSelf);
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vwbvgaframe___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vwbvgaframe___024root__trace_chg_0_sub_0(Vwbvgaframe___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->wbvgaframe__DOT__vga_newline));
        bufp->chgBit(oldp+1,(vlSelf->wbvgaframe__DOT__vga_rd));
        bufp->chgBit(oldp+2,(vlSelf->wbvgaframe__DOT__vgahw__DOT__hrd));
        bufp->chgBit(oldp+3,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vrd));
        bufp->chgBit(oldp+4,(vlSelf->wbvgaframe__DOT__vgahw__DOT__first_frame));
        bufp->chgBit(oldp+5,(vlSelf->wbvgaframe__DOT__vgahw__DOT__w_rd));
        bufp->chgCData(oldp+6,((0xffU & (vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                         >> 0x10U))),8);
        bufp->chgCData(oldp+7,((0xffU & (vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                         >> 8U))),8);
        bufp->chgCData(oldp+8,((0xffU & vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8)),8);
        bufp->chgIData(oldp+9,(vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8),24);
        bufp->chgSData(oldp+10,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos),13);
        bufp->chgSData(oldp+11,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge),13);
        bufp->chgSData(oldp+12,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos),12);
        bufp->chgSData(oldp+13,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge),12);
        bufp->chgCData(oldp+14,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline),4);
        bufp->chgCData(oldp+15,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar),4);
        bufp->chgBit(oldp+16,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__dline));
        bufp->chgIData(oldp+17,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__topbar),24);
        bufp->chgIData(oldp+18,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__midbar),24);
        bufp->chgIData(oldp+19,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__fatbar),24);
        bufp->chgIData(oldp+20,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__gradient),24);
        bufp->chgIData(oldp+21,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__pattern),24);
        bufp->chgSData(oldp+22,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__last_width),13);
        bufp->chgSData(oldp+23,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac),16);
        bufp->chgSData(oldp+24,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+25,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack));
        bufp->chgBit(oldp+26,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb));
        bufp->chgBit(oldp+27,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo));
        bufp->chgBit(oldp+28,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame));
        bufp->chgSData(oldp+29,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos),12);
        bufp->chgSData(oldp+30,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count),13);
        bufp->chgSData(oldp+31,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count),13);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+32,((1U & (~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty)))));
        bufp->chgBit(oldp+33,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty));
        bufp->chgSData(oldp+34,((0x1fffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin))),13);
        bufp->chgSData(oldp+35,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin),14);
        bufp->chgSData(oldp+36,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray),14);
        bufp->chgSData(oldp+37,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray),14);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+38,(vlSelf->wbvgaframe__DOT__vga_newframe));
        bufp->chgBit(oldp+39,(vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_stb));
        bufp->chgBit(oldp+40,(vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_ack));
        bufp->chgBit(oldp+41,(vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_ack));
        bufp->chgSData(oldp+42,(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos),13);
        bufp->chgSData(oldp+43,(vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgSData(oldp+44,((0x3fffU & ((IData)(0x2000U) 
                                            - (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill)))),14);
        bufp->chgSData(oldp+45,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill),14);
        bufp->chgBit(oldp+46,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full));
        bufp->chgSData(oldp+47,((0x1fffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin))),13);
        bufp->chgSData(oldp+48,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray),14);
        bufp->chgSData(oldp+49,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin),14);
        bufp->chgSData(oldp+50,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray),14);
        bufp->chgSData(oldp+51,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray),14);
        bufp->chgSData(oldp+52,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin),14);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+53,((0xffffffU & vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word)),24);
        bufp->chgIData(oldp+54,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word),32);
        bufp->chgCData(oldp+55,((0xffU & (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+56,((0xffU & (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
                                          >> 8U))),8);
        bufp->chgCData(oldp+57,((0xffU & vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word)),8);
    }
    bufp->chgBit(oldp+58,(vlSelf->i_clk));
    bufp->chgBit(oldp+59,(vlSelf->i_pixclk));
    bufp->chgBit(oldp+60,(vlSelf->i_reset));
    bufp->chgBit(oldp+61,(vlSelf->i_en));
    bufp->chgBit(oldp+62,(vlSelf->i_test));
    bufp->chgIData(oldp+63,(vlSelf->i_base_addr),24);
    bufp->chgSData(oldp+64,(vlSelf->i_line_words),14);
    bufp->chgSData(oldp+65,(vlSelf->i_hm_width),13);
    bufp->chgSData(oldp+66,(vlSelf->i_hm_porch),13);
    bufp->chgSData(oldp+67,(vlSelf->i_hm_synch),13);
    bufp->chgSData(oldp+68,(vlSelf->i_hm_raw),13);
    bufp->chgSData(oldp+69,(vlSelf->i_vm_height),12);
    bufp->chgSData(oldp+70,(vlSelf->i_vm_porch),12);
    bufp->chgSData(oldp+71,(vlSelf->i_vm_synch),12);
    bufp->chgSData(oldp+72,(vlSelf->i_vm_raw),12);
    bufp->chgBit(oldp+73,(vlSelf->o_wb_cyc));
    bufp->chgBit(oldp+74,(vlSelf->o_wb_stb));
    bufp->chgIData(oldp+75,(vlSelf->o_wb_addr),24);
    bufp->chgBit(oldp+76,(vlSelf->i_wb_ack));
    bufp->chgBit(oldp+77,(vlSelf->i_wb_err));
    bufp->chgBit(oldp+78,(vlSelf->i_wb_stall));
    bufp->chgIData(oldp+79,(vlSelf->i_wb_data),32);
    bufp->chgBit(oldp+80,(vlSelf->o_vga_vsync));
    bufp->chgBit(oldp+81,(vlSelf->o_vga_hsync));
    bufp->chgCData(oldp+82,(vlSelf->o_vga_red),8);
    bufp->chgCData(oldp+83,(vlSelf->o_vga_grn),8);
    bufp->chgCData(oldp+84,(vlSelf->o_vga_blu),8);
    bufp->chgBit(oldp+85,(vlSelf->o_interrupt));
    bufp->chgBit(oldp+86,(((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0) 
                           & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full))));
    bufp->chgSData(oldp+87,(((0x7f8U & (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
                                        >> 0x15U)) 
                             | (((IData)(vlSelf->wbvgaframe__DOT__vga_newline) 
                                 << 2U) | ((((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0) 
                                             & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full)) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty))))))),11);
    bufp->chgBit(oldp+88,(vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3));
    bufp->chgCData(oldp+89,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe),3);
    bufp->chgBit(oldp+90,((1U & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                                 >> 2U))));
    bufp->chgBit(oldp+91,((IData)((((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe) 
                                    >> 2U) | (IData)(vlSelf->wbvgaframe__DOT__vga_newframe)))));
    bufp->chgCData(oldp+92,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe),3);
    bufp->chgBit(oldp+93,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n));
    bufp->chgBit(oldp+94,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n));
    bufp->chgBit(oldp+95,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3));
    bufp->chgBit(oldp+96,(((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n) 
                           & (IData)(vlSelf->wbvgaframe__DOT__vga_rd))));
    bufp->chgBit(oldp+97,(((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext) 
                           == ((0x3000U & ((~ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                                               >> 0xcU)) 
                                           << 0xcU)) 
                               | (0xfffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray))))));
    bufp->chgBit(oldp+98,(((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext) 
                           == (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray))));
    bufp->chgSData(oldp+99,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray),14);
    bufp->chgSData(oldp+100,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext),14);
    bufp->chgSData(oldp+101,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext),14);
    bufp->chgSData(oldp+102,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext),14);
    bufp->chgSData(oldp+103,(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext),14);
    bufp->chgCData(oldp+104,(vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_stb),3);
}

void Vwbvgaframe___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root__trace_cleanup\n"); );
    // Init
    Vwbvgaframe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwbvgaframe___024root*>(voidSelf);
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
