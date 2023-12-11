// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdemo__Syms.h"


void Vdemo___024root__trace_chg_0_sub_0(Vdemo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdemo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root__trace_chg_0\n"); );
    // Init
    Vdemo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemo___024root*>(voidSelf);
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdemo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdemo___024root__trace_chg_0_sub_0(Vdemo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->demo__DOT__vgai__DOT__vga_newline));
        bufp->chgBit(oldp+1,(vlSelf->demo__DOT__vgai__DOT__vga_rd));
        bufp->chgBit(oldp+2,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hrd));
        bufp->chgBit(oldp+3,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vrd));
        bufp->chgBit(oldp+4,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__first_frame));
        bufp->chgBit(oldp+5,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__w_rd));
        bufp->chgCData(oldp+6,((0xffU & (vlSelf->demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                         >> 0x10U))),8);
        bufp->chgCData(oldp+7,((0xffU & (vlSelf->demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                         >> 8U))),8);
        bufp->chgCData(oldp+8,((0xffU & vlSelf->demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8)),8);
        bufp->chgIData(oldp+9,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8),24);
        bufp->chgSData(oldp+10,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos),13);
        bufp->chgSData(oldp+11,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge),13);
        bufp->chgSData(oldp+12,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos),11);
        bufp->chgSData(oldp+13,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge),11);
        bufp->chgCData(oldp+14,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline),4);
        bufp->chgCData(oldp+15,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar),4);
        bufp->chgBit(oldp+16,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__dline));
        bufp->chgIData(oldp+17,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__topbar),24);
        bufp->chgIData(oldp+18,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__midbar),24);
        bufp->chgIData(oldp+19,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__fatbar),24);
        bufp->chgIData(oldp+20,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__gradient),24);
        bufp->chgIData(oldp+21,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__pattern),24);
        bufp->chgSData(oldp+22,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__last_width),13);
        bufp->chgSData(oldp+23,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac),16);
        bufp->chgSData(oldp+24,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+25,(vlSelf->demo__DOT__wb_cyc));
        bufp->chgBit(oldp+26,(vlSelf->demo__DOT__wb_stb));
        bufp->chgIData(oldp+27,(vlSelf->demo__DOT__wb_addr),24);
        bufp->chgBit(oldp+28,(vlSelf->demo__DOT__mem_ack));
        bufp->chgIData(oldp+29,(vlSelf->demo__DOT__mem_data),32);
        bufp->chgBit(oldp+30,(vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_wstb));
        bufp->chgBit(oldp+31,(vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_stb));
        bufp->chgIData(oldp+32,(vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_data),32);
        bufp->chgIData(oldp+33,(vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_addr),24);
        bufp->chgCData(oldp+34,(vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_sel),4);
        bufp->chgQData(oldp+35,((((QData)((IData)(vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_wstb)) 
                                  << 0x24U) | (((QData)((IData)(vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_data)) 
                                                << 4U) 
                                               | (QData)((IData)(vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_sel))))),37);
        bufp->chgBit(oldp+37,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack));
        bufp->chgBit(oldp+38,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb));
        bufp->chgBit(oldp+39,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo));
        bufp->chgBit(oldp+40,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame));
        bufp->chgSData(oldp+41,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos),11);
        bufp->chgSData(oldp+42,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count),13);
        bufp->chgSData(oldp+43,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count),13);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+44,((1U & (~ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty)))));
        bufp->chgBit(oldp+45,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty));
        bufp->chgSData(oldp+46,((0x1fffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin))),13);
        bufp->chgSData(oldp+47,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin),14);
        bufp->chgSData(oldp+48,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray),14);
        bufp->chgSData(oldp+49,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray),14);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+50,(vlSelf->demo__DOT__vgai__DOT__vga_newframe));
        bufp->chgBit(oldp+51,(vlSelf->demo__DOT__vgai__DOT__newframe__DOT__lcl_stb));
        bufp->chgBit(oldp+52,(vlSelf->demo__DOT__vgai__DOT__newframe__DOT__lcl_ack));
        bufp->chgBit(oldp+53,(vlSelf->demo__DOT__vgai__DOT__newframe__DOT__tfr_ack));
        bufp->chgSData(oldp+54,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos),13);
        bufp->chgSData(oldp+55,(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vpos),11);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgSData(oldp+56,((0x3fffU & ((IData)(0x2000U) 
                                            - (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill)))),14);
        bufp->chgSData(oldp+57,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill),14);
        bufp->chgBit(oldp+58,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full));
        bufp->chgSData(oldp+59,((0x1fffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin))),13);
        bufp->chgSData(oldp+60,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray),14);
        bufp->chgSData(oldp+61,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin),14);
        bufp->chgSData(oldp+62,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray),14);
        bufp->chgSData(oldp+63,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray),14);
        bufp->chgSData(oldp+64,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin),14);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+65,((0xffffffU & vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word)),24);
        bufp->chgIData(oldp+66,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word),32);
        bufp->chgCData(oldp+67,((0xffU & (vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+68,((0xffU & (vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word 
                                          >> 8U))),8);
        bufp->chgCData(oldp+69,((0xffU & vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word)),8);
    }
    bufp->chgBit(oldp+70,(vlSelf->i_clk));
    bufp->chgBit(oldp+71,(vlSelf->i_pixclk));
    bufp->chgBit(oldp+72,(vlSelf->i_reset));
    bufp->chgBit(oldp+73,(vlSelf->i_test));
    bufp->chgSData(oldp+74,(vlSelf->i_hm_width),13);
    bufp->chgSData(oldp+75,(vlSelf->i_hm_porch),13);
    bufp->chgSData(oldp+76,(vlSelf->i_hm_synch),13);
    bufp->chgSData(oldp+77,(vlSelf->i_hm_raw),13);
    bufp->chgSData(oldp+78,(vlSelf->i_vm_height),11);
    bufp->chgSData(oldp+79,(vlSelf->i_vm_porch),11);
    bufp->chgSData(oldp+80,(vlSelf->i_vm_synch),11);
    bufp->chgSData(oldp+81,(vlSelf->i_vm_raw),11);
    bufp->chgBit(oldp+82,(vlSelf->o_vga_vsync));
    bufp->chgBit(oldp+83,(vlSelf->o_vga_hsync));
    bufp->chgCData(oldp+84,(vlSelf->o_vga_red),8);
    bufp->chgCData(oldp+85,(vlSelf->o_vga_grn),8);
    bufp->chgCData(oldp+86,(vlSelf->o_vga_blu),8);
    bufp->chgBit(oldp+87,(vlSelf->o_interrupt));
    bufp->chgSData(oldp+88,(vlSelf->i_hm_width),14);
    bufp->chgBit(oldp+89,(((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0) 
                           & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full))));
    bufp->chgSData(oldp+90,(((0x7f8U & (vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word 
                                        >> 0x15U)) 
                             | (((IData)(vlSelf->demo__DOT__vgai__DOT__vga_newline) 
                                 << 2U) | ((((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0) 
                                             & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full)) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty))))))),11);
    bufp->chgBit(oldp+91,(vlSelf->demo__DOT__vgai__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3));
    bufp->chgCData(oldp+92,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe),3);
    bufp->chgBit(oldp+93,((1U & ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                                 >> 2U))));
    bufp->chgBit(oldp+94,((IData)((((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe) 
                                    >> 2U) | (IData)(vlSelf->demo__DOT__vgai__DOT__vga_newframe)))));
    bufp->chgCData(oldp+95,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe),3);
    bufp->chgBit(oldp+96,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n));
    bufp->chgBit(oldp+97,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n));
    bufp->chgBit(oldp+98,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3));
    bufp->chgBit(oldp+99,(((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n) 
                           & (IData)(vlSelf->demo__DOT__vgai__DOT__vga_rd))));
    bufp->chgBit(oldp+100,(((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext) 
                            == ((0x3000U & ((~ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                                                >> 0xcU)) 
                                            << 0xcU)) 
                                | (0xfffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray))))));
    bufp->chgBit(oldp+101,(((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext) 
                            == (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray))));
    bufp->chgSData(oldp+102,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray),14);
    bufp->chgSData(oldp+103,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext),14);
    bufp->chgSData(oldp+104,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext),14);
    bufp->chgSData(oldp+105,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext),14);
    bufp->chgSData(oldp+106,(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext),14);
    bufp->chgCData(oldp+107,(vlSelf->demo__DOT__vgai__DOT__newframe__DOT__tfr_stb),3);
}

void Vdemo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root__trace_cleanup\n"); );
    // Init
    Vdemo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemo___024root*>(voidSelf);
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
