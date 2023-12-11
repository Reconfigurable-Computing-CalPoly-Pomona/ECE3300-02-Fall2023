// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpong_top.h for the primary calling header

#include "Vpong_top__pch.h"
#include "Vpong_top__Syms.h"
#include "Vpong_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__ico(Vpong_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vpong_top___024root___eval_triggers__ico(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpong_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__act(Vpong_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vpong_top___024root___eval_triggers__act(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->reset) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))) 
                                     | ((IData)(vlSelf->top_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_clk__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->pix_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pix_clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->top_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_clk__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->pix_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pix_clk__0))));
    vlSelf->__VactTriggered.set(4U, (1U & (((IData)(vlSelf->pong_top__DOT__d_clr) 
                                            & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__d_clr__0))) 
                                           | ((IData)(vlSelf->pong_top__DOT__miss) 
                                              & (~ (IData)(vlSelf->__Vtrigprevexpr_h2f183644__0))))));
    vlSelf->__VactTriggered.set(5U, (1U & (((IData)(vlSelf->pong_top__DOT__d_clr) 
                                            & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__d_clr__0))) 
                                           | (((IData)(vlSelf->pong_top__DOT__miss) 
                                               >> 1U) 
                                              & (~ (IData)(vlSelf->__Vtrigprevexpr_h2f17e793__0))))));
    vlSelf->__VactTriggered.set(6U, ((~ (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out0)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out0__0)));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_flag__0))));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp__0))));
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__top_clk__0 = vlSelf->top_clk;
    vlSelf->__Vtrigprevexpr___TOP__pix_clk__0 = vlSelf->pix_clk;
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__d_clr__0 
        = vlSelf->pong_top__DOT__d_clr;
    vlSelf->__Vtrigprevexpr_h2f183644__0 = (1U & (IData)(vlSelf->pong_top__DOT__miss));
    vlSelf->__Vtrigprevexpr_h2f17e793__0 = (1U & ((IData)(vlSelf->pong_top__DOT__miss) 
                                                  >> 1U));
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out0__0 
        = vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out0;
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_flag__0 
        = vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_flag;
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp__0 
        = vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpong_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
