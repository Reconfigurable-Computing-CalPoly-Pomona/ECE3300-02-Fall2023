// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwbvgaframe.h for the primary calling header

#include "Vwbvgaframe__pch.h"
#include "Vwbvgaframe__Syms.h"
#include "Vwbvgaframe___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__ico(Vwbvgaframe___024root* vlSelf);
#endif  // VL_DEBUG

void Vwbvgaframe___024root___eval_triggers__ico(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vwbvgaframe___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__act(Vwbvgaframe___024root* vlSelf);
#endif  // VL_DEBUG

void Vwbvgaframe___024root___eval_triggers__act(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->i_pixclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_pixclk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_clk__0))));
    vlSelf->__VactTriggered.set(2U, ((((IData)(vlSelf->i_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_clk__0))) 
                                      | ((IData)(vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3__0)))) 
                                     | ((IData)(vlSelf->wbvgaframe__DOT__vga_newframe) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT__vga_newframe__0)))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->i_pixclk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_pixclk__0))) 
                                     | ((IData)(vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3__0)))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->i_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_clk__0))) 
                                     | ((~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n__0))));
    vlSelf->__VactTriggered.set(5U, (((IData)(vlSelf->i_pixclk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_pixclk__0))) 
                                     | ((~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n__0))));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vwbvgaframe___024root___dump_triggers__act(vlSelf);
    }
#endif
}
