// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwbvgaframe.h for the primary calling header

#include "Vwbvgaframe__pch.h"
#include "Vwbvgaframe___024root.h"

VL_ATTR_COLD void Vwbvgaframe___024root___eval_static(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vwbvgaframe___024root___eval_initial__TOP(Vwbvgaframe___024root* vlSelf);

VL_ATTR_COLD void Vwbvgaframe___024root___eval_initial(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_initial\n"); );
    // Body
    Vwbvgaframe___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__i_pixclk__0 = vlSelf->i_pixclk;
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
    vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3__0 
        = vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3;
    vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT__vga_newframe__0 
        = vlSelf->wbvgaframe__DOT__vga_newframe;
    vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n__0 
        = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n;
    vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n__0 
        = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n;
}

VL_ATTR_COLD void Vwbvgaframe___024root___eval_initial__TOP(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos = 0U;
    vlSelf->wbvgaframe__DOT__vga_newline = 0U;
    vlSelf->o_vga_hsync = 1U;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__hrd = 1U;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos = 0U;
    vlSelf->o_vga_vsync = 1U;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vrd = 1U;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__first_frame = 1U;
    vlSelf->wbvgaframe__DOT__vga_rd = 0U;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos = 0U;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar = 0U;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge = 0U;
    vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_stb = 0U;
    vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_stb = 0U;
    vlSelf->o_interrupt = 0U;
    vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_ack = 0U;
    vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_ack = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe = 7U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe = 7U;
    vlSelf->o_wb_cyc = 0U;
    vlSelf->o_wb_stb = 0U;
    vlSelf->o_wb_addr = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray = 0U;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty = 1U;
}

VL_ATTR_COLD void Vwbvgaframe___024root___eval_final(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__stl(Vwbvgaframe___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vwbvgaframe___024root___eval_phase__stl(Vwbvgaframe___024root* vlSelf);

VL_ATTR_COLD void Vwbvgaframe___024root___eval_settle(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vwbvgaframe___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("wbvgaframe.v", 40, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vwbvgaframe___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__stl(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vwbvgaframe___024root___stl_sequent__TOP__0(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0;
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 = 0;
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
        = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem
        [(0x1fffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin))];
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x1fffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | (0x2000U & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray)));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 0xcU) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                              >> 0xdU)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x2fffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 0xcU));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 0xbU) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                              >> 0xcU)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x37ffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 0xbU));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 0xaU) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                              >> 0xbU)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3bffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 0xaU));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 9U) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 0xaU)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3dffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 9U));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 8U) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 9U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3effU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 8U));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 7U) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 8U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3f7fU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 7U));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 6U) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 7U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3fbfU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 6U));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 5U) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 6U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3fdfU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 5U));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 4U) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 5U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3fefU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 4U));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 3U) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 4U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3ff7U & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 3U));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 2U) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 3U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3ffbU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 2U));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 1U) ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 2U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3ffdU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 1U));
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                 ^ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                    >> 1U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3ffeU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | (IData)(wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0));
    vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3 
        = (1U & ((IData)(vlSelf->i_reset) | ((~ (IData)(vlSelf->i_en)) 
                                             | (IData)(vlSelf->i_test))));
    vlSelf->wbvgaframe__DOT__vgahw__DOT__w_rd = ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hrd) 
                                                 & ((~ (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__first_frame)) 
                                                    & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vrd)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n 
        = (1U & (~ (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe) 
                     >> 2U) | (IData)(vlSelf->wbvgaframe__DOT__vga_newframe))));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n 
        = (1U & (~ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                    >> 2U)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0 
        = ((IData)(vlSelf->i_wb_ack) & (IData)(vlSelf->o_wb_cyc));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext 
        = (0x3fffU & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin) 
                      + ((~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty)) 
                         & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n) 
                            & (IData)(vlSelf->wbvgaframe__DOT__vga_rd)))));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3 
        = ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n) 
           & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext 
        = (0x3fffU & (VL_SHIFTR_III(14,14,32, (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext), 1U) 
                      ^ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext)));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext 
        = (0x3fffU & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin) 
                      + ((~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full)) 
                         & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3))));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext 
        = (0x3fffU & (VL_SHIFTR_III(14,14,32, (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext), 1U) 
                      ^ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext)));
}

VL_ATTR_COLD void Vwbvgaframe___024root___eval_stl(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vwbvgaframe___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vwbvgaframe___024root___eval_triggers__stl(Vwbvgaframe___024root* vlSelf);

VL_ATTR_COLD bool Vwbvgaframe___024root___eval_phase__stl(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vwbvgaframe___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vwbvgaframe___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__ico(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__act(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_pixclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge i_clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge i_clk or posedge wbvgaframe.__Vcellinp__VIDEO_MEM.readmem____pinNumber3 or posedge wbvgaframe.vga_newframe)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge i_pixclk or posedge wbvgaframe.__Vcellinp__VIDEO_MEM.readmem____pinNumber3)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge i_clk or negedge wbvgaframe.VIDEO_MEM.readmem.wb_reset_n)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge i_pixclk or negedge wbvgaframe.VIDEO_MEM.readmem.pix_reset_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__nba(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_pixclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge i_clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge i_clk or posedge wbvgaframe.__Vcellinp__VIDEO_MEM.readmem____pinNumber3 or posedge wbvgaframe.vga_newframe)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge i_pixclk or posedge wbvgaframe.__Vcellinp__VIDEO_MEM.readmem____pinNumber3)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge i_clk or negedge wbvgaframe.VIDEO_MEM.readmem.wb_reset_n)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge i_pixclk or negedge wbvgaframe.VIDEO_MEM.readmem.pix_reset_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vwbvgaframe___024root___ctor_var_reset(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_pixclk = VL_RAND_RESET_I(1);
    vlSelf->i_reset = VL_RAND_RESET_I(1);
    vlSelf->i_en = VL_RAND_RESET_I(1);
    vlSelf->i_test = VL_RAND_RESET_I(1);
    vlSelf->i_base_addr = VL_RAND_RESET_I(24);
    vlSelf->i_line_words = VL_RAND_RESET_I(14);
    vlSelf->i_hm_width = VL_RAND_RESET_I(13);
    vlSelf->i_hm_porch = VL_RAND_RESET_I(13);
    vlSelf->i_hm_synch = VL_RAND_RESET_I(13);
    vlSelf->i_hm_raw = VL_RAND_RESET_I(13);
    vlSelf->i_vm_height = VL_RAND_RESET_I(12);
    vlSelf->i_vm_porch = VL_RAND_RESET_I(12);
    vlSelf->i_vm_synch = VL_RAND_RESET_I(12);
    vlSelf->i_vm_raw = VL_RAND_RESET_I(12);
    vlSelf->o_wb_cyc = VL_RAND_RESET_I(1);
    vlSelf->o_wb_stb = VL_RAND_RESET_I(1);
    vlSelf->o_wb_addr = VL_RAND_RESET_I(24);
    vlSelf->i_wb_ack = VL_RAND_RESET_I(1);
    vlSelf->i_wb_err = VL_RAND_RESET_I(1);
    vlSelf->i_wb_stall = VL_RAND_RESET_I(1);
    vlSelf->i_wb_data = VL_RAND_RESET_I(32);
    vlSelf->o_vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->o_vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->o_vga_red = VL_RAND_RESET_I(8);
    vlSelf->o_vga_grn = VL_RAND_RESET_I(8);
    vlSelf->o_vga_blu = VL_RAND_RESET_I(8);
    vlSelf->o_interrupt = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__vga_newline = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__vga_newframe = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__vga_rd = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word = VL_RAND_RESET_I(32);
    vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos = VL_RAND_RESET_I(13);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos = VL_RAND_RESET_I(12);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__hrd = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vrd = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__first_frame = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__w_rd = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 = VL_RAND_RESET_I(24);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos = VL_RAND_RESET_I(13);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge = VL_RAND_RESET_I(13);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos = VL_RAND_RESET_I(12);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge = VL_RAND_RESET_I(12);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline = VL_RAND_RESET_I(4);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar = VL_RAND_RESET_I(4);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__dline = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__topbar = VL_RAND_RESET_I(24);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__midbar = VL_RAND_RESET_I(24);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__fatbar = VL_RAND_RESET_I(24);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__gradient = VL_RAND_RESET_I(24);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__pattern = VL_RAND_RESET_I(24);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__last_width = VL_RAND_RESET_I(13);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac = VL_RAND_RESET_I(16);
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step = VL_RAND_RESET_I(16);
    vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_stb = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_ack = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_stb = VL_RAND_RESET_I(3);
    vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_ack = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos = VL_RAND_RESET_I(12);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe = VL_RAND_RESET_I(3);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe = VL_RAND_RESET_I(3);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count = VL_RAND_RESET_I(13);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count = VL_RAND_RESET_I(13);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0 = 0;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray = VL_RAND_RESET_I(14);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext = VL_RAND_RESET_I(14);
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__hpos = VL_RAND_RESET_I(13);
    vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__vpos = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__wbvgaframe__DOT__newframe__DOT__tfr_stb = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__i_pixclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT__vga_newframe__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
