// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwbvgaframe.h for the primary calling header

#include "Vwbvgaframe__pch.h"
#include "Vwbvgaframe___024root.h"

VL_INLINE_OPT void Vwbvgaframe___024root___ico_sequent__TOP__0(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3 
        = (1U & ((IData)(vlSelf->i_reset) | ((~ (IData)(vlSelf->i_en)) 
                                             | (IData)(vlSelf->i_test))));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0 
        = ((IData)(vlSelf->i_wb_ack) & (IData)(vlSelf->o_wb_cyc));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3 
        = ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n) 
           & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext 
        = (0x3fffU & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin) 
                      + ((~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full)) 
                         & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3))));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext 
        = (0x3fffU & (VL_SHIFTR_III(14,14,32, (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext), 1U) 
                      ^ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext)));
}

void Vwbvgaframe___024root___eval_ico(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vwbvgaframe___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vwbvgaframe___024root___eval_triggers__ico(Vwbvgaframe___024root* vlSelf);

bool Vwbvgaframe___024root___eval_phase__ico(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vwbvgaframe___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vwbvgaframe___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vwbvgaframe___024root___eval_act(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_act\n"); );
}

extern const VlUnpacked<IData/*23:0*/, 16> Vwbvgaframe__ConstPool__TABLE_h6880c8c4_0;
extern const VlUnpacked<IData/*23:0*/, 16> Vwbvgaframe__ConstPool__TABLE_h1d3187ea_0;
extern const VlUnpacked<IData/*23:0*/, 16> Vwbvgaframe__ConstPool__TABLE_h1e0974db_0;

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__0(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*11:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos = 0;
    CData/*3:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline = 0;
    SData/*11:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge = 0;
    SData/*12:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos = 0;
    CData/*3:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar = 0;
    SData/*12:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge = 0;
    SData/*15:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac = 0;
    SData/*15:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step = 0;
    // Body
    vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__vpos 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos;
    vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__hpos 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline;
    __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos 
        = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos;
    if (((IData)(vlSelf->i_reset) | ((IData)(vlSelf->i_hm_width) 
                                     != (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__last_width)))) {
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step = 1U;
    } else if (((IData)(vlSelf->wbvgaframe__DOT__vga_newline) 
                & (0U < (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac)))) {
        if (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
             < (0xffffU & ((IData)(0xffffU) - (IData)(vlSelf->i_hm_width))))) {
            __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step)));
        } else if (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                    < (IData)(vlSelf->i_hm_width))) {
            __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step 
                = (0xffffU & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step) 
                              - (IData)(1U)));
        }
    }
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->wbvgaframe__DOT__vga_newline))) {
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac = 0U;
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos = 0U;
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar = 0U;
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge 
            = (0x1ffU & ((IData)(vlSelf->i_hm_width) 
                         >> 4U));
    } else if (vlSelf->wbvgaframe__DOT__vga_rd) {
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac 
            = (0xffffU & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                          + (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step)));
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos 
            = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos)));
        if (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos) 
             >= (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge))) {
            __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar)));
            __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge 
                = (0x1fffU & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge) 
                              + (0x1ffU & ((IData)(vlSelf->i_hm_width) 
                                           >> 4U))));
        }
    }
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->wbvgaframe__DOT__vga_newframe))) {
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos = 0U;
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline = 0U;
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge 
            = (0xffU & ((IData)(vlSelf->i_vm_height) 
                        >> 4U));
    } else if (vlSelf->wbvgaframe__DOT__vga_newline) {
        __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos 
            = (0xfffU & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos) 
                         + (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__dline)));
        if (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos) 
             >= (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge))) {
            __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline)));
            __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge 
                = (0xfffU & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge) 
                             + (0xffU & ((IData)(vlSelf->i_vm_height) 
                                         >> 4U))));
        }
    }
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vrd = (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos) 
                                                 < (IData)(vlSelf->i_vm_height)) 
                                                & (~ (IData)(vlSelf->i_reset)));
    if (vlSelf->wbvgaframe__DOT__vgahw__DOT__w_rd) {
        if (vlSelf->i_test) {
            vlSelf->o_vga_grn = (0xffU & (vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                          >> 8U));
            vlSelf->o_vga_red = (0xffU & (vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
                                          >> 0x10U));
            vlSelf->o_vga_blu = (0xffU & vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8);
        } else {
            vlSelf->o_vga_grn = (0xffU & (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
                                          >> 8U));
            vlSelf->o_vga_red = (0xffU & (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
                                          >> 0x10U));
            vlSelf->o_vga_blu = (0xffU & vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word);
        }
    } else {
        vlSelf->o_vga_grn = 0U;
        vlSelf->o_vga_red = 0U;
        vlSelf->o_vga_blu = 0U;
    }
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step 
        = __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge 
        = __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge 
        = __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__last_width 
        = vlSelf->i_hm_width;
    if ((((IData)(vlSelf->i_reset) | (IData)(vlSelf->wbvgaframe__DOT__vga_newframe)) 
         | (IData)(vlSelf->wbvgaframe__DOT__vga_newline))) {
        vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__dline = 0U;
    } else if (vlSelf->wbvgaframe__DOT__vga_rd) {
        vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__dline = 1U;
    }
    if (vlSelf->wbvgaframe__DOT__vga_newline) {
        vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 = 0xffffffU;
    } else if (vlSelf->wbvgaframe__DOT__vga_rd) {
        vlSelf->wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8 
            = (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos) 
                == (0x1fffU & ((IData)(vlSelf->i_hm_width) 
                               - (IData)(3U)))) ? 0xffffffU
                : (((0U == (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos)) 
                    | ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos) 
                       == ((IData)(vlSelf->i_vm_height) 
                           - (IData)(1U)))) ? 0xffffffU
                    : vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__pattern));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__vpos = 0U;
        vlSelf->o_vga_vsync = 1U;
        vlSelf->wbvgaframe__DOT__vgahw__DOT__first_frame = 1U;
        vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__hpos = 0U;
        vlSelf->wbvgaframe__DOT__vga_newline = 0U;
        vlSelf->o_vga_hsync = 1U;
        vlSelf->wbvgaframe__DOT__vgahw__DOT__hrd = 1U;
    } else {
        if (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos) 
             == (0x1fffU & ((IData)(vlSelf->i_hm_porch) 
                            - (IData)(1U))))) {
            vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__vpos 
                = (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos) 
                    < (0xfffU & ((IData)(vlSelf->i_vm_raw) 
                                 - (IData)(1U)))) ? 
                   (0xfffU & ((IData)(1U) + (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos)))
                    : 0U);
            vlSelf->o_vga_vsync = (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos) 
                                    < (0xfffU & ((IData)(vlSelf->i_vm_porch) 
                                                 - (IData)(1U)))) 
                                   | ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos) 
                                      >= (0xfffU & 
                                          ((IData)(vlSelf->i_vm_synch) 
                                           - (IData)(1U)))));
        }
        if (vlSelf->wbvgaframe__DOT__vga_newframe) {
            vlSelf->wbvgaframe__DOT__vgahw__DOT__first_frame = 0U;
        }
        vlSelf->wbvgaframe__DOT__vgahw__DOT__hrd = 
            (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos) 
              < ((IData)(vlSelf->i_hm_width) - (IData)(2U))) 
             | ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos) 
                >= ((IData)(vlSelf->i_hm_raw) - (IData)(2U))));
        vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__hpos 
            = (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos) 
                < (0x1fffU & ((IData)(vlSelf->i_hm_raw) 
                              - (IData)(1U)))) ? (0x1fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos)))
                : 0U);
        vlSelf->wbvgaframe__DOT__vga_newline = ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos) 
                                                == 
                                                ((IData)(vlSelf->i_hm_width) 
                                                 - (IData)(2U)));
        vlSelf->o_vga_hsync = (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos) 
                                < (0x1fffU & ((IData)(vlSelf->i_hm_porch) 
                                              - (IData)(1U)))) 
                               | ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos) 
                                  >= (0x1fffU & ((IData)(vlSelf->i_hm_synch) 
                                                 - (IData)(1U)))));
    }
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos 
        = __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos 
        = __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos;
    vlSelf->wbvgaframe__DOT__vga_rd = ((~ (IData)(vlSelf->i_reset)) 
                                       & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__w_rd));
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__pattern 
        = ((8U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
            ? ((4U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                ? ((2U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                    ? ((1U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                        ? 0U : vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__gradient)
                    : ((1U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                        ? 0U : vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__fatbar))
                : ((2U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                    ? vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__fatbar
                    : ((1U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                        ? vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__midbar
                        : vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__topbar)))
            : ((4U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                ? vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__topbar
                : ((2U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                    ? vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__topbar
                    : ((1U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline))
                        ? vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__topbar
                        : 0U))));
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline 
        = __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__w_rd = ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hrd) 
                                                 & ((~ (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__first_frame)) 
                                                    & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vrd)));
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__gradient 
        = (0xffffffU & ((0x8000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                         ? ((0x4000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                             ? ((0x2000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                 ? 0U : ((0x1000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                          ? (0xc0c0c0U 
                                             | ((0x3f0000U 
                                                 & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                    << 0xaU)) 
                                                | ((0x3f00U 
                                                    & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                       << 2U)) 
                                                   | (0x3fU 
                                                      & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                         >> 6U)))))
                                          : (0x808080U 
                                             | ((0x3f0000U 
                                                 & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                    << 0xaU)) 
                                                | ((0x3f00U 
                                                    & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                       << 2U)) 
                                                   | (0x3fU 
                                                      & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                         >> 6U)))))))
                             : ((0x2000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                 ? ((0x1000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? (0x404040U | 
                                        ((0x3f0000U 
                                          & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                             << 0xaU)) 
                                         | ((0x3f00U 
                                             & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                << 2U)) 
                                            | (0x3fU 
                                               & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                  >> 6U)))))
                                     : ((0x3f0000U 
                                         & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                            << 0xaU)) 
                                        | ((0x3f00U 
                                            & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                               << 2U)) 
                                           | (0x3fU 
                                              & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                 >> 6U)))))
                                 : ((0x1000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? 0U : (0x80U 
                                             | (0x7fU 
                                                & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                   >> 5U))))))
                         : ((0x4000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                             ? ((0x2000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                 ? ((0x1000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? (0x7fU & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                 >> 5U))
                                     : 0U) : ((0x1000U 
                                               & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                               ? (0x8000U 
                                                  | (0x7f00U 
                                                     & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                        << 3U)))
                                               : (0x7f00U 
                                                  & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                     << 3U))))
                             : ((0x2000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                 ? ((0x1000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? 0U : (0x800000U 
                                             | (0x7f0000U 
                                                & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                                   << 0xbU))))
                                 : ((0x1000U & (IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac))
                                     ? (0x7f0000U & 
                                        ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac) 
                                         << 0xbU)) : 0U)))));
    __Vtableidx3 = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__fatbar 
        = Vwbvgaframe__ConstPool__TABLE_h6880c8c4_0
        [__Vtableidx3];
    __Vtableidx2 = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__midbar 
        = Vwbvgaframe__ConstPool__TABLE_h1d3187ea_0
        [__Vtableidx2];
    __Vtableidx1 = vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__topbar 
        = Vwbvgaframe__ConstPool__TABLE_h1e0974db_0
        [__Vtableidx1];
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac 
        = __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar 
        = __Vdly__wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__1(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__o_wb_cyc;
    __Vdly__o_wb_cyc = 0;
    CData/*0:0*/ __Vdly__o_wb_stb;
    __Vdly__o_wb_stb = 0;
    IData/*23:0*/ __Vdly__o_wb_addr;
    __Vdly__o_wb_addr = 0;
    SData/*12:0*/ __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count;
    __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count = 0;
    SData/*12:0*/ __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count;
    __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count = 0;
    SData/*11:0*/ __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos;
    __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos = 0;
    SData/*12:0*/ __Vdlyvdim0__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0;
    __Vdlyvdim0__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0;
    __Vdlyvval__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0;
    __Vdlyvset__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 0;
    // Body
    __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count 
        = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count;
    __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count 
        = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count;
    vlSelf->__Vdly__wbvgaframe__DOT__newframe__DOT__tfr_stb 
        = vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_stb;
    __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos 
        = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos;
    __Vdlyvset__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 0U;
    __Vdly__o_wb_addr = vlSelf->o_wb_addr;
    __Vdly__o_wb_stb = vlSelf->o_wb_stb;
    __Vdly__o_wb_cyc = vlSelf->o_wb_cyc;
    if ((1U & (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                >> 2U) | (~ (IData)(vlSelf->o_wb_cyc))))) {
        __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count = 0U;
        __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count = 0U;
    } else {
        if (vlSelf->i_wb_ack) {
            __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count)));
        }
        if (((IData)(vlSelf->o_wb_stb) & (~ (IData)(vlSelf->i_wb_stall)))) {
            __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count)));
        }
    }
    vlSelf->__Vdly__wbvgaframe__DOT__newframe__DOT__tfr_stb 
        = ((6U & ((IData)(vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_stb) 
                  << 1U)) | (IData)(vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_stb));
    if (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3) 
         & (~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full)))) {
        __Vdlyvval__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 
            = vlSelf->i_wb_data;
        __Vdlyvset__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0 
            = (0x1fffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin));
    }
    if ((IData)((((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                  >> 2U) | (IData)(vlSelf->i_wb_err)))) {
        __Vdly__o_wb_cyc = 0U;
        __Vdly__o_wb_stb = 0U;
        __Vdly__o_wb_addr = vlSelf->i_base_addr;
    } else if (vlSelf->o_wb_cyc) {
        if ((1U & (~ (IData)(vlSelf->i_wb_stall)))) {
            __Vdly__o_wb_stb = ((IData)(vlSelf->o_wb_stb) 
                                & (~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb)));
        }
        if (((IData)(vlSelf->o_wb_stb) & (~ (IData)(vlSelf->i_wb_stall)))) {
            __Vdly__o_wb_addr = (0xffffffU & ((IData)(1U) 
                                              + vlSelf->o_wb_addr));
        }
        if (((IData)(vlSelf->i_wb_ack) & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack))) {
            __Vdly__o_wb_cyc = 0U;
        }
    } else if (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo) {
        __Vdly__o_wb_cyc = 1U;
        __Vdly__o_wb_stb = 1U;
    }
    vlSelf->o_interrupt = (IData)((2U == (6U & (IData)(vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_stb))));
    if (__Vdlyvset__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0) {
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem[__Vdlyvdim0__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0] 
            = __Vdlyvval__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem__v0;
    }
    vlSelf->o_wb_addr = __Vdly__o_wb_addr;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb 
        = ((~ (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                >> 2U) | (~ (IData)(vlSelf->o_wb_cyc)))) 
           & (((IData)(vlSelf->o_wb_stb) & (~ (IData)(vlSelf->i_wb_stall)))
               ? ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count) 
                  >= ((IData)(vlSelf->i_line_words) 
                      - (IData)(2U))) : ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count) 
                                         >= (0x7fffU 
                                             & ((IData)(vlSelf->i_line_words) 
                                                - (IData)(1U))))));
    if ((4U & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe))) {
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo = 0U;
        __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos = 0U;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame 
            = (0U == (IData)(vlSelf->i_vm_height));
    } else {
        if (vlSelf->o_wb_cyc) {
            vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo = 0U;
        } else if ((1U & (~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame)))) {
            vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo 
                = ((0x3fffU & ((IData)(0x2000U) - (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill))) 
                   > ((IData)(1U) + (IData)(vlSelf->i_line_words)));
        }
        if ((((IData)(vlSelf->o_wb_cyc) & (IData)(vlSelf->i_wb_ack)) 
             & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack))) {
            if (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos) 
                 < (IData)(vlSelf->i_vm_height))) {
                __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos)));
            }
            vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame 
                = ((0U == (IData)(vlSelf->i_vm_height)) 
                   | ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos) 
                      >= (0xfffU & ((IData)(vlSelf->i_vm_height) 
                                    - (IData)(1U)))));
        }
    }
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count 
        = __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count;
    vlSelf->o_wb_stb = __Vdly__o_wb_stb;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos 
        = __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack 
        = ((~ (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                >> 2U) | (~ (IData)(vlSelf->o_wb_cyc)))) 
           & ((IData)(vlSelf->i_wb_ack) ? ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count) 
                                           >= ((IData)(vlSelf->i_line_words) 
                                               - (IData)(2U)))
               : ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count) 
                  >= (0x7fffU & ((IData)(vlSelf->i_line_words) 
                                 - (IData)(1U))))));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count 
        = __Vdly__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count;
    vlSelf->o_wb_cyc = __Vdly__o_wb_cyc;
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0 
        = ((IData)(vlSelf->i_wb_ack) & (IData)(vlSelf->o_wb_cyc));
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__2(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe 
        = ((IData)(vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3)
            ? 7U : ((IData)(vlSelf->wbvgaframe__DOT__vga_newframe)
                     ? 7U : (6U & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe) 
                                   << 1U))));
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__3(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe 
        = ((IData)(vlSelf->wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3)
            ? 7U : ((IData)(vlSelf->wbvgaframe__DOT__vga_newframe)
                     ? 7U : (6U & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                                   << 1U))));
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__4(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty 
        = (1U & ((~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n)) 
                 | ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext) 
                    == (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray))));
    if (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n) {
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin 
            = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray 
            = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray 
            = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray;
    } else {
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin = 0U;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray = 0U;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray = 0U;
    }
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__5(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->wbvgaframe__DOT__vga_newframe) {
        vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_stb = 1U;
    } else if (vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_ack) {
        vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_stb = 0U;
    }
    vlSelf->wbvgaframe__DOT__newframe__DOT__lcl_ack 
        = vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_ack;
    vlSelf->wbvgaframe__DOT__vga_newframe = ((~ (IData)(vlSelf->i_reset)) 
                                             & (((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos) 
                                                 == 
                                                 ((IData)(vlSelf->i_hm_width) 
                                                  - (IData)(2U))) 
                                                & ((IData)(vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos) 
                                                   == 
                                                   ((IData)(vlSelf->i_vm_height) 
                                                    - (IData)(1U)))));
    vlSelf->wbvgaframe__DOT__vgahw__DOT__vpos = vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__vpos;
    vlSelf->wbvgaframe__DOT__vgahw__DOT__hpos = vlSelf->__Vdly__wbvgaframe__DOT__vgahw__DOT__hpos;
    vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_ack 
        = (1U & ((IData)(vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_stb) 
                 >> 2U));
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__6(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0;
    wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT____Vlvbound_hfef9456e__0 = 0;
    // Body
    if (vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n) {
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full 
            = ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext) 
               == ((0x3000U & ((~ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray) 
                                   >> 0xcU)) << 0xcU)) 
                   | (0xfffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray))));
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill 
            = (0x3fffU & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin) 
                          - (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin)));
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray 
            = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray 
            = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin 
            = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray 
            = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray;
    } else {
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full = 0U;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill = 0U;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray = 0U;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray = 0U;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin = 0U;
        vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray = 0U;
    }
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
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_comb__TOP__0(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word 
        = vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem
        [(0x1fffU & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin))];
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__7(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__newframe__DOT__tfr_stb 
        = vlSelf->__Vdly__wbvgaframe__DOT__newframe__DOT__tfr_stb;
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__8(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray 
        = ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n)
            ? (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext)
            : 0U);
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_sequent__TOP__9(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n 
        = (1U & (~ ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe) 
                    >> 2U)));
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_comb__TOP__1(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n 
        = (1U & (~ (((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe) 
                     >> 2U) | (IData)(vlSelf->wbvgaframe__DOT__vga_newframe))));
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_comb__TOP__2(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3 
        = ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n) 
           & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0));
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_comb__TOP__3(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext 
        = (0x3fffU & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin) 
                      + ((~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty)) 
                         & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n) 
                            & (IData)(vlSelf->wbvgaframe__DOT__vga_rd)))));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext 
        = (0x3fffU & (VL_SHIFTR_III(14,14,32, (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext), 1U) 
                      ^ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext)));
}

VL_INLINE_OPT void Vwbvgaframe___024root___nba_comb__TOP__4(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext 
        = (0x3fffU & ((IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin) 
                      + ((~ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full)) 
                         & (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3))));
    vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext 
        = (0x3fffU & (VL_SHIFTR_III(14,14,32, (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext), 1U) 
                      ^ (IData)(vlSelf->wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext)));
}

void Vwbvgaframe___024root___eval_nba(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x22ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x29ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x16ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwbvgaframe___024root___nba_comb__TOP__4(vlSelf);
    }
}

void Vwbvgaframe___024root___eval_triggers__act(Vwbvgaframe___024root* vlSelf);

bool Vwbvgaframe___024root___eval_phase__act(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vwbvgaframe___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vwbvgaframe___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vwbvgaframe___024root___eval_phase__nba(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vwbvgaframe___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__ico(Vwbvgaframe___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__nba(Vwbvgaframe___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vwbvgaframe___024root___dump_triggers__act(Vwbvgaframe___024root* vlSelf);
#endif  // VL_DEBUG

void Vwbvgaframe___024root___eval(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval\n"); );
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
            Vwbvgaframe___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("wbvgaframe.v", 40, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vwbvgaframe___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vwbvgaframe___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("wbvgaframe.v", 40, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vwbvgaframe___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("wbvgaframe.v", 40, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vwbvgaframe___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vwbvgaframe___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vwbvgaframe___024root___eval_debug_assertions(Vwbvgaframe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwbvgaframe___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_pixclk & 0xfeU))) {
        Verilated::overWidthError("i_pixclk");}
    if (VL_UNLIKELY((vlSelf->i_reset & 0xfeU))) {
        Verilated::overWidthError("i_reset");}
    if (VL_UNLIKELY((vlSelf->i_en & 0xfeU))) {
        Verilated::overWidthError("i_en");}
    if (VL_UNLIKELY((vlSelf->i_test & 0xfeU))) {
        Verilated::overWidthError("i_test");}
    if (VL_UNLIKELY((vlSelf->i_base_addr & 0xff000000U))) {
        Verilated::overWidthError("i_base_addr");}
    if (VL_UNLIKELY((vlSelf->i_line_words & 0xc000U))) {
        Verilated::overWidthError("i_line_words");}
    if (VL_UNLIKELY((vlSelf->i_hm_width & 0xe000U))) {
        Verilated::overWidthError("i_hm_width");}
    if (VL_UNLIKELY((vlSelf->i_hm_porch & 0xe000U))) {
        Verilated::overWidthError("i_hm_porch");}
    if (VL_UNLIKELY((vlSelf->i_hm_synch & 0xe000U))) {
        Verilated::overWidthError("i_hm_synch");}
    if (VL_UNLIKELY((vlSelf->i_hm_raw & 0xe000U))) {
        Verilated::overWidthError("i_hm_raw");}
    if (VL_UNLIKELY((vlSelf->i_vm_height & 0xf000U))) {
        Verilated::overWidthError("i_vm_height");}
    if (VL_UNLIKELY((vlSelf->i_vm_porch & 0xf000U))) {
        Verilated::overWidthError("i_vm_porch");}
    if (VL_UNLIKELY((vlSelf->i_vm_synch & 0xf000U))) {
        Verilated::overWidthError("i_vm_synch");}
    if (VL_UNLIKELY((vlSelf->i_vm_raw & 0xf000U))) {
        Verilated::overWidthError("i_vm_raw");}
    if (VL_UNLIKELY((vlSelf->i_wb_ack & 0xfeU))) {
        Verilated::overWidthError("i_wb_ack");}
    if (VL_UNLIKELY((vlSelf->i_wb_err & 0xfeU))) {
        Verilated::overWidthError("i_wb_err");}
    if (VL_UNLIKELY((vlSelf->i_wb_stall & 0xfeU))) {
        Verilated::overWidthError("i_wb_stall");}
}
#endif  // VL_DEBUG
