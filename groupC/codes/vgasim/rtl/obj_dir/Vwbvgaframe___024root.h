// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vwbvgaframe.h for the primary calling header

#ifndef VERILATED_VWBVGAFRAME___024ROOT_H_
#define VERILATED_VWBVGAFRAME___024ROOT_H_  // guard

#include "verilated.h"


class Vwbvgaframe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vwbvgaframe___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_pixclk,0,0);
        CData/*0:0*/ wbvgaframe__DOT__vga_newframe;
        CData/*0:0*/ wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n;
        VL_IN8(i_reset,0,0);
        VL_IN8(i_en,0,0);
        VL_IN8(i_test,0,0);
        VL_OUT8(o_wb_cyc,0,0);
        VL_OUT8(o_wb_stb,0,0);
        VL_IN8(i_wb_ack,0,0);
        VL_IN8(i_wb_err,0,0);
        VL_IN8(i_wb_stall,0,0);
        VL_OUT8(o_vga_vsync,0,0);
        VL_OUT8(o_vga_hsync,0,0);
        VL_OUT8(o_vga_red,7,0);
        VL_OUT8(o_vga_grn,7,0);
        VL_OUT8(o_vga_blu,7,0);
        VL_OUT8(o_interrupt,0,0);
        CData/*0:0*/ wbvgaframe__DOT__vga_newline;
        CData/*0:0*/ wbvgaframe__DOT__vga_rd;
        CData/*0:0*/ wbvgaframe__DOT__vgahw__DOT__hrd;
        CData/*0:0*/ wbvgaframe__DOT__vgahw__DOT__vrd;
        CData/*0:0*/ wbvgaframe__DOT__vgahw__DOT__first_frame;
        CData/*0:0*/ wbvgaframe__DOT__vgahw__DOT__w_rd;
        CData/*3:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yline;
        CData/*3:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
        CData/*0:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__dline;
        CData/*0:0*/ wbvgaframe__DOT__newframe__DOT__lcl_stb;
        CData/*0:0*/ wbvgaframe__DOT__newframe__DOT__lcl_ack;
        CData/*2:0*/ wbvgaframe__DOT__newframe__DOT__tfr_stb;
        CData/*0:0*/ wbvgaframe__DOT__newframe__DOT__tfr_ack;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame;
        CData/*2:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe;
        CData/*2:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3;
        CData/*0:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0;
        CData/*2:0*/ __Vdly__wbvgaframe__DOT__newframe__DOT__tfr_stb;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_pixclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__wbvgaframe__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__wbvgaframe__DOT__vga_newframe__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(i_line_words,13,0);
        VL_IN16(i_hm_width,12,0);
        VL_IN16(i_hm_porch,12,0);
        VL_IN16(i_hm_synch,12,0);
        VL_IN16(i_hm_raw,12,0);
        VL_IN16(i_vm_height,11,0);
        VL_IN16(i_vm_porch,11,0);
        VL_IN16(i_vm_synch,11,0);
        VL_IN16(i_vm_raw,11,0);
        SData/*12:0*/ wbvgaframe__DOT__vgahw__DOT__hpos;
        SData/*11:0*/ wbvgaframe__DOT__vgahw__DOT__vpos;
    };
    struct {
        SData/*12:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hpos;
        SData/*12:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hedge;
        SData/*11:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__ypos;
        SData/*11:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__yedge;
        SData/*12:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__last_width;
        SData/*15:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__hfrac;
        SData/*15:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__h_step;
        SData/*11:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill;
        SData/*12:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count;
        SData/*12:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext;
        SData/*13:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext;
        SData/*12:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__hpos;
        SData/*11:0*/ __Vdly__wbvgaframe__DOT__vgahw__DOT__vpos;
        VL_IN(i_base_addr,23,0);
        VL_OUT(o_wb_addr,23,0);
        VL_IN(i_wb_data,31,0);
        IData/*31:0*/ wbvgaframe__DOT__VIDEO_MEM__DOT__fifo_word;
        IData/*23:0*/ wbvgaframe__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8;
        IData/*23:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__topbar;
        IData/*23:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__midbar;
        IData/*23:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__fatbar;
        IData/*23:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__gradient;
        IData/*23:0*/ wbvgaframe__DOT__vgahw__DOT__vgatsrc__DOT__pattern;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 8192> wbvgaframe__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vwbvgaframe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vwbvgaframe___024root(Vwbvgaframe__Syms* symsp, const char* v__name);
    ~Vwbvgaframe___024root();
    VL_UNCOPYABLE(Vwbvgaframe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
