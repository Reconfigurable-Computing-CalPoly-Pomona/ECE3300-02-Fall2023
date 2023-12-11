// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpong_top.h for the primary calling header

#include "Vpong_top__pch.h"
#include "Vpong_top___024root.h"

VL_INLINE_OPT void Vpong_top___024root___ico_sequent__TOP__0(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->hsync = (1U & (~ ((IData)(vlSelf->reset) 
                              | ((0x290U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
                                 & (0x2efU >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))))));
    vlSelf->vsync = (1U & (~ ((IData)(vlSelf->reset) 
                              | ((0x1eaU <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
                                 & (0x1ebU >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg))))));
    vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn 
        = ((IData)(vlSelf->inputsw) ? (IData)(vlSelf->btn)
            : (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_next 
        = vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_next 
        = vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg;
    if (vlSelf->pong_top__DOT__graph_unit__DOT__refresh_tick) {
        if ((((IData)(vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn) 
              >> 3U) & (0x1d4U > (0x3ffU & ((IData)(0x47U) 
                                            + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg)))))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_next 
                = (0x3ffU & ((IData)(3U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg)));
        } else if ((((IData)(vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn) 
                     >> 2U) & (0x43U < (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg)))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_next 
                = (0x3ffU & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg) 
                             - (IData)(3U)));
        }
        if ((((IData)(vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn) 
              >> 1U) & (0x1d4U > (0x3ffU & ((IData)(0x47U) 
                                            + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg)))))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_next 
                = (0x3ffU & ((IData)(3U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg)));
        } else if (((IData)(vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn) 
                    & (0x43U < (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg)))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_next 
                = (0x3ffU & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg) 
                             - (IData)(3U)));
        }
    }
}

void Vpong_top___024root___eval_ico(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vpong_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vpong_top___024root___eval_triggers__ico(Vpong_top___024root* vlSelf);

bool Vpong_top___024root___eval_phase__ico(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpong_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vpong_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpong_top___024root___eval_act(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*6:0*/, 16> Vpong_top__ConstPool__TABLE_h649ce6ff_0;
extern const VlUnpacked<CData/*7:0*/, 2048> Vpong_top__ConstPool__TABLE_hf98d02f5_0;

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__0(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->__Vdly__pong_top__DOT__ball_next = vlSelf->pong_top__DOT__ball_next;
    vlSelf->__Vdly__pong_top__DOT__state_next = vlSelf->pong_top__DOT__state_next;
    vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__digit 
        = (0xfU & (((((((((0U == (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                        >> 0x11U))) 
                          | (1U == (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                          >> 0x11U)))) 
                         | (2U == (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                         >> 0x11U)))) 
                        | (3U == (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                        >> 0x11U)))) 
                       | (4U == (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                       >> 0x11U)))) 
                      | (5U == (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                      >> 0x11U)))) 
                     | (6U == (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                     >> 0x11U)))) | 
                    (7U == (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                  >> 0x11U)))) ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                                       >> 0x11U)))
                                                   ? vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                                        >> 0x11U)))
                                                    ? 
                                                   (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                                                    >> 4U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                                         >> 0x11U)))
                                                     ? 
                                                    (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                                                     >> 8U)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                                          >> 0x11U)))
                                                      ? 
                                                     (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                                                      >> 0xcU)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                                           >> 0x11U)))
                                                       ? 
                                                      (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                                                       >> 0x10U)
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                                            >> 0x11U)))
                                                        ? 
                                                       (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                                                        >> 0x14U)
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                                             >> 0x11U)))
                                                         ? 
                                                        (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                                                         >> 0x18U)
                                                         : 
                                                        (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                                                         >> 0x1cU))))))))
                    : vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode));
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp 
        = (1U & (~ (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp)));
    vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
        = (0xfffffU & ((IData)(1U) + vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv));
    vlSelf->__Vdly__pong_top__DOT__ball_next = vlSelf->pong_top__DOT__ball_reg;
    vlSelf->__Vdly__pong_top__DOT__state_next = vlSelf->pong_top__DOT__state_reg;
    if ((2U & (IData)(vlSelf->pong_top__DOT__state_reg))) {
        if ((1U & (IData)(vlSelf->pong_top__DOT__state_reg))) {
            if ((0U == (IData)(vlSelf->pong_top__DOT__timer_unit__DOT__timer_reg))) {
                vlSelf->__Vdly__pong_top__DOT__state_next = 0U;
            }
        } else if (((0U == (IData)(vlSelf->pong_top__DOT__timer_unit__DOT__timer_reg)) 
                    & ((0U != ((IData)(vlSelf->inputsw)
                                ? (3U & (IData)(vlSelf->btn))
                                : (3U & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp)))) 
                       | (0U != ((IData)(vlSelf->inputsw)
                                  ? (3U & ((IData)(vlSelf->btn) 
                                           >> 2U)) : 
                                 (3U & ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp) 
                                        >> 2U))))))) {
            vlSelf->__Vdly__pong_top__DOT__state_next = 1U;
        }
    } else if ((1U & (IData)(vlSelf->pong_top__DOT__state_reg))) {
        if ((IData)((0U != (IData)(vlSelf->pong_top__DOT__miss)))) {
            vlSelf->__Vdly__pong_top__DOT__state_next 
                = ((0U == (IData)(vlSelf->pong_top__DOT__ball_reg))
                    ? 3U : 2U);
        }
    } else if (((0U != ((IData)(vlSelf->inputsw) ? 
                        (3U & (IData)(vlSelf->btn))
                         : (3U & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp)))) 
                | (0U != ((IData)(vlSelf->inputsw) ? 
                          (3U & ((IData)(vlSelf->btn) 
                                 >> 2U)) : (3U & ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp) 
                                                  >> 2U)))))) {
        vlSelf->__Vdly__pong_top__DOT__state_next = 1U;
    }
    __Vtableidx6 = vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__digit;
    vlSelf->ssd_port_cc = Vpong_top__ConstPool__TABLE_h649ce6ff_0
        [__Vtableidx6];
    vlSelf->pong_top__DOT__text_unit__DOT__ascii_unit__DOT__addr_reg 
        = (((IData)(vlSelf->pong_top__DOT__text_unit__DOT__char_addr) 
            << 4U) | (0xfU & ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__score_on)
                               ? ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg) 
                                  >> 1U) : ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__rule_on)
                                             ? (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)
                                             : ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__logo_on)
                                                 ? 
                                                ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg) 
                                                 >> 3U)
                                                 : 
                                                ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg) 
                                                 >> 2U))))));
    vlSelf->pong_top__DOT__timer_start = 0U;
    if ((1U & (~ ((IData)(vlSelf->pong_top__DOT__state_reg) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->pong_top__DOT__state_reg))) {
            if ((IData)((0U != (IData)(vlSelf->pong_top__DOT__miss)))) {
                vlSelf->__Vdly__pong_top__DOT__ball_next 
                    = (3U & ((IData)(vlSelf->pong_top__DOT__ball_reg) 
                             - (IData)(1U)));
                vlSelf->pong_top__DOT__timer_start = 1U;
            }
        } else {
            vlSelf->__Vdly__pong_top__DOT__ball_next = 3U;
            if (((0U != ((IData)(vlSelf->inputsw) ? 
                         (3U & (IData)(vlSelf->btn))
                          : (3U & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp)))) 
                 | (0U != ((IData)(vlSelf->inputsw)
                            ? (3U & ((IData)(vlSelf->btn) 
                                     >> 2U)) : (3U 
                                                & ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp) 
                                                   >> 2U)))))) {
                vlSelf->__Vdly__pong_top__DOT__ball_next 
                    = (3U & ((IData)(vlSelf->pong_top__DOT__ball_reg) 
                             - (IData)(1U)));
            }
        }
    }
    vlSelf->ssd_port_an_out = 0xffU;
    if ((1U & (0xffU >> (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                               >> 0x11U))))) {
        vlSelf->ssd_port_an_out = ((~ ((IData)(1U) 
                                       << (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                                 >> 0x11U)))) 
                                   & (IData)(vlSelf->ssd_port_an_out));
    }
    if ((((0xf0U != (0xffU & (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                              >> 8U))) & (0x75U == 
                                          (0xffU & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode))) 
         | (0xe075U == (0xffffU & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode)))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp 
            = (1U | (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    } else if ((0xf075U == (0xffffU & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp 
            = (0xeU & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    }
    if ((((0xf0U != (0xffU & (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                              >> 8U))) & (0x73U == 
                                          (0xffU & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode))) 
         | (0xe072U == (0xffffU & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode)))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp 
            = (2U | (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    } else if (((0xf073U == (0xffffU & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode)) 
                | (0xf072U == (0xffffU & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode)))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp 
            = (0xdU & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    }
    if (((0xf0U != (0xffU & (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                             >> 8U))) & (0x1dU == (0xffU 
                                                   & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode)))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp 
            = (4U | (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    } else if ((0xf01dU == (0xffffU & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp 
            = (0xbU & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    }
    if (((0xf0U != (0xffU & (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                             >> 8U))) & (0x1bU == (0xffU 
                                                   & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode)))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp 
            = (8U | (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    } else if ((0xf01bU == (0xffffU & vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp 
            = (7U & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    }
    __Vtableidx4 = vlSelf->pong_top__DOT__text_unit__DOT__ascii_unit__DOT__addr_reg;
    vlSelf->pong_top__DOT__text_unit__DOT__ascii_word 
        = Vpong_top__ConstPool__TABLE_hf98d02f5_0[__Vtableidx4];
    vlSelf->pong_top__DOT__miss = 0U;
    if ((1U & (~ (IData)(vlSelf->pong_top__DOT__gra_still)))) {
        if ((0x47U <= (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))) {
            if ((0x1d8U >= (0x3ffU & ((IData)(7U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))))) {
                if ((1U & (~ ((((0x2cU >= (0x3ffU & 
                                           ((IData)(7U) 
                                            + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg)))) 
                                & (0x29U <= (0x3ffU 
                                             & ((IData)(7U) 
                                                + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg))))) 
                               & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg) 
                                  <= (0x3ffU & ((IData)(7U) 
                                                + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))))) 
                              & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg) 
                                 <= (0x3ffU & ((IData)(0x47U) 
                                               + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg)))))))) {
                    if ((1U & (~ ((((0x258U <= (0x3ffU 
                                                & ((IData)(7U) 
                                                   + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg)))) 
                                    & (0x25bU >= (0x3ffU 
                                                  & ((IData)(7U) 
                                                     + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg))))) 
                                   & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg) 
                                      <= (0x3ffU & 
                                          ((IData)(7U) 
                                           + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))))) 
                                  & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg) 
                                     <= (0x3ffU & ((IData)(0x47U) 
                                                   + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg)))))))) {
                        if ((0x27fU < (0x3ffU & ((IData)(7U) 
                                                 + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg))))) {
                            vlSelf->pong_top__DOT__miss 
                                = (1U | (IData)(vlSelf->pong_top__DOT__miss));
                        } else if ((0x1eU > (0x3ffU 
                                             & ((IData)(7U) 
                                                + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg))))) {
                            vlSelf->pong_top__DOT__miss 
                                = (2U | (IData)(vlSelf->pong_top__DOT__miss));
                        }
                    }
                }
            }
        }
    }
    vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn 
        = ((IData)(vlSelf->inputsw) ? (IData)(vlSelf->btn)
            : (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__1(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->key_clk) == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv0))) {
        if ((0x13U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt0))) {
            vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out0 
                = vlSelf->key_clk;
        } else {
            vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt0)));
        }
    } else {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt0 = 0U;
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv0 
            = vlSelf->key_clk;
    }
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__2(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__pong_top__DOT__graph_unit__DOT__ball_rng_start 
        = vlSelf->pong_top__DOT__graph_unit__DOT__ball_rng_start;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->__Vdly__pong_top__DOT__graph_unit__DOT__ball_rng_start 
            = (3U & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__ball_rng_start)));
    }
    if (vlSelf->reset) {
        vlSelf->pong_top__DOT__graph_unit__DOT__y_delta_reg = 2U;
        vlSelf->pong_top__DOT__graph_unit__DOT__x_delta_reg = 2U;
        vlSelf->pong_top__DOT__timer_unit__DOT__timer_reg = 0x7fU;
        vlSelf->pong_top__DOT__ball_reg = 0U;
    } else {
        vlSelf->pong_top__DOT__graph_unit__DOT__y_delta_reg 
            = vlSelf->pong_top__DOT__graph_unit__DOT__y_delta_next;
        vlSelf->pong_top__DOT__graph_unit__DOT__x_delta_reg 
            = vlSelf->pong_top__DOT__graph_unit__DOT__x_delta_next;
        vlSelf->pong_top__DOT__timer_unit__DOT__timer_reg 
            = vlSelf->pong_top__DOT__timer_unit__DOT__timer_next;
        vlSelf->pong_top__DOT__ball_reg = vlSelf->pong_top__DOT__ball_next;
    }
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__3(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdly__pong_top__DOT__keyboard_unit__DOT__keyboard_cnt 
        = vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt;
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__4(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    if ((((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_dataprev) 
          != (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)) 
         | (0xf0U == (0xffU & (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                               >> 8U))))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
            = ((0xffff0000U & (vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode 
                               << 8U)) | (((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_dataprev) 
                                           << 8U) | (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)));
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_dataprev 
            = vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur;
    }
}

extern const VlUnpacked<CData/*6:0*/, 1024> Vpong_top__ConstPool__TABLE_h9708e114_0;
extern const VlUnpacked<CData/*6:0*/, 1024> Vpong_top__ConstPool__TABLE_ha1aa63cd_0;
extern const VlUnpacked<CData/*6:0*/, 64> Vpong_top__ConstPool__TABLE_hfbc80823_0;

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__5(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__5\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vdly__pong_top__DOT__vga_unit__DOT__h_count_reg;
    __Vdly__pong_top__DOT__vga_unit__DOT__h_count_reg = 0;
    SData/*9:0*/ __Vdly__pong_top__DOT__vga_unit__DOT__v_count_reg;
    __Vdly__pong_top__DOT__vga_unit__DOT__v_count_reg = 0;
    // Body
    __Vdly__pong_top__DOT__vga_unit__DOT__h_count_reg 
        = vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg;
    __Vdly__pong_top__DOT__vga_unit__DOT__v_count_reg 
        = vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg;
    if (vlSelf->reset) {
        __Vdly__pong_top__DOT__vga_unit__DOT__h_count_reg = 0U;
        __Vdly__pong_top__DOT__vga_unit__DOT__v_count_reg = 0U;
        vlSelf->pong_top__DOT__rgb_reg = 0U;
    } else {
        if ((0x31fU == (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))) {
            __Vdly__pong_top__DOT__vga_unit__DOT__h_count_reg = 0U;
            __Vdly__pong_top__DOT__vga_unit__DOT__v_count_reg 
                = ((0x20cU == (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg))
                    ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg))));
        } else {
            __Vdly__pong_top__DOT__vga_unit__DOT__h_count_reg 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)));
        }
        vlSelf->pong_top__DOT__rgb_reg = vlSelf->pong_top__DOT__rgb_next;
    }
    vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg 
        = __Vdly__pong_top__DOT__vga_unit__DOT__h_count_reg;
    vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg 
        = __Vdly__pong_top__DOT__vga_unit__DOT__v_count_reg;
    vlSelf->hsync = (1U & (~ ((IData)(vlSelf->reset) 
                              | ((0x290U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
                                 & (0x2efU >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))))));
    __Vtableidx1 = vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg;
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr_l 
        = Vpong_top__ConstPool__TABLE_h9708e114_0[__Vtableidx1];
    __Vtableidx3 = vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg;
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr_o 
        = Vpong_top__ConstPool__TABLE_ha1aa63cd_0[__Vtableidx3];
    vlSelf->vsync = (1U & (~ ((IData)(vlSelf->reset) 
                              | ((0x1eaU <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
                                 & (0x1ebU >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg))))));
    __Vtableidx2 = ((0x30U & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
                    | (0xfU & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                               >> 3U)));
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr_r 
        = Vpong_top__ConstPool__TABLE_hfbc80823_0[__Vtableidx2];
    vlSelf->pong_top__DOT__graph_unit__DOT__refresh_tick 
        = ((0x1e1U == (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
           & (0U == (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)));
    vlSelf->pong_top__DOT__text_unit__DOT__score_on 
        = ((0x20U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
           & ((0x40U > (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
              & ((0U < (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
                 & (0x280U > (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)))));
    vlSelf->pong_top__DOT__text_unit__DOT__rule_on 
        = (IData)(((0x100U == (0x380U & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))) 
                   & (0x80U == (0x3c0U & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)))));
    vlSelf->pong_top__DOT__text_unit__DOT__logo_on 
        = (IData)(((0x100U == (0x380U & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg))) 
                   & ((3U <= (0xfU & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                                      >> 6U))) & (6U 
                                                  >= 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                                                      >> 6U))))));
    vlSelf->rgb = vlSelf->pong_top__DOT__rgb_reg;
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__6(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->pong_top__DOT__d_clr) {
        vlSelf->pong_top__DOT__counter_unit__DOT__dig0_next = 0U;
        vlSelf->pong_top__DOT__counter_unit__DOT__dig1_next = 0U;
    } else {
        vlSelf->pong_top__DOT__counter_unit__DOT__dig0_next 
            = ((9U == (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig0))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig0))));
        vlSelf->pong_top__DOT__counter_unit__DOT__dig1_next 
            = vlSelf->pong_top__DOT__counter_unit__DOT__r_dig1;
        if (((9U == (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig1)) 
             & (9U == (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig0)))) {
            vlSelf->pong_top__DOT__counter_unit__DOT__dig1_next = 0U;
        } else if ((9U == (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig0))) {
            vlSelf->pong_top__DOT__counter_unit__DOT__dig1_next 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig1)));
        }
    }
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__7(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__7\n"); );
    // Body
    if (vlSelf->pong_top__DOT__d_clr) {
        vlSelf->pong_top__DOT__counter_unit__DOT__dig2_next = 0U;
        vlSelf->pong_top__DOT__counter_unit__DOT__dig3_next = 0U;
    } else {
        vlSelf->pong_top__DOT__counter_unit__DOT__dig2_next 
            = ((9U == (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig2))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig2))));
        vlSelf->pong_top__DOT__counter_unit__DOT__dig3_next 
            = vlSelf->pong_top__DOT__counter_unit__DOT__r_dig3;
        if (((9U == (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig3)) 
             & (9U == (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig2)))) {
            vlSelf->pong_top__DOT__counter_unit__DOT__dig3_next = 0U;
        } else if ((9U == (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig2))) {
            vlSelf->pong_top__DOT__counter_unit__DOT__dig3_next 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig3)));
        }
    }
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__8(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->pong_top__DOT__ball_next = vlSelf->__Vdly__pong_top__DOT__ball_next;
    if (vlSelf->pong_top__DOT__gra_still) {
        vlSelf->pong_top__DOT__graph_unit__DOT__y_delta_next 
            = ((2U & (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__ball_rng_start))
                ? 2U : 0x3feU);
        vlSelf->pong_top__DOT__graph_unit__DOT__x_delta_next = 2U;
    } else {
        if ((0x47U > (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_delta_next = 2U;
        } else if ((0x1d8U < (0x3ffU & ((IData)(7U) 
                                        + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_delta_next = 0x3feU;
        }
        if ((0x47U <= (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))) {
            if ((0x1d8U >= (0x3ffU & ((IData)(7U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))))) {
                if (((((0x2cU >= (0x3ffU & ((IData)(7U) 
                                            + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg)))) 
                       & (0x29U <= (0x3ffU & ((IData)(7U) 
                                              + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg))))) 
                      & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg) 
                         <= (0x3ffU & ((IData)(7U) 
                                       + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))))) 
                     & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg) 
                        <= (0x3ffU & ((IData)(0x47U) 
                                      + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg)))))) {
                    vlSelf->pong_top__DOT__graph_unit__DOT__x_delta_next = 2U;
                } else if (((((0x258U <= (0x3ffU & 
                                          ((IData)(7U) 
                                           + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg)))) 
                              & (0x25bU >= (0x3ffU 
                                            & ((IData)(7U) 
                                               + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg))))) 
                             & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg) 
                                <= (0x3ffU & ((IData)(7U) 
                                              + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg))))) 
                            & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg) 
                               <= (0x3ffU & ((IData)(0x47U) 
                                             + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg)))))) {
                    vlSelf->pong_top__DOT__graph_unit__DOT__x_delta_next = 0x3feU;
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->pong_top__DOT__counter_unit__DOT__r_dig1 = 0U;
        vlSelf->pong_top__DOT__counter_unit__DOT__r_dig0 = 0U;
        vlSelf->pong_top__DOT__counter_unit__DOT__r_dig3 = 0U;
        vlSelf->pong_top__DOT__counter_unit__DOT__r_dig2 = 0U;
    } else {
        vlSelf->pong_top__DOT__counter_unit__DOT__r_dig1 
            = vlSelf->pong_top__DOT__counter_unit__DOT__dig1_next;
        vlSelf->pong_top__DOT__counter_unit__DOT__r_dig0 
            = vlSelf->pong_top__DOT__counter_unit__DOT__dig0_next;
        vlSelf->pong_top__DOT__counter_unit__DOT__r_dig3 
            = vlSelf->pong_top__DOT__counter_unit__DOT__dig3_next;
        vlSelf->pong_top__DOT__counter_unit__DOT__r_dig2 
            = vlSelf->pong_top__DOT__counter_unit__DOT__dig2_next;
    }
    vlSelf->pong_top__DOT__d_clr = 0U;
    vlSelf->pong_top__DOT__gra_still = 1U;
    if ((1U & (~ ((IData)(vlSelf->pong_top__DOT__state_reg) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->pong_top__DOT__state_reg)))) {
            vlSelf->pong_top__DOT__d_clr = 1U;
        }
        if ((1U & (IData)(vlSelf->pong_top__DOT__state_reg))) {
            vlSelf->pong_top__DOT__gra_still = 0U;
        }
    }
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__9(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__9\n"); );
    // Body
    if (((((((((0U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt)) 
               | (1U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) 
              | (2U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) 
             | (3U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) 
            | (4U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) 
           | (5U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) 
          | (6U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) 
         | (7U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt)))) {
        if ((0U != (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) {
            vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur 
                = ((1U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))
                    ? ((0xfeU & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)) 
                       | (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1))
                    : ((2U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))
                        ? ((0xfdU & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)) 
                           | ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1) 
                              << 1U)) : ((3U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))
                                          ? ((0xfbU 
                                              & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)) 
                                             | ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1) 
                                                << 2U))
                                          : ((4U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))
                                              ? ((0xf7U 
                                                  & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)) 
                                                 | ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1) 
                                                    << 3U))
                                              : ((5U 
                                                  == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))
                                                  ? 
                                                 ((0xefU 
                                                   & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)) 
                                                  | ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1) 
                                                     << 4U))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))
                                                   ? 
                                                  ((0xdfU 
                                                    & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)) 
                                                   | ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1) 
                                                      << 5U))
                                                   : 
                                                  ((0xbfU 
                                                    & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)) 
                                                   | ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1) 
                                                      << 6U))))))));
        }
    } else if ((8U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur 
            = ((0x7fU & (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur)) 
               | ((IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1) 
                  << 7U));
    } else if ((9U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_flag = 1U;
    } else if ((0xaU == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_flag = 0U;
    }
    if ((9U >= (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) {
        vlSelf->__Vdly__pong_top__DOT__keyboard_unit__DOT__keyboard_cnt 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt)));
    } else if ((0xaU == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt))) {
        vlSelf->__Vdly__pong_top__DOT__keyboard_unit__DOT__keyboard_cnt = 0U;
    }
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt 
        = vlSelf->__Vdly__pong_top__DOT__keyboard_unit__DOT__keyboard_cnt;
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__10(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->pong_top__DOT__rgb_next = ((IData)(vlSelf->pong_top__DOT__w_vid_on)
                                        ? ((1U & ((
                                                   ((IData)(vlSelf->pong_top__DOT__text_on) 
                                                    >> 3U) 
                                                   | ((0U 
                                                       == (IData)(vlSelf->pong_top__DOT__state_reg)) 
                                                      & ((IData)(vlSelf->pong_top__DOT__text_on) 
                                                         >> 1U))) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->pong_top__DOT__state_reg)) 
                                                     & (IData)(vlSelf->pong_top__DOT__text_on))))
                                            ? (IData)(vlSelf->pong_top__DOT__text_rgb)
                                            : (((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__l_pad_on) 
                                                | ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__t_wall_on) 
                                                   | ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__b_wall_on) 
                                                      | ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__r_pad_on) 
                                                         | (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__ball_on)))))
                                                ? ((IData)(vlSelf->pong_top__DOT__w_vid_on)
                                                    ? 
                                                   (((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__t_wall_on) 
                                                     | (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__b_wall_on))
                                                     ? 0xfffU
                                                     : 
                                                    (((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__l_pad_on) 
                                                      | (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__r_pad_on))
                                                      ? 0xfffU
                                                      : 
                                                     ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__ball_on)
                                                       ? 0xfffU
                                                       : 0U)))
                                                    : 0U)
                                                : (
                                                   (((IData)(vlSelf->pong_top__DOT__text_on) 
                                                     >> 2U) 
                                                    & (0U 
                                                       == (IData)(vlSelf->pong_top__DOT__state_reg)))
                                                    ? (IData)(vlSelf->pong_top__DOT__text_rgb)
                                                    : 0U)))
                                        : 0U);
}

VL_INLINE_OPT void Vpong_top___024root___nba_comb__TOP__0(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*6:0*/ pong_top__DOT__text_unit__DOT__char_addr_s;
    pong_top__DOT__text_unit__DOT__char_addr_s = 0;
    // Body
    vlSelf->pong_top__DOT__timer_unit__DOT__timer_next 
        = ((IData)(vlSelf->pong_top__DOT__timer_start)
            ? 0x7fU : (0x7fU & ((IData)(vlSelf->pong_top__DOT__timer_unit__DOT__timer_reg) 
                                - (((0U == (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
                                    & (0U == (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg))) 
                                   & (0U != (IData)(vlSelf->pong_top__DOT__timer_unit__DOT__timer_reg))))));
    pong_top__DOT__text_unit__DOT__char_addr_s = ((0x200U 
                                                   & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                      ? 0U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 
                                                       (0x30U 
                                                        | (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig2))
                                                        : 
                                                       (0x30U 
                                                        | (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig3)))
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0x3aU
                                                        : 0x52U)))))
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                     ? 
                                                    ((0x40U 
                                                      & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                      ? 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0U
                                                        : 0x45U)
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0x52U
                                                        : 0x4fU))
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0x43U
                                                        : 0x53U)
                                                       : 0U))
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                      ? 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 
                                                       (0x30U 
                                                        | (IData)(vlSelf->pong_top__DOT__ball_reg))
                                                        : 0x3aU)
                                                       : 0x4cU)
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0x41U
                                                        : 0x42U)
                                                       : 0U)))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                     ? 
                                                    ((0x40U 
                                                      & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                      ? 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0U
                                                        : 
                                                       (0x30U 
                                                        | (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig0)))
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 
                                                       (0x30U 
                                                        | (IData)(vlSelf->pong_top__DOT__counter_unit__DOT__r_dig1))
                                                        : 0x3aU))
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0x4cU
                                                        : 0U)
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0x45U
                                                        : 0x52U)))
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                      ? 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0x4fU
                                                        : 0x43U)
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))
                                                        ? 0x53U
                                                        : 0U))
                                                      : 0U))));
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr 
        = ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__score_on)
            ? (IData)(pong_top__DOT__text_unit__DOT__char_addr_s)
            : ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__rule_on)
                ? (IData)(vlSelf->pong_top__DOT__text_unit__DOT__char_addr_r)
                : ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__logo_on)
                    ? (IData)(vlSelf->pong_top__DOT__text_unit__DOT__char_addr_l)
                    : (IData)(vlSelf->pong_top__DOT__text_unit__DOT__char_addr_o))));
}

VL_INLINE_OPT void Vpong_top___024root___nba_comb__TOP__1(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ pong_top__DOT__text_unit__DOT__ascii_bit;
    pong_top__DOT__text_unit__DOT__ascii_bit = 0;
    // Body
    pong_top__DOT__text_unit__DOT__ascii_bit = (1U 
                                                & ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__ascii_word) 
                                                   >> 
                                                   (7U 
                                                    & (~ 
                                                       ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__score_on)
                                                         ? 
                                                        ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__rule_on)
                                                          ? (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)
                                                          : 
                                                         ((IData)(vlSelf->pong_top__DOT__text_unit__DOT__logo_on)
                                                           ? 
                                                          ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                                                           >> 3U)
                                                           : 
                                                          ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                                                           >> 2U))))))));
    vlSelf->pong_top__DOT__text_rgb = 0U;
    if (vlSelf->pong_top__DOT__text_unit__DOT__score_on) {
        if (pong_top__DOT__text_unit__DOT__ascii_bit) {
            vlSelf->pong_top__DOT__text_rgb = 0xfffU;
        }
    } else if (vlSelf->pong_top__DOT__text_unit__DOT__rule_on) {
        if (pong_top__DOT__text_unit__DOT__ascii_bit) {
            vlSelf->pong_top__DOT__text_rgb = 0xfffU;
        }
    } else if (vlSelf->pong_top__DOT__text_unit__DOT__logo_on) {
        if (pong_top__DOT__text_unit__DOT__ascii_bit) {
            vlSelf->pong_top__DOT__text_rgb = 0xfffU;
        }
    } else if (pong_top__DOT__text_unit__DOT__ascii_bit) {
        vlSelf->pong_top__DOT__text_rgb = 0xfffU;
    }
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__11(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->pong_top__DOT__graph_unit__DOT__ball_rng_start 
        = vlSelf->__Vdly__pong_top__DOT__graph_unit__DOT__ball_rng_start;
    if (vlSelf->reset) {
        vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg = 0xccU;
        vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg = 0xccU;
        vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg = 0U;
        vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg = 0U;
        vlSelf->pong_top__DOT__state_reg = 0U;
    } else {
        vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg 
            = vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_next;
        vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg 
            = vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_next;
        vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg 
            = vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_next;
        vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg 
            = vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_next;
        vlSelf->pong_top__DOT__state_reg = vlSelf->pong_top__DOT__state_next;
    }
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__12(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__12\n"); );
    // Body
    if (((IData)(vlSelf->key_data) == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv1))) {
        if ((0x13U == (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt1))) {
            vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1 
                = vlSelf->key_data;
        } else {
            vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt1 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt1)));
        }
    } else {
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt1 = 0U;
        vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv1 
            = vlSelf->key_data;
    }
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__13(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->pong_top__DOT__graph_unit__DOT__t_wall_on 
        = ((0x40U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
           & (0x47U >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)));
    vlSelf->pong_top__DOT__graph_unit__DOT__b_wall_on 
        = ((0x1d8U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
           & (0x1dfU >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)));
    vlSelf->pong_top__DOT__w_vid_on = ((0x280U > (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
                                       & (0x1e0U > (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)));
    vlSelf->pong_top__DOT__text_on = (((IData)(vlSelf->pong_top__DOT__text_unit__DOT__score_on) 
                                       << 3U) | (((IData)(vlSelf->pong_top__DOT__text_unit__DOT__logo_on) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->pong_top__DOT__text_unit__DOT__rule_on) 
                                                     << 1U) 
                                                    | (IData)(
                                                              ((0xc0U 
                                                                == 
                                                                (0x3c0U 
                                                                 & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg))) 
                                                               & ((5U 
                                                                   <= 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                                                                       >> 5U))) 
                                                                  & (0xdU 
                                                                     >= 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                                                                         >> 5U)))))))));
}

VL_INLINE_OPT void Vpong_top___024root___nba_sequent__TOP__14(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_sequent__TOP__14\n"); );
    // Body
    vlSelf->pong_top__DOT__state_next = vlSelf->__Vdly__pong_top__DOT__state_next;
}

VL_INLINE_OPT void Vpong_top___024root___nba_comb__TOP__2(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_next 
        = vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_next 
        = vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg;
    if (vlSelf->pong_top__DOT__graph_unit__DOT__refresh_tick) {
        if ((((IData)(vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn) 
              >> 3U) & (0x1d4U > (0x3ffU & ((IData)(0x47U) 
                                            + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg)))))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_next 
                = (0x3ffU & ((IData)(3U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg)));
        } else if ((((IData)(vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn) 
                     >> 2U) & (0x43U < (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg)))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_next 
                = (0x3ffU & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg) 
                             - (IData)(3U)));
        }
        if ((((IData)(vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn) 
              >> 1U) & (0x1d4U > (0x3ffU & ((IData)(0x47U) 
                                            + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg)))))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_next 
                = (0x3ffU & ((IData)(3U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg)));
        } else if (((IData)(vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn) 
                    & (0x43U < (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg)))) {
            vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_next 
                = (0x3ffU & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg) 
                             - (IData)(3U)));
        }
    }
    if (vlSelf->pong_top__DOT__gra_still) {
        vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_next = 0x13fU;
        vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_next = 0xefU;
    } else if (vlSelf->pong_top__DOT__graph_unit__DOT__refresh_tick) {
        vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_next 
            = (0x3ffU & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg) 
                         + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_delta_reg)));
        vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_next 
            = (0x3ffU & ((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg) 
                         + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_delta_reg)));
    } else {
        vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_next 
            = (0x3ffU & (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg));
        vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_next 
            = (0x3ffU & (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg));
    }
}

extern const VlUnpacked<CData/*7:0*/, 8> Vpong_top__ConstPool__TABLE_h743532b2_0;

VL_INLINE_OPT void Vpong_top___024root___nba_comb__TOP__3(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___nba_comb__TOP__3\n"); );
    // Init
    CData/*7:0*/ pong_top__DOT__graph_unit__DOT__rom_data;
    pong_top__DOT__graph_unit__DOT__rom_data = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->pong_top__DOT__graph_unit__DOT__l_pad_on 
        = ((0x24U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
           & ((0x27U >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
              & (((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg) 
                  <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
                 & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg) 
                    <= (0x3ffU & ((IData)(0x47U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg)))))));
    vlSelf->pong_top__DOT__graph_unit__DOT__r_pad_on 
        = ((0x258U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
           & ((0x25bU >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
              & (((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg) 
                  <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
                 & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg) 
                    <= (0x3ffU & ((IData)(0x47U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg)))))));
    __Vtableidx5 = (7U & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg) 
                          - (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg)));
    pong_top__DOT__graph_unit__DOT__rom_data = Vpong_top__ConstPool__TABLE_h743532b2_0
        [__Vtableidx5];
    vlSelf->pong_top__DOT__graph_unit__DOT__ball_on 
        = (((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg) 
            <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
           & (((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
               <= (0x3ffU & ((IData)(7U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg)))) 
              & (((IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg) 
                  <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
                 & (((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg) 
                     <= (0x3ffU & ((IData)(7U) + (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg)))) 
                    & ((IData)(pong_top__DOT__graph_unit__DOT__rom_data) 
                       >> (7U & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                                 - (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg))))))));
}

void Vpong_top___024root___eval_nba(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpong_top___024root___nba_comb__TOP__3(vlSelf);
    }
}

void Vpong_top___024root___eval_triggers__act(Vpong_top___024root* vlSelf);

bool Vpong_top___024root___eval_phase__act(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<9> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpong_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpong_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpong_top___024root___eval_phase__nba(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpong_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__ico(Vpong_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__nba(Vpong_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__act(Vpong_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vpong_top___024root___eval(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vpong_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("pong_top.v", 22, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpong_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpong_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("pong_top.v", 22, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpong_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("pong_top.v", 22, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpong_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpong_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpong_top___024root___eval_debug_assertions(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->top_clk & 0xfeU))) {
        Verilated::overWidthError("top_clk");}
    if (VL_UNLIKELY((vlSelf->pix_clk & 0xfeU))) {
        Verilated::overWidthError("pix_clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->key_clk & 0xfeU))) {
        Verilated::overWidthError("key_clk");}
    if (VL_UNLIKELY((vlSelf->key_data & 0xfeU))) {
        Verilated::overWidthError("key_data");}
    if (VL_UNLIKELY((vlSelf->inputsw & 0xfeU))) {
        Verilated::overWidthError("inputsw");}
    if (VL_UNLIKELY((vlSelf->btn & 0xf0U))) {
        Verilated::overWidthError("btn");}
}
#endif  // VL_DEBUG
