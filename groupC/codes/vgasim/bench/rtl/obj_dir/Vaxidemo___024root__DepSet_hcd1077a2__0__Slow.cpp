// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxidemo.h for the primary calling header

#include "Vaxidemo__pch.h"
#include "Vaxidemo___024root.h"

VL_ATTR_COLD void Vaxidemo___024root___eval_static(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vaxidemo___024root___eval_initial__TOP(Vaxidemo___024root* vlSelf);

VL_ATTR_COLD void Vaxidemo___024root___eval_initial(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___eval_initial\n"); );
    // Body
    Vaxidemo___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
    vlSelf->__Vtrigprevexpr___TOP__axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN__0 
        = vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN;
    vlSelf->__Vtrigprevexpr___TOP__i_pixclk__0 = vlSelf->i_pixclk;
    vlSelf->__Vtrigprevexpr___TOP__axidemo__DOT__video__DOT__pix_reset_n__0 = 0U;
}

VL_ATTR_COLD void Vaxidemo___024root___eval_initial__TOP(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->axidemo__DOT__video__DOT__apply_wstrb__Vstatic__k = 4U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__Vstatic__k = 4U;
    VL_READMEM_N(true, 32, 16777216, 0, std::string{"clr4.hex"}
                 ,  &(vlSelf->axidemo__DOT__ram), 0
                 , ~0ULL);
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready = 1U;
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_wready = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__r_bvalid = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__r_bid = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_bid = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_bvalid = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready = 1U;
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_rlen = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_last = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_data = 0ULL;
    vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_data = 0ULL;
    vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data = 0ULL;
    vlSelf->axidemo__DOT__video__DOT__axil_bvalid = 0U;
    vlSelf->axidemo__DOT__video__DOT__axil_read_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__pix_reset_n = 0U;
    vlSelf->axidemo__DOT__video__DOT__pix_reset_pipe = 0U;
    vlSelf->S_AXI_BRESP = 0U;
    vlSelf->S_AXI_RRESP = 0U;
    vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_data = 0U;
    vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_data = 0ULL;
    vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_data = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_bvalid = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset = 1U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr 
        = (0x3fffffcU & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words = 0x500U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines = 0x400U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_zero_length = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available = 0x200U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_addr = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_none_outstanding = 1U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped = 1U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__lag_start = 1U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_data = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_data = 0ULL;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_data = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty = 1U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_hlast = 1U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_frame = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_frame = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast = 1U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_count = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_data = 0ULL;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid = 0U;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data = 0ULL;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__pix_reset = 1U;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__pix_reset_pipe = 1U;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__hpos = 0U;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__r_newline = 0U;
    vlSelf->o_vga_hsync = 1U;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__hrd = 1U;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__lost_sync = 1U;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__r_newframe = 0U;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__vpos = 0U;
    vlSelf->o_vga_vsync = 1U;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__vrd = 1U;
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__first_frame = 1U;
}

VL_ATTR_COLD void Vaxidemo___024root___eval_final(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxidemo___024root___dump_triggers__stl(Vaxidemo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaxidemo___024root___eval_phase__stl(Vaxidemo___024root* vlSelf);

VL_ATTR_COLD void Vaxidemo___024root___eval_settle(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___eval_settle\n"); );
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
            Vaxidemo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("axidemo.v", 47, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vaxidemo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxidemo___024root___dump_triggers__stl(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<IData/*25:0*/, 32> Vaxidemo__ConstPool__TABLE_hbec020df_0;

VL_ATTR_COLD void Vaxidemo___024root___stl_sequent__TOP__0(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__prior_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__prior_data = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__new_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__new_data = 0;
    CData/*3:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__wstrb;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__wstrb = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__prior_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__prior_data = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__new_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__new_data = 0;
    CData/*3:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__wstrb;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__wstrb = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__prior_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__prior_data = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__new_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__new_data = 0;
    CData/*3:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__wstrb;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__wstrb = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__prior_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__prior_data = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__new_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__new_data = 0;
    CData/*3:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__wstrb;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__wstrb = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__prior_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__prior_data = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__new_data;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__new_data = 0;
    CData/*3:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__wstrb;
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__wstrb = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__prior_data;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__prior_data = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__new_data;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__new_data = 0;
    CData/*3:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__wstrb;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__wstrb = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__prior_data;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__prior_data = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__new_data;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__new_data = 0;
    CData/*3:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__wstrb;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__wstrb = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__prior_data;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__prior_data = 0;
    IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__new_data;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__new_data = 0;
    CData/*3:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__wstrb;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__wstrb = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->axidemo__DOT__memcontrol__DOT__m_awready 
        = vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready;
    vlSelf->S_AXI_AWREADY = (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->S_AXI_WREADY = (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->S_AXI_BVALID = vlSelf->axidemo__DOT__video__DOT__axil_bvalid;
    vlSelf->S_AXI_ARREADY = (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->S_AXI_RVALID = vlSelf->axidemo__DOT__video__DOT__axil_read_valid;
    vlSelf->axidemo__DOT__mem_arready = vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready;
    vlSelf->axidemo__DOT__video__DOT__dma_awready = 
        (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__dma_wready = 
        (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__dma_arready = 
        (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->S_AXI_RDATA = vlSelf->axidemo__DOT__video__DOT__axil_read_data;
    vlSelf->axidemo__DOT__mem_arvalid = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__vlast 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast;
    vlSelf->axidemo__DOT__mem_rvalid = vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_ready 
        = (1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellinp__tskd__i_data 
        = (((QData)((IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data)) 
            << 2U) | (QData)((IData)(((2U & ((IData)(
                                                     (vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data 
                                                      >> 0x20U)) 
                                             << 1U)) 
                                      | (1U & (IData)(
                                                      (vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data 
                                                       >> 0x21U)))))));
    vlSelf->axidemo__DOT__video__DOT__cmap_read = (1U 
                                                   & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__pix_valid = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid;
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__next_wr_addr 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr)));
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__next_rd_addr 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr)));
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_valid 
        = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr 
        = ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full)) 
           & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem
        [(0x1ffU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr))];
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_read 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid)) 
                 | (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_empty)));
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_rd_empty 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_wgray) 
           == (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray));
    vlSelf->axidemo__DOT__video__DOT__awskd_addr = 
        (0x1ffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)
                    ? (IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_data)
                    : ((IData)(vlSelf->S_AXI_AWADDR) 
                       >> 2U)));
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__rskid__i_data 
        = (((QData)((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_id)) 
            << 0x22U) | (((QData)((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_lock)) 
                          << 0x21U) | (((QData)((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_last)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->axidemo__DOT__ram_rdata)))));
    vlSelf->axidemo__DOT__ram_rd = (1U & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid) 
                                          | (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready))));
    if (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
         & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full))) {
        vlSelf->axidemo__DOT__ram_rd = 0U;
    }
    if (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid) 
         & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid))) {
        vlSelf->axidemo__DOT__ram_rd = 0U;
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst = 1U;
    if ((0x100U > (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst = 0U;
    }
    if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start) 
         | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__lag_start))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst = 0U;
    }
    if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid) 
         & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active)) 
               | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset)))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst = 0U;
    }
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__awbuf__i_data 
        = (((QData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr)) 
            << 0xfU) | (QData)((IData)((0x2800U | ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen) 
                                                   << 1U)))));
    vlSelf->axidemo__DOT__video__DOT__arskd_addr = 
        (0x1ffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)
                    ? (IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_data)
                    : ((IData)(vlSelf->S_AXI_ARADDR) 
                       >> 2U)));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr 
        = (3U & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)
                  ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_data)
                  : ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_awaddr) 
                     >> 2U)));
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask 
        = (0x3ffffffU & (1U | ((0xfU & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wlen)) 
                               << (3U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wsize)))));
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask 
        = (0xfffU & vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask);
    if (vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready) {
        vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber1 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr;
        vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber3 = 1U;
        vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2 = 2U;
    } else {
        vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber1 
            = vlSelf->axidemo__DOT__memcontrol__DOT__raddr;
        vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber3 
            = vlSelf->axidemo__DOT__memcontrol__DOT__rburst;
        vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2 
            = vlSelf->axidemo__DOT__memcontrol__DOT__rsize;
    }
    __Vtableidx1 = (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wsize) 
                     << 2U) | (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wburst));
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__increment 
        = Vaxidemo__ConstPool__TABLE_hbec020df_0[__Vtableidx1];
    vlSelf->axidemo__DOT__video__DOT__afifo_full = 
        ((IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_rgray) 
         == ((0x30U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word 
        = ((0xffffU & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word) 
           | ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step) 
              << 0x10U));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word 
        = ((0xfffffff1U & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word) 
           | (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty) 
               << 3U) | (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_err) 
                          << 2U) | (2U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset)) 
                                          << 1U)))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word 
        = ((0xfffffffeU & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word) 
           | (1U & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active) 
                    | ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset)) 
                       | (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped))))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address = 0ULL;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address 
        = ((0xfffffffffc000000ULL & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address) 
           | (IData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr)));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address 
        = (0xfffffffffffffffcULL & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__w_rd 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__hrd) 
           & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__first_frame)) 
              & (IData)(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__vrd)));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellinp__axilwskid__i_data 
        = (((QData)((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wdata)) 
            << 4U) | (QData)((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wstrb)));
    vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN 
        = (1U & (~ (IData)(vlSelf->i_reset)));
    vlSelf->axidemo__DOT__video__DOT____Vcellinp__axilwskid__i_data 
        = (((QData)((IData)(vlSelf->S_AXI_WDATA)) << 4U) 
           | (QData)((IData)(vlSelf->S_AXI_WSTRB)));
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
        = ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid)
            ? vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_data
            : vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__awbuf__i_data);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__arskd_addr 
        = (3U & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)
                  ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_data)
                  : (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr)));
    vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr 
        = (0x3ffffffU & (vlSelf->axidemo__DOT__memcontrol__DOT__waddr 
                         + vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__increment));
    if ((0U != (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wburst))) {
        if ((2U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wsize))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr 
                = ((1U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wsize))
                    ? (0x3fffff8U & vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr)
                    : (0x3fffffcU & vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr));
        } else if ((1U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wsize))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr 
                = (0x3fffffeU & vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr);
        }
    }
    if ((2U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wburst))) {
        vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr 
            = ((vlSelf->axidemo__DOT__memcontrol__DOT__waddr 
                & (~ vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask)) 
               | (vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr 
                  & vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask));
    }
    vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr 
        = ((0xfffU & vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr) 
           | (0x3fff000U & vlSelf->axidemo__DOT__memcontrol__DOT__waddr));
    vlSelf->axidemo__DOT__video__DOT____Vcellinp__switch_clocks__i_wr 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_full)) 
                 & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty)) 
                 & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_full))));
    vlSelf->axidemo__DOT__video__DOT__pix_ready = (1U 
                                                   & ((IData)(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__lost_sync)
                                                       ? 
                                                      ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_frame)) 
                                                       | ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast)) 
                                                          | ((IData)(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__r_newframe) 
                                                             & (IData)(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__w_rd))))
                                                       : (IData)(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__w_rd)));
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__wrap_mask 
        = (0x3ffffffU & (1U | ((0xfU & ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)
                                         ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen)
                                         : (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rlen))) 
                               << (3U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2)))));
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__wrap_mask 
        = (0xfffU & vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__wrap_mask);
    __Vtableidx2 = (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2) 
                     << 2U) | (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber3));
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__increment 
        = Vaxidemo__ConstPool__TABLE_hbec020df_0[__Vtableidx2];
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)
            ? vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_data
            : vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellinp__axilwskid__i_data);
    vlSelf->axidemo__DOT__memcontrol__DOT__m_awvalid 
        = ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
           & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_valid 
        = ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
           & ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wvalid) 
              | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wskd_valid 
        = ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
           & ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wvalid) 
              | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__arskd_valid = 
        ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
         & ((IData)(vlSelf->S_AXI_ARVALID) | (IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__awskd_valid = 
        ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
         & ((IData)(vlSelf->S_AXI_AWVALID) | (IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__wskd_valid = 
        ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
         & ((IData)(vlSelf->S_AXI_WVALID) | (IData)(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)
            ? vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_data
            : vlSelf->axidemo__DOT__video__DOT____Vcellinp__axilwskid__i_data);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd 
        = ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty)) 
           & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo));
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_step 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid)) 
                 | (IData)(vlSelf->axidemo__DOT__video__DOT__pix_ready)));
    vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr 
        = (0x3ffffffU & (vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber1 
                         + vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__increment));
    if ((0U != (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber3))) {
        if ((2U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr 
                = ((1U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2))
                    ? (0x3fffff8U & vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr)
                    : (0x3fffffcU & vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr));
        } else if ((1U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr 
                = (0x3fffffeU & vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr);
        }
    }
    if ((2U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber3))) {
        vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr 
            = ((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber1 
                & (~ vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__wrap_mask)) 
               | (vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr 
                  & vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__wrap_mask));
    }
    vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr 
        = ((0xfffU & vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr) 
           | (0x3fff000U & vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber1));
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__wstrb 
        = (0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data));
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__new_data 
        = (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
                   >> 4U));
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__prior_data 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word;
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__wstrb))
                            ? (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__new_data 
                               >> 8U) : (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__prior_data 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__wstrb))
                           ? __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__new_data
                           : __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__prior_data))));
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__wstrb))
                 ? (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__new_data 
                    >> 0x18U) : (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__prior_data 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__wstrb))
                                ? (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__new_data 
                                   >> 0x10U) : (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__prior_data 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_control 
        = vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__Vfuncout;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__wstrb 
        = (0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data));
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__new_data 
        = (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
                   >> 4U));
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__prior_data 
        = (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines) 
            << 0x10U) | ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words) 
                         << 2U));
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__wstrb))
                            ? (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__new_data 
                               >> 8U) : (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__prior_data 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__wstrb))
                           ? __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__new_data
                           : __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__prior_data))));
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__wstrb))
                 ? (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__new_data 
                    >> 0x18U) : (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__prior_data 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__wstrb))
                                ? (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__new_data 
                                   >> 0x10U) : (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__prior_data 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config 
        = vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__Vfuncout;
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__wstrb 
        = (0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data));
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__new_data 
        = (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
                   >> 4U));
    __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__prior_data 
        = (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address);
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__wstrb))
                            ? (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__new_data 
                               >> 8U) : (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__prior_data 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__wstrb))
                           ? __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__new_data
                           : __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__prior_data))));
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__wstrb))
                 ? (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__new_data 
                    >> 0x18U) : (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__prior_data 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__wstrb))
                                ? (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__new_data 
                                   >> 0x10U) : (__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__prior_data 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_cmdaddrlo 
        = vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__Vfuncout;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_valid) 
           & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wskd_valid));
    vlSelf->axidemo__DOT__video__DOT__axil_read_ready 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_valid) 
           & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__axil_read_valid)) 
              | ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__read_staging)) 
                 | (IData)(vlSelf->S_AXI_RREADY))));
    vlSelf->axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_valid) 
           & (IData)(vlSelf->axidemo__DOT__video__DOT__wskd_valid));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__wstrb 
        = (0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__new_data 
        = (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                   >> 4U));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__prior_data 
        = vlSelf->axidemo__DOT__video__DOT__clk_speed;
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__wstrb))
                            ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__new_data 
                               >> 8U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__prior_data 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__wstrb))
                           ? __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__new_data
                           : __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__prior_data))));
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__wstrb))
                 ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__new_data 
                    >> 0x18U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__prior_data 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__wstrb))
                                ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__new_data 
                                   >> 0x10U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__prior_data 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->axidemo__DOT__video__DOT__new_clk_speed 
        = vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__Vfuncout;
    vlSelf->axidemo__DOT__video__DOT__image_size = 0U;
    vlSelf->axidemo__DOT__video__DOT__image_size = 
        ((0xfffff000U & vlSelf->axidemo__DOT__video__DOT__image_size) 
         | (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width));
    vlSelf->axidemo__DOT__video__DOT__image_size = 
        ((0xf000ffffU & vlSelf->axidemo__DOT__video__DOT__image_size) 
         | ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_height) 
            << 0x10U));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__wstrb 
        = (0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__new_data 
        = (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                   >> 4U));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__prior_data 
        = vlSelf->axidemo__DOT__video__DOT__image_size;
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__wstrb))
                            ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__new_data 
                               >> 8U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__prior_data 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__wstrb))
                           ? __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__new_data
                           : __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__prior_data))));
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__wstrb))
                 ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__new_data 
                    >> 0x18U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__prior_data 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__wstrb))
                                ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__new_data 
                                   >> 0x10U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__prior_data 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->axidemo__DOT__video__DOT__new_image_size 
        = vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__Vfuncout;
    vlSelf->axidemo__DOT__video__DOT__new_image_size 
        = (0xfffffffU & vlSelf->axidemo__DOT__video__DOT__new_image_size);
    vlSelf->axidemo__DOT__video__DOT__new_image_size 
        = (0xffff0fffU & vlSelf->axidemo__DOT__video__DOT__new_image_size);
    vlSelf->axidemo__DOT__video__DOT__image_porch = 0U;
    vlSelf->axidemo__DOT__video__DOT__image_porch = 
        ((0xfffff000U & vlSelf->axidemo__DOT__video__DOT__image_porch) 
         | (IData)(vlSelf->axidemo__DOT__video__DOT__hm_porch));
    vlSelf->axidemo__DOT__video__DOT__image_porch = 
        ((0xf000ffffU & vlSelf->axidemo__DOT__video__DOT__image_porch) 
         | ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_porch) 
            << 0x10U));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__wstrb 
        = (0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__new_data 
        = (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                   >> 4U));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__prior_data 
        = vlSelf->axidemo__DOT__video__DOT__image_porch;
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__wstrb))
                            ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__new_data 
                               >> 8U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__prior_data 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__wstrb))
                           ? __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__new_data
                           : __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__prior_data))));
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__wstrb))
                 ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__new_data 
                    >> 0x18U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__prior_data 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__wstrb))
                                ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__new_data 
                                   >> 0x10U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__prior_data 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->axidemo__DOT__video__DOT__new_image_porch 
        = vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__Vfuncout;
    vlSelf->axidemo__DOT__video__DOT__new_image_porch 
        = (0xfffffffU & vlSelf->axidemo__DOT__video__DOT__new_image_porch);
    vlSelf->axidemo__DOT__video__DOT__new_image_porch 
        = (0xffff0fffU & vlSelf->axidemo__DOT__video__DOT__new_image_porch);
    vlSelf->axidemo__DOT__video__DOT__image_synch = 0U;
    vlSelf->axidemo__DOT__video__DOT__image_synch = 
        ((0xfffff000U & vlSelf->axidemo__DOT__video__DOT__image_synch) 
         | (IData)(vlSelf->axidemo__DOT__video__DOT__hm_synch));
    vlSelf->axidemo__DOT__video__DOT__image_synch = 
        ((0xf000ffffU & vlSelf->axidemo__DOT__video__DOT__image_synch) 
         | ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_synch) 
            << 0x10U));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__wstrb 
        = (0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__new_data 
        = (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                   >> 4U));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__prior_data 
        = vlSelf->axidemo__DOT__video__DOT__image_synch;
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__wstrb))
                            ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__new_data 
                               >> 8U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__prior_data 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__wstrb))
                           ? __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__new_data
                           : __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__prior_data))));
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__wstrb))
                 ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__new_data 
                    >> 0x18U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__prior_data 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__wstrb))
                                ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__new_data 
                                   >> 0x10U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__prior_data 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->axidemo__DOT__video__DOT__new_image_synch 
        = vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__Vfuncout;
    vlSelf->axidemo__DOT__video__DOT__new_image_synch 
        = (0xffff0fffU & vlSelf->axidemo__DOT__video__DOT__new_image_synch);
    vlSelf->axidemo__DOT__video__DOT__new_image_synch 
        = (0xfffffffU & vlSelf->axidemo__DOT__video__DOT__new_image_synch);
    vlSelf->axidemo__DOT__video__DOT__image_raw = 0U;
    vlSelf->axidemo__DOT__video__DOT__image_raw = (
                                                   (0xfffff000U 
                                                    & vlSelf->axidemo__DOT__video__DOT__image_raw) 
                                                   | (IData)(vlSelf->axidemo__DOT__video__DOT__hm_raw));
    vlSelf->axidemo__DOT__video__DOT__image_raw = (
                                                   (0xf000ffffU 
                                                    & vlSelf->axidemo__DOT__video__DOT__image_raw) 
                                                   | ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_raw) 
                                                      << 0x10U));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__wstrb 
        = (0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__new_data 
        = (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                   >> 4U));
    __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__prior_data 
        = vlSelf->axidemo__DOT__video__DOT__image_raw;
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__wstrb))
                            ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__new_data 
                               >> 8U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__prior_data 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__wstrb))
                           ? __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__new_data
                           : __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__prior_data))));
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__wstrb))
                 ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__new_data 
                    >> 0x18U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__prior_data 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__wstrb))
                                ? (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__new_data 
                                   >> 0x10U) : (__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__prior_data 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->axidemo__DOT__video__DOT__new_image_raw 
        = vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__Vfuncout;
    vlSelf->axidemo__DOT__video__DOT__new_image_raw 
        = (0xffff0fffU & vlSelf->axidemo__DOT__video__DOT__new_image_raw);
    vlSelf->axidemo__DOT__video__DOT__new_image_raw 
        = (0xfffffffU & vlSelf->axidemo__DOT__video__DOT__new_image_raw);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_valid)) 
                 | (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_step)));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address;
    if ((2U == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr 
            = ((0xffffffff00000000ULL & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr) 
               | (IData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_cmdaddrlo)));
    }
    if ((3U == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr 
            = (0xffffffffULL & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr);
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr 
        = (0xfffffffffffffffcULL & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr 
        = (0x3ffffffULL & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr);
    vlSelf->axidemo__DOT__video__DOT__axil_write_ready 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0) 
           & (((~ (IData)(vlSelf->axidemo__DOT__video__DOT__axil_bvalid)) 
               | (IData)(vlSelf->S_AXI_BREADY)) & (0U 
                                                   == (IData)(vlSelf->axidemo__DOT__video__DOT__new_image_dimension))));
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid)) 
                 | ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step) 
                    & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word))));
}

VL_ATTR_COLD void Vaxidemo___024root___eval_stl(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vaxidemo___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vaxidemo___024root___eval_triggers__stl(Vaxidemo___024root* vlSelf);

VL_ATTR_COLD bool Vaxidemo___024root___eval_phase__stl(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaxidemo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vaxidemo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxidemo___024root___dump_triggers__ico(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vaxidemo___024root___dump_triggers__act(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge axidemo.__Vcellinp__memcontrol__S_AXI_ARESETN or posedge i_pixclk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge axidemo.__Vcellinp__memcontrol__S_AXI_ARESETN or posedge i_clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge axidemo.video.pix_reset_n or posedge i_pixclk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge i_pixclk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxidemo___024root___dump_triggers__nba(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge axidemo.__Vcellinp__memcontrol__S_AXI_ARESETN or posedge i_pixclk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge axidemo.__Vcellinp__memcontrol__S_AXI_ARESETN or posedge i_clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge axidemo.video.pix_reset_n or posedge i_pixclk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge i_pixclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxidemo___024root___ctor_var_reset(Vaxidemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_pixclk = VL_RAND_RESET_I(1);
    vlSelf->i_reset = VL_RAND_RESET_I(1);
    vlSelf->o_vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->o_vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->o_vga_red = VL_RAND_RESET_I(8);
    vlSelf->o_vga_grn = VL_RAND_RESET_I(8);
    vlSelf->o_vga_blu = VL_RAND_RESET_I(8);
    vlSelf->S_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_AWADDR = VL_RAND_RESET_I(11);
    vlSelf->S_AXI_AWPROT = VL_RAND_RESET_I(3);
    vlSelf->S_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->S_AXI_WSTRB = VL_RAND_RESET_I(4);
    vlSelf->S_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_BRESP = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_ARADDR = VL_RAND_RESET_I(11);
    vlSelf->S_AXI_ARPROT = VL_RAND_RESET_I(3);
    vlSelf->S_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_RREADY = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_RDATA = VL_RAND_RESET_I(32);
    vlSelf->S_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__mem_arready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__mem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__mem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__ram_we = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__ram_rd = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__ram_waddr = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__ram_wdata = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__ram_rdata = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__ram_wstrb = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        vlSelf->axidemo__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->axidemo__DOT__rk = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__r_bid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__r_bvalid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_bid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__waddr = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__memcontrol__DOT__wlen = VL_RAND_RESET_I(8);
    vlSelf->axidemo__DOT__memcontrol__DOT__wsize = VL_RAND_RESET_I(3);
    vlSelf->axidemo__DOT__memcontrol__DOT__wburst = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__memcontrol__DOT__m_awvalid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__m_awready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__memcontrol__DOT__rlen = VL_RAND_RESET_I(8);
    vlSelf->axidemo__DOT__memcontrol__DOT__rsize = VL_RAND_RESET_I(3);
    vlSelf->axidemo__DOT__memcontrol__DOT__rburst = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__memcontrol__DOT__rid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__rlock = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_rlen = VL_RAND_RESET_I(9);
    vlSelf->axidemo__DOT__memcontrol__DOT__raddr = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_last = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_lock = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_ready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_id = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__exclusive_write = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__block_write = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_exclusive_write = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data = VL_RAND_RESET_Q(41);
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__awbuf__i_data = VL_RAND_RESET_Q(41);
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber3 = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2 = VL_RAND_RESET_I(3);
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber1 = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data = VL_RAND_RESET_Q(35);
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__rskid__i_data = VL_RAND_RESET_Q(35);
    vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_data = VL_RAND_RESET_Q(41);
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__increment = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__wrap_mask = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__increment = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_data = VL_RAND_RESET_Q(35);
    vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__arskd_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__awskd_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__wskd_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__axil_write_ready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__awskd_addr = VL_RAND_RESET_I(9);
    vlSelf->axidemo__DOT__video__DOT__axil_bvalid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__axil_read_ready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__arskd_addr = VL_RAND_RESET_I(9);
    vlSelf->axidemo__DOT__video__DOT__axil_read_data = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__axil_read_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__afifo_empty = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__afifo_full = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__pix_reset_n = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__pix_reset_pipe = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__video__DOT__dma_wvalid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__dma_awaddr = VL_RAND_RESET_I(4);
    vlSelf->axidemo__DOT__video__DOT__dma_awready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__dma_wready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__dma_wdata = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__dma_wstrb = VL_RAND_RESET_I(4);
    vlSelf->axidemo__DOT__video__DOT__dma_arready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__new_image_dimension = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__video__DOT__cmap_mode = VL_RAND_RESET_I(3);
    vlSelf->axidemo__DOT__video__DOT__hm_width = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__hm_porch = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__hm_synch = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__hm_raw = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__vm_height = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__vm_porch = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__vm_synch = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__vm_raw = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__words_per_line = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__read_staging = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__clk_speed = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__staging_data = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__dma_return_data = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__cmap_return_data = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__cmap_rdata = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__cmap_waddr = VL_RAND_RESET_I(8);
    vlSelf->axidemo__DOT__video__DOT__new_image_size = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__new_image_porch = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__new_image_synch = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__new_image_raw = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__new_clk_speed = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__image_size = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__image_porch = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__image_synch = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__image_raw = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__staging_addr = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__video__DOT__cmap_read_flag = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__dma_read_flag = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__new_mode = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__cmap_read = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__pix_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__pix_ready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data = VL_RAND_RESET_Q(36);
    vlSelf->axidemo__DOT__video__DOT____Vcellinp__axilwskid__i_data = VL_RAND_RESET_Q(36);
    vlSelf->axidemo__DOT__video__DOT__apply_wstrb__Vstatic__k = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data = VL_RAND_RESET_Q(34);
    vlSelf->axidemo__DOT__video__DOT____Vcellinp__switch_clocks__i_wr = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0 = 0;
    vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_data = VL_RAND_RESET_I(9);
    vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_data = VL_RAND_RESET_Q(36);
    vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_data = VL_RAND_RESET_I(9);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_err = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_zero_length = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines = VL_RAND_RESET_I(16);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step = VL_RAND_RESET_I(16);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words = VL_RAND_RESET_I(14);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill = VL_RAND_RESET_I(10);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wskd_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_bvalid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__arskd_addr = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_data = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address = VL_RAND_RESET_Q(64);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr = VL_RAND_RESET_Q(64);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_cmdaddrlo = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__lag_start = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_none_outstanding = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr = VL_RAND_RESET_I(26);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__max_burst = VL_RAND_RESET_I(9);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding = VL_RAND_RESET_I(16);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__vlast = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_frame_lines = VL_RAND_RESET_I(16);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_step = VL_RAND_RESET_I(16);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_words = VL_RAND_RESET_I(14);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_nlines = VL_RAND_RESET_I(16);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words = VL_RAND_RESET_I(14);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr = VL_RAND_RESET_I(27);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_addr = VL_RAND_RESET_I(27);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_lines = VL_RAND_RESET_I(16);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats = VL_RAND_RESET_I(14);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available = VL_RAND_RESET_I(10);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data = VL_RAND_RESET_Q(36);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellinp__axilwskid__i_data = VL_RAND_RESET_Q(36);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_control = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__Vstatic__k = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 = VL_RAND_RESET_Q(34);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_data = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_data = VL_RAND_RESET_Q(36);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_data = VL_RAND_RESET_I(2);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr = VL_RAND_RESET_I(10);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr = VL_RAND_RESET_I(10);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_wgray = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_rgray = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__next_rd_addr = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__next_wr_addr = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray_cross = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray_cross = VL_RAND_RESET_I(6);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_read = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_rd_empty = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_frame = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_word_in_packet = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount = VL_RAND_RESET_I(5);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg = VL_RAND_RESET_I(32);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_hlast = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_frame = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__bw_pix = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_2 = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_4 = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_4 = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_8 = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8 = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_16 = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__direct_clr = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_step = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data = VL_RAND_RESET_I(24);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_count = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_frame = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data = VL_RAND_RESET_Q(34);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellinp__tskd__i_data = VL_RAND_RESET_Q(34);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_data = VL_RAND_RESET_Q(34);
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__pix_reset = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__pix_reset_pipe = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__r_newline = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__r_newframe = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__lost_sync = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__hpos = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__vpos = VL_RAND_RESET_I(12);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__hrd = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__vrd = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__first_frame = VL_RAND_RESET_I(1);
    vlSelf->axidemo__DOT__video__DOT__genvga__DOT__w_rd = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 = VL_RAND_RESET_Q(34);
    vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_pixclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__axidemo__DOT__video__DOT__pix_reset_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
