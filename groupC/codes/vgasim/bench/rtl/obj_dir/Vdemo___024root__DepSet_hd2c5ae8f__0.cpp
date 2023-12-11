// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemo.h for the primary calling header

#include "Vdemo__pch.h"
#include "Vdemo___024root.h"

VL_INLINE_OPT void Vdemo___024root___ico_sequent__TOP__0(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3 
        = ((IData)(vlSelf->i_reset) | (IData)(vlSelf->i_test));
}

void Vdemo___024root___eval_ico(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vdemo___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vdemo___024root___eval_triggers__ico(Vdemo___024root* vlSelf);

bool Vdemo___024root___eval_phase__ico(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdemo___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vdemo___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdemo___024root___eval_act(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___eval_act\n"); );
}

extern const VlUnpacked<IData/*23:0*/, 16> Vdemo__ConstPool__TABLE_h6880c8c4_0;
extern const VlUnpacked<IData/*23:0*/, 16> Vdemo__ConstPool__TABLE_h1d3187ea_0;
extern const VlUnpacked<IData/*23:0*/, 16> Vdemo__ConstPool__TABLE_h1e0974db_0;

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__0(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*10:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos = 0;
    CData/*3:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline = 0;
    SData/*10:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge = 0;
    SData/*12:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos = 0;
    CData/*3:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar = 0;
    SData/*12:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge = 0;
    SData/*15:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac = 0;
    SData/*15:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step = 0;
    // Body
    vlSelf->__Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vpos 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vpos;
    vlSelf->__Vdly__demo__DOT__vgai__DOT__vgahw__DOT__hpos 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline;
    __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos 
        = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos;
    if (((IData)(vlSelf->i_reset) | ((IData)(vlSelf->i_hm_width) 
                                     != (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__last_width)))) {
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step = 1U;
    } else if (((IData)(vlSelf->demo__DOT__vgai__DOT__vga_newline) 
                & (0U < (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac)))) {
        if (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
             < (0xffffU & ((IData)(0xffffU) - (IData)(vlSelf->i_hm_width))))) {
            __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step)));
        } else if (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                    < (IData)(vlSelf->i_hm_width))) {
            __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step 
                = (0xffffU & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step) 
                              - (IData)(1U)));
        }
    }
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->demo__DOT__vgai__DOT__vga_newline))) {
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac = 0U;
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos = 0U;
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar = 0U;
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge 
            = (0x1ffU & ((IData)(vlSelf->i_hm_width) 
                         >> 4U));
    } else if (vlSelf->demo__DOT__vgai__DOT__vga_rd) {
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac 
            = (0xffffU & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                          + (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step)));
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos 
            = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos)));
        if (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos) 
             >= (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge))) {
            __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar)));
            __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge 
                = (0x1fffU & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge) 
                              + (0x1ffU & ((IData)(vlSelf->i_hm_width) 
                                           >> 4U))));
        }
    }
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->demo__DOT__vgai__DOT__vga_newframe))) {
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos = 0U;
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline = 0U;
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge 
            = (0x7fU & ((IData)(vlSelf->i_vm_height) 
                        >> 4U));
    } else if (vlSelf->demo__DOT__vgai__DOT__vga_newline) {
        __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos 
            = (0x7ffU & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos) 
                         + (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__dline)));
        if (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos) 
             >= (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge))) {
            __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline)));
            __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge 
                = (0x7ffU & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge) 
                             + (0x7fU & ((IData)(vlSelf->i_vm_height) 
                                         >> 4U))));
        }
    }
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vrd = 
        (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vpos) 
          < (IData)(vlSelf->i_vm_height)) & (~ (IData)(vlSelf->i_reset)));
    if (vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__w_rd) {
        if (vlSelf->i_test) {
            vlSelf->o_vga_grn = (0xffU & (vlSelf->demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                          >> 8U));
            vlSelf->o_vga_red = (0xffU & (vlSelf->demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                          >> 0x10U));
            vlSelf->o_vga_blu = (0xffU & vlSelf->demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8);
        } else {
            vlSelf->o_vga_grn = (0xffU & (vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word 
                                          >> 8U));
            vlSelf->o_vga_red = (0xffU & (vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word 
                                          >> 0x10U));
            vlSelf->o_vga_blu = (0xffU & vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word);
        }
    } else {
        vlSelf->o_vga_grn = 0U;
        vlSelf->o_vga_red = 0U;
        vlSelf->o_vga_blu = 0U;
    }
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step 
        = __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge 
        = __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge 
        = __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__last_width 
        = vlSelf->i_hm_width;
    if ((((IData)(vlSelf->i_reset) | (IData)(vlSelf->demo__DOT__vgai__DOT__vga_newframe)) 
         | (IData)(vlSelf->demo__DOT__vgai__DOT__vga_newline))) {
        vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__dline = 0U;
    } else if (vlSelf->demo__DOT__vgai__DOT__vga_rd) {
        vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__dline = 1U;
    }
    if (vlSelf->demo__DOT__vgai__DOT__vga_newline) {
        vlSelf->demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 = 0xffffffU;
    } else if (vlSelf->demo__DOT__vgai__DOT__vga_rd) {
        vlSelf->demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
            = (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos) 
                == (0x1fffU & ((IData)(vlSelf->i_hm_width) 
                               - (IData)(3U)))) ? 0xffffffU
                : (((0U == (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos)) 
                    | ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos) 
                       == ((IData)(vlSelf->i_vm_height) 
                           - (IData)(1U)))) ? 0xffffffU
                    : vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__pattern));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vpos = 0U;
        vlSelf->o_vga_vsync = 1U;
        vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__first_frame = 1U;
        vlSelf->__Vdly__demo__DOT__vgai__DOT__vgahw__DOT__hpos = 0U;
        vlSelf->demo__DOT__vgai__DOT__vga_newline = 0U;
        vlSelf->o_vga_hsync = 1U;
        vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hrd = 1U;
    } else {
        if (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos) 
             == (0x1fffU & ((IData)(vlSelf->i_hm_porch) 
                            - (IData)(1U))))) {
            vlSelf->__Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vpos 
                = (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vpos) 
                    < (0x7ffU & ((IData)(vlSelf->i_vm_raw) 
                                 - (IData)(1U)))) ? 
                   (0x7ffU & ((IData)(1U) + (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vpos)))
                    : 0U);
            vlSelf->o_vga_vsync = (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vpos) 
                                    < (0x7ffU & ((IData)(vlSelf->i_vm_porch) 
                                                 - (IData)(1U)))) 
                                   | ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vpos) 
                                      >= (0x7ffU & 
                                          ((IData)(vlSelf->i_vm_synch) 
                                           - (IData)(1U)))));
        }
        if (vlSelf->demo__DOT__vgai__DOT__vga_newframe) {
            vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__first_frame = 0U;
        }
        vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hrd 
            = (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos) 
                < ((IData)(vlSelf->i_hm_width) - (IData)(2U))) 
               | ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos) 
                  >= ((IData)(vlSelf->i_hm_raw) - (IData)(2U))));
        vlSelf->__Vdly__demo__DOT__vgai__DOT__vgahw__DOT__hpos 
            = (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos) 
                < (0x1fffU & ((IData)(vlSelf->i_hm_raw) 
                              - (IData)(1U)))) ? (0x1fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos)))
                : 0U);
        vlSelf->demo__DOT__vgai__DOT__vga_newline = 
            ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos) 
             == ((IData)(vlSelf->i_hm_width) - (IData)(2U)));
        vlSelf->o_vga_hsync = (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos) 
                                < (0x1fffU & ((IData)(vlSelf->i_hm_porch) 
                                              - (IData)(1U)))) 
                               | ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos) 
                                  >= (0x1fffU & ((IData)(vlSelf->i_hm_synch) 
                                                 - (IData)(1U)))));
    }
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos 
        = __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos 
        = __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos;
    vlSelf->demo__DOT__vgai__DOT__vga_rd = ((~ (IData)(vlSelf->i_reset)) 
                                            & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__w_rd));
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__pattern 
        = ((8U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
            ? ((4U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                ? ((2U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                    ? ((1U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                        ? 0U : vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__gradient)
                    : ((1U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                        ? 0U : vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__fatbar))
                : ((2U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                    ? vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__fatbar
                    : ((1U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                        ? vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__midbar
                        : vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__topbar)))
            : ((4U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                ? vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__topbar
                : ((2U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                    ? vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__topbar
                    : ((1U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                        ? vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__topbar
                        : 0U))));
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline 
        = __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__w_rd 
        = ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hrd) 
           & ((~ (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__first_frame)) 
              & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vrd)));
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__gradient 
        = (0xffffffU & ((0x8000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                         ? ((0x4000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                             ? ((0x2000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                 ? 0U : ((0x1000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                          ? (0xc0c0c0U 
                                             | ((0x3f0000U 
                                                 & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                    << 0xaU)) 
                                                | ((0x3f00U 
                                                    & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                       << 2U)) 
                                                   | (0x3fU 
                                                      & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                         >> 6U)))))
                                          : (0x808080U 
                                             | ((0x3f0000U 
                                                 & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                    << 0xaU)) 
                                                | ((0x3f00U 
                                                    & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                       << 2U)) 
                                                   | (0x3fU 
                                                      & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                         >> 6U)))))))
                             : ((0x2000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                 ? ((0x1000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? (0x404040U | 
                                        ((0x3f0000U 
                                          & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                             << 0xaU)) 
                                         | ((0x3f00U 
                                             & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                << 2U)) 
                                            | (0x3fU 
                                               & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                  >> 6U)))))
                                     : ((0x3f0000U 
                                         & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                            << 0xaU)) 
                                        | ((0x3f00U 
                                            & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                               << 2U)) 
                                           | (0x3fU 
                                              & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                 >> 6U)))))
                                 : ((0x1000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? 0U : (0x80U 
                                             | (0x7fU 
                                                & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                   >> 5U))))))
                         : ((0x4000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                             ? ((0x2000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                 ? ((0x1000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? (0x7fU & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                 >> 5U))
                                     : 0U) : ((0x1000U 
                                               & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                               ? (0x8000U 
                                                  | (0x7f00U 
                                                     & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                        << 3U)))
                                               : (0x7f00U 
                                                  & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                     << 3U))))
                             : ((0x2000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                 ? ((0x1000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? 0U : (0x800000U 
                                             | (0x7f0000U 
                                                & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                   << 0xbU))))
                                 : ((0x1000U & (IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? (0x7f0000U & 
                                        ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                         << 0xbU)) : 0U)))));
    __Vtableidx3 = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__fatbar 
        = Vdemo__ConstPool__TABLE_h6880c8c4_0[__Vtableidx3];
    __Vtableidx2 = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__midbar 
        = Vdemo__ConstPool__TABLE_h1d3187ea_0[__Vtableidx2];
    __Vtableidx1 = vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__topbar 
        = Vdemo__ConstPool__TABLE_h1e0974db_0[__Vtableidx1];
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac 
        = __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar 
        = __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
}

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__1(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__demo__DOT__wb_cyc;
    __Vdly__demo__DOT__wb_cyc = 0;
    CData/*0:0*/ __Vdly__demo__DOT__wb_stb;
    __Vdly__demo__DOT__wb_stb = 0;
    IData/*23:0*/ __Vdly__demo__DOT__wb_addr;
    __Vdly__demo__DOT__wb_addr = 0;
    SData/*12:0*/ __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count;
    __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count = 0;
    SData/*12:0*/ __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count;
    __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count = 0;
    SData/*10:0*/ __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos;
    __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos = 0;
    SData/*12:0*/ __Vdlyvdim0__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0;
    __Vdlyvdim0__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0;
    __Vdlyvval__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0;
    __Vdlyvset__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 0;
    // Body
    __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count 
        = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count;
    vlSelf->__Vdly__demo__DOT__vgai__DOT__newframe__DOT__tfr_stb 
        = vlSelf->demo__DOT__vgai__DOT__newframe__DOT__tfr_stb;
    __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count 
        = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count;
    __Vdlyvset__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 0U;
    __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos 
        = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos;
    __Vdly__demo__DOT__wb_addr = vlSelf->demo__DOT__wb_addr;
    __Vdly__demo__DOT__wb_stb = vlSelf->demo__DOT__wb_stb;
    __Vdly__demo__DOT__wb_cyc = vlSelf->demo__DOT__wb_cyc;
    if ((1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                >> 2U) | (~ (IData)(vlSelf->demo__DOT__wb_cyc))))) {
        __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count = 0U;
        __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count = 0U;
    } else {
        if (vlSelf->demo__DOT__wb_stb) {
            __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count)));
        }
        if (vlSelf->demo__DOT__mem_ack) {
            __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count)));
        }
    }
    vlSelf->__Vdly__demo__DOT__vgai__DOT__newframe__DOT__tfr_stb 
        = ((6U & ((IData)(vlSelf->demo__DOT__vgai__DOT__newframe__DOT__tfr_stb) 
                  << 1U)) | (IData)(vlSelf->demo__DOT__vgai__DOT__newframe__DOT__lcl_stb));
    if (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3) 
         & (~ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full)))) {
        __Vdlyvval__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 
            = vlSelf->demo__DOT__mem_data;
        __Vdlyvset__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 
            = (0x1fffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin));
    }
    if ((4U & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe))) {
        __Vdly__demo__DOT__wb_cyc = 0U;
        __Vdly__demo__DOT__wb_stb = 0U;
        __Vdly__demo__DOT__wb_addr = 0U;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo = 0U;
        __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos = 0U;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame 
            = (0U == (IData)(vlSelf->i_vm_height));
    } else {
        if (vlSelf->demo__DOT__wb_cyc) {
            if (vlSelf->demo__DOT__wb_stb) {
                __Vdly__demo__DOT__wb_stb = (1U & (~ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb)));
                __Vdly__demo__DOT__wb_addr = (0xffffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->demo__DOT__wb_addr));
            } else {
                __Vdly__demo__DOT__wb_stb = 0U;
            }
            if (((IData)(vlSelf->demo__DOT__mem_ack) 
                 & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack))) {
                __Vdly__demo__DOT__wb_cyc = 0U;
            }
            vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo = 0U;
        } else {
            if (vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo) {
                __Vdly__demo__DOT__wb_cyc = 1U;
                __Vdly__demo__DOT__wb_stb = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame)))) {
                vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo 
                    = ((0x3fffU & ((IData)(0x2000U) 
                                   - (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill))) 
                       > ((IData)(1U) + (IData)(vlSelf->i_hm_width)));
            }
        }
        if ((((IData)(vlSelf->demo__DOT__wb_cyc) & (IData)(vlSelf->demo__DOT__mem_ack)) 
             & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack))) {
            if (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos) 
                 < (IData)(vlSelf->i_vm_height))) {
                __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos)));
            }
            vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame 
                = ((0U == (IData)(vlSelf->i_vm_height)) 
                   | ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos) 
                      >= (0x7ffU & ((IData)(vlSelf->i_vm_height) 
                                    - (IData)(1U)))));
        }
    }
    vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_sel = 0U;
    vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_data = 0U;
    vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_wstb = 0U;
    vlSelf->o_interrupt = (IData)((2U == (6U & (IData)(vlSelf->demo__DOT__vgai__DOT__newframe__DOT__tfr_stb))));
    if (__Vdlyvset__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0) {
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem[__Vdlyvdim0__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0] 
            = __Vdlyvval__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0;
    }
    vlSelf->demo__DOT__mem_data = vlSelf->demo__DOT__memi__DOT__mem
        [vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_addr];
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb 
        = ((~ (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                >> 2U) | (~ (IData)(vlSelf->demo__DOT__wb_cyc)))) 
           & ((IData)(vlSelf->demo__DOT__wb_stb) ? 
              ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count) 
               >= ((IData)(vlSelf->i_hm_width) - (IData)(2U)))
               : ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count) 
                  >= (0x7fffU & ((IData)(vlSelf->i_hm_width) 
                                 - (IData)(1U))))));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count 
        = __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count;
    vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_addr 
        = vlSelf->demo__DOT__wb_addr;
    vlSelf->demo__DOT__wb_addr = __Vdly__demo__DOT__wb_addr;
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos 
        = __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos;
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack 
        = ((~ (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                >> 2U) | (~ (IData)(vlSelf->demo__DOT__wb_cyc)))) 
           & ((IData)(vlSelf->demo__DOT__mem_ack) ? 
              ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count) 
               >= ((IData)(vlSelf->i_hm_width) - (IData)(2U)))
               : ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count) 
                  >= (0x7fffU & ((IData)(vlSelf->i_hm_width) 
                                 - (IData)(1U))))));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count 
        = __Vdly__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count;
    vlSelf->demo__DOT__mem_ack = ((~ (IData)(vlSelf->i_reset)) 
                                  & ((IData)(vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_stb) 
                                     & (IData)(vlSelf->demo__DOT__wb_cyc)));
    vlSelf->demo__DOT__wb_cyc = __Vdly__demo__DOT__wb_cyc;
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0 
        = ((IData)(vlSelf->demo__DOT__mem_ack) & (IData)(vlSelf->demo__DOT__wb_cyc));
    vlSelf->demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_stb 
        = ((~ (IData)(vlSelf->i_reset)) & (IData)(vlSelf->demo__DOT__wb_stb));
    vlSelf->demo__DOT__wb_stb = __Vdly__demo__DOT__wb_stb;
}

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__2(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe 
        = ((IData)(vlSelf->demo__DOT__vgai__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3)
            ? 7U : ((IData)(vlSelf->demo__DOT__vgai__DOT__vga_newframe)
                     ? 7U : (6U & ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe) 
                                   << 1U))));
}

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__3(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe 
        = ((IData)(vlSelf->demo__DOT__vgai__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3)
            ? 7U : ((IData)(vlSelf->demo__DOT__vgai__DOT__vga_newframe)
                     ? 7U : (6U & ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                                   << 1U))));
}

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__4(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty 
        = (1U & ((~ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n)) 
                 | ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext) 
                    == (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray))));
    if (vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n) {
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin 
            = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray 
            = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray 
            = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray;
    } else {
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin = 0U;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray = 0U;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray = 0U;
    }
}

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__5(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->demo__DOT__vgai__DOT__vga_newframe) {
        vlSelf->demo__DOT__vgai__DOT__newframe__DOT__lcl_stb = 1U;
    } else if (vlSelf->demo__DOT__vgai__DOT__newframe__DOT__lcl_ack) {
        vlSelf->demo__DOT__vgai__DOT__newframe__DOT__lcl_stb = 0U;
    }
    vlSelf->demo__DOT__vgai__DOT__newframe__DOT__lcl_ack 
        = vlSelf->demo__DOT__vgai__DOT__newframe__DOT__tfr_ack;
    vlSelf->demo__DOT__vgai__DOT__vga_newframe = ((~ (IData)(vlSelf->i_reset)) 
                                                  & (((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos) 
                                                      == 
                                                      ((IData)(vlSelf->i_hm_width) 
                                                       - (IData)(2U))) 
                                                     & ((IData)(vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vpos) 
                                                        == 
                                                        ((IData)(vlSelf->i_vm_height) 
                                                         - (IData)(1U)))));
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__vpos 
        = vlSelf->__Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vpos;
    vlSelf->demo__DOT__vgai__DOT__vgahw__DOT__hpos 
        = vlSelf->__Vdly__demo__DOT__vgai__DOT__vgahw__DOT__hpos;
    vlSelf->demo__DOT__vgai__DOT__newframe__DOT__tfr_ack 
        = (1U & ((IData)(vlSelf->demo__DOT__vgai__DOT__newframe__DOT__tfr_stb) 
                 >> 2U));
}

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__6(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0;
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 = 0;
    // Body
    if (vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n) {
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full 
            = ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext) 
               == ((0x3000U & ((~ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                                   >> 0xcU)) << 0xcU)) 
                   | (0xfffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray))));
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill 
            = (0x3fffU & ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin) 
                          - (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)));
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray 
            = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray 
            = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin 
            = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray 
            = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray;
    } else {
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full = 0U;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill = 0U;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray = 0U;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray = 0U;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin = 0U;
        vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray = 0U;
    }
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x1fffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | (0x2000U & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray)));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 0xcU) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                              >> 0xdU)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x2fffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 0xcU));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 0xbU) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                              >> 0xcU)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x37ffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 0xbU));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 0xaU) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                              >> 0xbU)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3bffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 0xaU));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 9U) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 0xaU)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3dffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 9U));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 8U) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 9U)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3effU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 8U));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 7U) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 8U)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3f7fU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 7U));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 6U) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 7U)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3fbfU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 6U));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 5U) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 6U)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3fdfU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 5U));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 4U) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 5U)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3fefU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 4U));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 3U) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 4U)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3ff7U & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 3U));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 2U) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 3U)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3ffbU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 2U));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                  >> 1U) ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                            >> 2U)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3ffdU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | ((IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0) 
              << 1U));
    demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 
        = (1U & ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                 ^ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin) 
                    >> 1U)));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin 
        = ((0x3ffeU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)) 
           | (IData)(demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0));
}

VL_INLINE_OPT void Vdemo___024root___nba_comb__TOP__0(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word 
        = vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem
        [(0x1fffU & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin))];
}

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__7(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__newframe__DOT__tfr_stb 
        = vlSelf->__Vdly__demo__DOT__vgai__DOT__newframe__DOT__tfr_stb;
}

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__8(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray 
        = ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n)
            ? (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext)
            : 0U);
}

VL_INLINE_OPT void Vdemo___024root___nba_sequent__TOP__9(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n 
        = (1U & (~ ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                    >> 2U)));
}

VL_INLINE_OPT void Vdemo___024root___nba_comb__TOP__1(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n 
        = (1U & (~ (((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe) 
                     >> 2U) | (IData)(vlSelf->demo__DOT__vgai__DOT__vga_newframe))));
}

VL_INLINE_OPT void Vdemo___024root___nba_comb__TOP__2(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3 
        = ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n) 
           & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0));
}

VL_INLINE_OPT void Vdemo___024root___nba_comb__TOP__3(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext 
        = (0x3fffU & ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin) 
                      + ((~ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty)) 
                         & ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n) 
                            & (IData)(vlSelf->demo__DOT__vgai__DOT__vga_rd)))));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext 
        = (0x3fffU & (VL_SHIFTR_III(14,14,32, (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext), 1U) 
                      ^ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext)));
}

VL_INLINE_OPT void Vdemo___024root___nba_comb__TOP__4(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext 
        = (0x3fffU & ((IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin) 
                      + ((~ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full)) 
                         & (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3))));
    vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext 
        = (0x3fffU & (VL_SHIFTR_III(14,14,32, (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext), 1U) 
                      ^ (IData)(vlSelf->demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext)));
}

void Vdemo___024root___eval_nba(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0xaULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x2aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x15ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemo___024root___nba_comb__TOP__4(vlSelf);
    }
}

void Vdemo___024root___eval_triggers__act(Vdemo___024root* vlSelf);

bool Vdemo___024root___eval_phase__act(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdemo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdemo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdemo___024root___eval_phase__nba(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdemo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemo___024root___dump_triggers__ico(Vdemo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemo___024root___dump_triggers__nba(Vdemo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemo___024root___dump_triggers__act(Vdemo___024root* vlSelf);
#endif  // VL_DEBUG

void Vdemo___024root___eval(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___eval\n"); );
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
            Vdemo___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("demo.v", 38, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdemo___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdemo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("demo.v", 38, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdemo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("demo.v", 38, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdemo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdemo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdemo___024root___eval_debug_assertions(Vdemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_pixclk & 0xfeU))) {
        Verilated::overWidthError("i_pixclk");}
    if (VL_UNLIKELY((vlSelf->i_reset & 0xfeU))) {
        Verilated::overWidthError("i_reset");}
    if (VL_UNLIKELY((vlSelf->i_test & 0xfeU))) {
        Verilated::overWidthError("i_test");}
    if (VL_UNLIKELY((vlSelf->i_hm_width & 0xe000U))) {
        Verilated::overWidthError("i_hm_width");}
    if (VL_UNLIKELY((vlSelf->i_hm_porch & 0xe000U))) {
        Verilated::overWidthError("i_hm_porch");}
    if (VL_UNLIKELY((vlSelf->i_hm_synch & 0xe000U))) {
        Verilated::overWidthError("i_hm_synch");}
    if (VL_UNLIKELY((vlSelf->i_hm_raw & 0xe000U))) {
        Verilated::overWidthError("i_hm_raw");}
    if (VL_UNLIKELY((vlSelf->i_vm_height & 0xf800U))) {
        Verilated::overWidthError("i_vm_height");}
    if (VL_UNLIKELY((vlSelf->i_vm_porch & 0xf800U))) {
        Verilated::overWidthError("i_vm_porch");}
    if (VL_UNLIKELY((vlSelf->i_vm_synch & 0xf800U))) {
        Verilated::overWidthError("i_vm_synch");}
    if (VL_UNLIKELY((vlSelf->i_vm_raw & 0xf800U))) {
        Verilated::overWidthError("i_vm_raw");}
}
#endif  // VL_DEBUG
