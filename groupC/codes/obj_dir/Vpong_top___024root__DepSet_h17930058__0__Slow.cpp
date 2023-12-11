// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpong_top.h for the primary calling header

#include "Vpong_top__pch.h"
#include "Vpong_top___024root.h"

VL_ATTR_COLD void Vpong_top___024root___eval_static__TOP(Vpong_top___024root* vlSelf);

VL_ATTR_COLD void Vpong_top___024root___eval_static(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_static\n"); );
    // Body
    Vpong_top___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vpong_top___024root___eval_static__TOP(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg = 0xccU;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg = 0xccU;
    vlSelf->pong_top__DOT__counter_unit__DOT__r_dig0 = 0U;
    vlSelf->pong_top__DOT__counter_unit__DOT__r_dig1 = 0U;
    vlSelf->pong_top__DOT__counter_unit__DOT__dig0_next = 0U;
    vlSelf->pong_top__DOT__counter_unit__DOT__dig1_next = 0U;
    vlSelf->pong_top__DOT__counter_unit__DOT__r_dig2 = 0U;
    vlSelf->pong_top__DOT__counter_unit__DOT__r_dig3 = 0U;
    vlSelf->pong_top__DOT__counter_unit__DOT__dig2_next = 0U;
    vlSelf->pong_top__DOT__counter_unit__DOT__dig3_next = 0U;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp = 0U;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp = 0U;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv0 = 0U;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv1 = 0U;
}

VL_ATTR_COLD void Vpong_top___024root___eval_initial__TOP(Vpong_top___024root* vlSelf);

VL_ATTR_COLD void Vpong_top___024root___eval_initial(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_initial\n"); );
    // Body
    Vpong_top___024root___eval_initial__TOP(vlSelf);
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
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_flag__0 = 0U;
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp__0 
        = vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp;
}

VL_ATTR_COLD void Vpong_top___024root___eval_initial__TOP(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->pong_top__DOT__graph_unit__DOT__ball_rng_start = 0U;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode = 0U;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt = 0U;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_flag = 0U;
    vlSelf->ssd_port_odp = 1U;
}

VL_ATTR_COLD void Vpong_top___024root___eval_final(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__stl(Vpong_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpong_top___024root___eval_phase__stl(Vpong_top___024root* vlSelf);

VL_ATTR_COLD void Vpong_top___024root___eval_settle(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_settle\n"); );
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
            Vpong_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("pong_top.v", 22, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpong_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__stl(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> Vpong_top__ConstPool__TABLE_h649ce6ff_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vpong_top__ConstPool__TABLE_h743532b2_0;
extern const VlUnpacked<CData/*6:0*/, 1024> Vpong_top__ConstPool__TABLE_h9708e114_0;
extern const VlUnpacked<CData/*6:0*/, 1024> Vpong_top__ConstPool__TABLE_ha1aa63cd_0;
extern const VlUnpacked<CData/*6:0*/, 64> Vpong_top__ConstPool__TABLE_hfbc80823_0;
extern const VlUnpacked<CData/*7:0*/, 2048> Vpong_top__ConstPool__TABLE_hf98d02f5_0;

VL_ATTR_COLD void Vpong_top___024root___stl_sequent__TOP__0(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ pong_top__DOT__text_unit__DOT__char_addr_s;
    pong_top__DOT__text_unit__DOT__char_addr_s = 0;
    CData/*0:0*/ pong_top__DOT__text_unit__DOT__ascii_bit;
    pong_top__DOT__text_unit__DOT__ascii_bit = 0;
    CData/*7:0*/ pong_top__DOT__graph_unit__DOT__rom_data;
    pong_top__DOT__graph_unit__DOT__rom_data = 0;
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*10:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->ssd_port_an_out = 0xffU;
    if ((1U & (0xffU >> (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                               >> 0x11U))))) {
        vlSelf->ssd_port_an_out = ((~ ((IData)(1U) 
                                       << (7U & (vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv 
                                                 >> 0x11U)))) 
                                   & (IData)(vlSelf->ssd_port_an_out));
    }
    vlSelf->pong_top__DOT__graph_unit__DOT__t_wall_on 
        = ((0x40U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
           & (0x47U >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)));
    vlSelf->pong_top__DOT__graph_unit__DOT__b_wall_on 
        = ((0x1d8U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
           & (0x1dfU >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)));
    vlSelf->rgb = vlSelf->pong_top__DOT__rgb_reg;
    vlSelf->hsync = (1U & (~ ((IData)(vlSelf->reset) 
                              | ((0x290U <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
                                 & (0x2efU >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg))))));
    vlSelf->vsync = (1U & (~ ((IData)(vlSelf->reset) 
                              | ((0x1eaU <= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
                                 & (0x1ebU >= (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg))))));
    vlSelf->pong_top__DOT__w_vid_on = ((0x280U > (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
                                       & (0x1e0U > (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)));
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
    __Vtableidx6 = vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__digit;
    vlSelf->ssd_port_cc = Vpong_top__ConstPool__TABLE_h649ce6ff_0
        [__Vtableidx6];
    vlSelf->pong_top__DOT__timer_unit__DOT__timer_next 
        = ((IData)(vlSelf->pong_top__DOT__timer_start)
            ? 0x7fU : (0x7fU & ((IData)(vlSelf->pong_top__DOT__timer_unit__DOT__timer_reg) 
                                - (((0U == (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg)) 
                                    & (0U == (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg))) 
                                   & (0U != (IData)(vlSelf->pong_top__DOT__timer_unit__DOT__timer_reg))))));
    __Vtableidx5 = (7U & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg) 
                          - (IData)(vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg)));
    pong_top__DOT__graph_unit__DOT__rom_data = Vpong_top__ConstPool__TABLE_h743532b2_0
        [__Vtableidx5];
    __Vtableidx1 = vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg;
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr_l 
        = Vpong_top__ConstPool__TABLE_h9708e114_0[__Vtableidx1];
    __Vtableidx3 = vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg;
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr_o 
        = Vpong_top__ConstPool__TABLE_ha1aa63cd_0[__Vtableidx3];
    vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn 
        = ((IData)(vlSelf->inputsw) ? (IData)(vlSelf->btn)
            : (IData)(vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp));
    __Vtableidx2 = ((0x30U & (IData)(vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg)) 
                    | (0xfU & ((IData)(vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg) 
                               >> 3U)));
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr_r 
        = Vpong_top__ConstPool__TABLE_hfbc80823_0[__Vtableidx2];
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
    __Vtableidx4 = vlSelf->pong_top__DOT__text_unit__DOT__ascii_unit__DOT__addr_reg;
    vlSelf->pong_top__DOT__text_unit__DOT__ascii_word 
        = Vpong_top__ConstPool__TABLE_hf98d02f5_0[__Vtableidx4];
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
        vlSelf->pong_top__DOT__text_unit__DOT__char_addr 
            = pong_top__DOT__text_unit__DOT__char_addr_s;
        if (pong_top__DOT__text_unit__DOT__ascii_bit) {
            vlSelf->pong_top__DOT__text_rgb = 0xfffU;
        }
    } else if (vlSelf->pong_top__DOT__text_unit__DOT__rule_on) {
        vlSelf->pong_top__DOT__text_unit__DOT__char_addr 
            = vlSelf->pong_top__DOT__text_unit__DOT__char_addr_r;
        if (pong_top__DOT__text_unit__DOT__ascii_bit) {
            vlSelf->pong_top__DOT__text_rgb = 0xfffU;
        }
    } else if (vlSelf->pong_top__DOT__text_unit__DOT__logo_on) {
        vlSelf->pong_top__DOT__text_unit__DOT__char_addr 
            = vlSelf->pong_top__DOT__text_unit__DOT__char_addr_l;
        if (pong_top__DOT__text_unit__DOT__ascii_bit) {
            vlSelf->pong_top__DOT__text_rgb = 0xfffU;
        }
    } else {
        vlSelf->pong_top__DOT__text_unit__DOT__char_addr 
            = vlSelf->pong_top__DOT__text_unit__DOT__char_addr_o;
        if (pong_top__DOT__text_unit__DOT__ascii_bit) {
            vlSelf->pong_top__DOT__text_rgb = 0xfffU;
        }
    }
}

VL_ATTR_COLD void Vpong_top___024root___eval_stl(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpong_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vpong_top___024root___eval_triggers__stl(Vpong_top___024root* vlSelf);

VL_ATTR_COLD bool Vpong_top___024root___eval_phase__stl(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpong_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vpong_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__ico(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__act(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge reset or posedge top_clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge pix_clk or posedge reset)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge top_clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge pix_clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge pong_top.d_clr or posedge pong_top.miss[0])\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge pong_top.d_clr or posedge pong_top.miss[1])\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(negedge pong_top.keyboard_unit.keyboard_debounce.out0)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge pong_top.keyboard_unit.keyboard_flag)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge pong_top.keyboard_unit.keyboard_clk_tmp)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_top___024root___dump_triggers__nba(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge reset or posedge top_clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge pix_clk or posedge reset)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge top_clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge pix_clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge pong_top.d_clr or posedge pong_top.miss[0])\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge pong_top.d_clr or posedge pong_top.miss[1])\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(negedge pong_top.keyboard_unit.keyboard_debounce.out0)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge pong_top.keyboard_unit.keyboard_flag)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge pong_top.keyboard_unit.keyboard_clk_tmp)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpong_top___024root___ctor_var_reset(Vpong_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpong_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top_clk = 0;
    vlSelf->pix_clk = 0;
    vlSelf->reset = 0;
    vlSelf->key_clk = 0;
    vlSelf->key_data = 0;
    vlSelf->inputsw = 0;
    vlSelf->btn = 0;
    vlSelf->key_uart = 0;
    vlSelf->hsync = 0;
    vlSelf->vsync = 0;
    vlSelf->rgb = 0;
    vlSelf->ssd_port_cc = 0;
    vlSelf->ssd_port_an_out = 0;
    vlSelf->ssd_port_odp = 0;
    vlSelf->pong_top__DOT__state_reg = 0;
    vlSelf->pong_top__DOT__state_next = 0;
    vlSelf->pong_top__DOT__w_vid_on = 0;
    vlSelf->pong_top__DOT__miss = 0;
    vlSelf->pong_top__DOT__text_on = 0;
    vlSelf->pong_top__DOT__text_rgb = 0;
    vlSelf->pong_top__DOT__rgb_reg = 0;
    vlSelf->pong_top__DOT__rgb_next = 0;
    vlSelf->pong_top__DOT__gra_still = 0;
    vlSelf->pong_top__DOT__d_clr = 0;
    vlSelf->pong_top__DOT__timer_start = 0;
    vlSelf->pong_top__DOT__ball_reg = 0;
    vlSelf->pong_top__DOT__ball_next = 0;
    vlSelf->pong_top__DOT____Vcellinp__graph_unit__btn = 0;
    vlSelf->pong_top__DOT__vga_unit__DOT__h_count_reg = 0;
    vlSelf->pong_top__DOT__vga_unit__DOT__v_count_reg = 0;
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr = 0;
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr_l = 0;
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr_r = 0;
    vlSelf->pong_top__DOT__text_unit__DOT__char_addr_o = 0;
    vlSelf->pong_top__DOT__text_unit__DOT__ascii_word = 0;
    vlSelf->pong_top__DOT__text_unit__DOT__score_on = 0;
    vlSelf->pong_top__DOT__text_unit__DOT__logo_on = 0;
    vlSelf->pong_top__DOT__text_unit__DOT__rule_on = 0;
    vlSelf->pong_top__DOT__text_unit__DOT__ascii_unit__DOT__addr_reg = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__refresh_tick = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_reg = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_l_pad_next = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_reg = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_r_pad_next = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_reg = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_reg = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_ball_next = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__x_ball_next = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__x_delta_reg = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__x_delta_next = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_delta_reg = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__y_delta_next = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__l_pad_on = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__t_wall_on = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__b_wall_on = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__r_pad_on = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__ball_on = 0;
    vlSelf->pong_top__DOT__graph_unit__DOT__ball_rng_start = 0;
    vlSelf->pong_top__DOT__timer_unit__DOT__timer_reg = 0;
    vlSelf->pong_top__DOT__timer_unit__DOT__timer_next = 0;
    vlSelf->pong_top__DOT__counter_unit__DOT__r_dig0 = 0;
    vlSelf->pong_top__DOT__counter_unit__DOT__r_dig1 = 0;
    vlSelf->pong_top__DOT__counter_unit__DOT__dig0_next = 0;
    vlSelf->pong_top__DOT__counter_unit__DOT__dig1_next = 0;
    vlSelf->pong_top__DOT__counter_unit__DOT__r_dig2 = 0;
    vlSelf->pong_top__DOT__counter_unit__DOT__r_dig3 = 0;
    vlSelf->pong_top__DOT__counter_unit__DOT__dig2_next = 0;
    vlSelf->pong_top__DOT__counter_unit__DOT__dig3_next = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_datacur = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_dataprev = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_cnt = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_keycode = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_flag = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt0 = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt1 = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv0 = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv1 = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out0 = 0;
    vlSelf->pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1 = 0;
    vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__digit = 0;
    vlSelf->pong_top__DOT__keyboard_code_ssd__DOT__clkdiv = 0;
    vlSelf->__Vdly__pong_top__DOT__graph_unit__DOT__ball_rng_start = 0;
    vlSelf->__Vdly__pong_top__DOT__ball_next = 0;
    vlSelf->__Vdly__pong_top__DOT__state_next = 0;
    vlSelf->__Vdly__pong_top__DOT__keyboard_unit__DOT__keyboard_cnt = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pix_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__d_clr__0 = 0;
    vlSelf->__Vtrigprevexpr_h2f183644__0 = 0;
    vlSelf->__Vtrigprevexpr_h2f17e793__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_flag__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp__0 = 0;
}
