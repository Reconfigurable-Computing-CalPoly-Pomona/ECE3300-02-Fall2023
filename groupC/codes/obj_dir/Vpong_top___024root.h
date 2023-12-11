// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpong_top.h for the primary calling header

#ifndef VERILATED_VPONG_TOP___024ROOT_H_
#define VERILATED_VPONG_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vpong_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpong_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(top_clk,0,0);
        VL_IN8(pix_clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ pong_top__DOT__d_clr;
        CData/*0:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp;
        CData/*0:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_flag;
        CData/*0:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out0;
        VL_IN8(key_clk,0,0);
        VL_IN8(key_data,0,0);
        VL_IN8(inputsw,0,0);
        VL_IN8(btn,3,0);
        VL_OUT8(key_uart,0,0);
        VL_OUT8(hsync,0,0);
        VL_OUT8(vsync,0,0);
        VL_OUT8(ssd_port_cc,6,0);
        VL_OUT8(ssd_port_an_out,7,0);
        VL_OUT8(ssd_port_odp,0,0);
        CData/*1:0*/ pong_top__DOT__state_reg;
        CData/*1:0*/ pong_top__DOT__state_next;
        CData/*0:0*/ pong_top__DOT__w_vid_on;
        CData/*1:0*/ pong_top__DOT__miss;
        CData/*3:0*/ pong_top__DOT__text_on;
        CData/*0:0*/ pong_top__DOT__gra_still;
        CData/*0:0*/ pong_top__DOT__timer_start;
        CData/*1:0*/ pong_top__DOT__ball_reg;
        CData/*1:0*/ pong_top__DOT__ball_next;
        CData/*3:0*/ pong_top__DOT____Vcellinp__graph_unit__btn;
        CData/*6:0*/ pong_top__DOT__text_unit__DOT__char_addr;
        CData/*6:0*/ pong_top__DOT__text_unit__DOT__char_addr_l;
        CData/*6:0*/ pong_top__DOT__text_unit__DOT__char_addr_r;
        CData/*6:0*/ pong_top__DOT__text_unit__DOT__char_addr_o;
        CData/*7:0*/ pong_top__DOT__text_unit__DOT__ascii_word;
        CData/*0:0*/ pong_top__DOT__text_unit__DOT__score_on;
        CData/*0:0*/ pong_top__DOT__text_unit__DOT__logo_on;
        CData/*0:0*/ pong_top__DOT__text_unit__DOT__rule_on;
        CData/*0:0*/ pong_top__DOT__graph_unit__DOT__refresh_tick;
        CData/*0:0*/ pong_top__DOT__graph_unit__DOT__l_pad_on;
        CData/*0:0*/ pong_top__DOT__graph_unit__DOT__t_wall_on;
        CData/*0:0*/ pong_top__DOT__graph_unit__DOT__b_wall_on;
        CData/*0:0*/ pong_top__DOT__graph_unit__DOT__r_pad_on;
        CData/*0:0*/ pong_top__DOT__graph_unit__DOT__ball_on;
        CData/*1:0*/ pong_top__DOT__graph_unit__DOT__ball_rng_start;
        CData/*6:0*/ pong_top__DOT__timer_unit__DOT__timer_reg;
        CData/*6:0*/ pong_top__DOT__timer_unit__DOT__timer_next;
        CData/*3:0*/ pong_top__DOT__counter_unit__DOT__r_dig0;
        CData/*3:0*/ pong_top__DOT__counter_unit__DOT__r_dig1;
        CData/*3:0*/ pong_top__DOT__counter_unit__DOT__dig0_next;
        CData/*3:0*/ pong_top__DOT__counter_unit__DOT__dig1_next;
        CData/*3:0*/ pong_top__DOT__counter_unit__DOT__r_dig2;
        CData/*3:0*/ pong_top__DOT__counter_unit__DOT__r_dig3;
        CData/*3:0*/ pong_top__DOT__counter_unit__DOT__dig2_next;
        CData/*3:0*/ pong_top__DOT__counter_unit__DOT__dig3_next;
        CData/*7:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_datacur;
        CData/*7:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_dataprev;
        CData/*3:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_cnt;
        CData/*3:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_out_tmp;
        CData/*4:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt0;
        CData/*4:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__cnt1;
        CData/*0:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv0;
        CData/*0:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__iv1;
        CData/*0:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out1;
        CData/*3:0*/ pong_top__DOT__keyboard_code_ssd__DOT__digit;
        CData/*1:0*/ __Vdly__pong_top__DOT__graph_unit__DOT__ball_rng_start;
        CData/*1:0*/ __Vdly__pong_top__DOT__ball_next;
    };
    struct {
        CData/*1:0*/ __Vdly__pong_top__DOT__state_next;
        CData/*3:0*/ __Vdly__pong_top__DOT__keyboard_unit__DOT__keyboard_cnt;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__pix_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__pong_top__DOT__d_clr__0;
        CData/*0:0*/ __Vtrigprevexpr_h2f183644__0;
        CData/*0:0*/ __Vtrigprevexpr_h2f17e793__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_debounce__DOT__out0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_flag__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__pong_top__DOT__keyboard_unit__DOT__keyboard_clk_tmp__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(rgb,11,0);
        SData/*11:0*/ pong_top__DOT__text_rgb;
        SData/*11:0*/ pong_top__DOT__rgb_reg;
        SData/*11:0*/ pong_top__DOT__rgb_next;
        SData/*9:0*/ pong_top__DOT__vga_unit__DOT__h_count_reg;
        SData/*9:0*/ pong_top__DOT__vga_unit__DOT__v_count_reg;
        SData/*10:0*/ pong_top__DOT__text_unit__DOT__ascii_unit__DOT__addr_reg;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__y_l_pad_reg;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__y_l_pad_next;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__y_r_pad_reg;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__y_r_pad_next;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__y_ball_reg;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__x_ball_reg;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__y_ball_next;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__x_ball_next;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__x_delta_reg;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__x_delta_next;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__y_delta_reg;
        SData/*9:0*/ pong_top__DOT__graph_unit__DOT__y_delta_next;
        IData/*31:0*/ pong_top__DOT__keyboard_unit__DOT__keyboard_keycode;
        IData/*19:0*/ pong_top__DOT__keyboard_code_ssd__DOT__clkdiv;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<9> __VactTriggered;
    VlTriggerVec<9> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpong_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpong_top___024root(Vpong_top__Syms* symsp, const char* v__name);
    ~Vpong_top___024root();
    VL_UNCOPYABLE(Vpong_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
