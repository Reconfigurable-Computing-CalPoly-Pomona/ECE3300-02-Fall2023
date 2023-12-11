// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdemo.h for the primary calling header

#ifndef VERILATED_VDEMO___024ROOT_H_
#define VERILATED_VDEMO___024ROOT_H_  // guard

#include "verilated.h"


class Vdemo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdemo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_pixclk,0,0);
        CData/*0:0*/ demo__DOT__vgai__DOT__vga_newframe;
        CData/*0:0*/ demo__DOT__vgai__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n;
        VL_IN8(i_reset,0,0);
        VL_IN8(i_test,0,0);
        VL_OUT8(o_vga_vsync,0,0);
        VL_OUT8(o_vga_hsync,0,0);
        VL_OUT8(o_vga_red,7,0);
        VL_OUT8(o_vga_grn,7,0);
        VL_OUT8(o_vga_blu,7,0);
        VL_OUT8(o_interrupt,0,0);
        CData/*0:0*/ demo__DOT__wb_cyc;
        CData/*0:0*/ demo__DOT__wb_stb;
        CData/*0:0*/ demo__DOT__mem_ack;
        CData/*0:0*/ demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_wstb;
        CData/*0:0*/ demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_stb;
        CData/*3:0*/ demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_sel;
        CData/*0:0*/ demo__DOT__vgai__DOT__vga_newline;
        CData/*0:0*/ demo__DOT__vgai__DOT__vga_rd;
        CData/*0:0*/ demo__DOT__vgai__DOT__vgahw__DOT__hrd;
        CData/*0:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vrd;
        CData/*0:0*/ demo__DOT__vgai__DOT__vgahw__DOT__first_frame;
        CData/*0:0*/ demo__DOT__vgai__DOT__vgahw__DOT__w_rd;
        CData/*3:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yline;
        CData/*3:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hbar;
        CData/*0:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__dline;
        CData/*0:0*/ demo__DOT__vgai__DOT__newframe__DOT__lcl_stb;
        CData/*0:0*/ demo__DOT__vgai__DOT__newframe__DOT__lcl_ack;
        CData/*2:0*/ demo__DOT__vgai__DOT__newframe__DOT__tfr_stb;
        CData/*0:0*/ demo__DOT__vgai__DOT__newframe__DOT__tfr_ack;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__last_ack;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__last_stb;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__room_for_another_line_in_fifo;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__end_of_frame;
        CData/*2:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_pipe;
        CData/*2:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_pipe;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_empty;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_full;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____Vcellinp__fifo____pinNumber3;
        CData/*0:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT____VdfgTmp_heaa5d2f5__0;
        CData/*2:0*/ __Vdly__demo__DOT__vgai__DOT__newframe__DOT__tfr_stb;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_pixclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__demo__DOT__vgai__DOT____Vcellinp__VIDEO_MEM__DOT__readmem____pinNumber3__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__demo__DOT__vgai__DOT__vga_newframe__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__wb_reset_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__pix_reset_n__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(i_hm_width,12,0);
        VL_IN16(i_hm_porch,12,0);
        VL_IN16(i_hm_synch,12,0);
        VL_IN16(i_hm_raw,12,0);
        VL_IN16(i_vm_height,10,0);
        VL_IN16(i_vm_porch,10,0);
        VL_IN16(i_vm_synch,10,0);
        VL_IN16(i_vm_raw,10,0);
        SData/*12:0*/ demo__DOT__vgai__DOT__vgahw__DOT__hpos;
        SData/*10:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vpos;
        SData/*12:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hpos;
    };
    struct {
        SData/*12:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hedge;
        SData/*10:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__ypos;
        SData/*10:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__yedge;
        SData/*12:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__last_width;
        SData/*15:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__hfrac;
        SData/*15:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__h_step;
        SData/*10:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__vpos;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo_fill;
        SData/*12:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__stb_count;
        SData/*12:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__ack_count;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgray;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbin;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rgray;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq1_rgray;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgray;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbin;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq2_wgray;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rq1_wgray;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wgraynext;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wbinnext;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__wq2_rbin;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rgraynext;
        SData/*13:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__rbinnext;
        SData/*12:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__hpos;
        SData/*10:0*/ __Vdly__demo__DOT__vgai__DOT__vgahw__DOT__vpos;
        IData/*23:0*/ demo__DOT__wb_addr;
        IData/*31:0*/ demo__DOT__mem_data;
        IData/*23:0*/ demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_addr;
        IData/*31:0*/ demo__DOT__memi__DOT__NO_IDEA_WHAT_THIS_DOES__DOT__last_data;
        IData/*31:0*/ demo__DOT__vgai__DOT__VIDEO_MEM__DOT__fifo_word;
        IData/*23:0*/ demo__DOT__vgai__DOT__vgahw__DOT____Vcellout__vgatsrc____pinNumber8;
        IData/*23:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__topbar;
        IData/*23:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__midbar;
        IData/*23:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__fatbar;
        IData/*23:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__gradient;
        IData/*23:0*/ demo__DOT__vgai__DOT__vgahw__DOT__vgatsrc__DOT__pattern;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 16777216> demo__DOT__memi__DOT__mem;
        VlUnpacked<IData/*31:0*/, 8192> demo__DOT__vgai__DOT__VIDEO_MEM__DOT__readmem__DOT__fifo__DOT__mem;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdemo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdemo___024root(Vdemo__Syms* symsp, const char* v__name);
    ~Vdemo___024root();
    VL_UNCOPYABLE(Vdemo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
