// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxihdmi.h for the primary calling header

#include "Vaxihdmi__pch.h"
#include "Vaxihdmi___024root.h"

VL_INLINE_OPT void Vaxihdmi___024root___ico_sequent__TOP__0(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___ico_sequent__TOP__0\n"); );
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
    // Body
    vlSelf->axidemo__DOT__video__DOT__awskd_addr = 
        (0x1ffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)
                    ? (IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_data)
                    : ((IData)(vlSelf->S_AXI_AWADDR) 
                       >> 2U)));
    vlSelf->axidemo__DOT__video__DOT__arskd_addr = 
        (0x1ffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)
                    ? (IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_data)
                    : ((IData)(vlSelf->S_AXI_ARADDR) 
                       >> 2U)));
    vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN 
        = (1U & (~ (IData)(vlSelf->i_reset)));
    vlSelf->axidemo__DOT__video__DOT____Vcellinp__axilwskid__i_data 
        = (((QData)((IData)(vlSelf->S_AXI_WDATA)) << 4U) 
           | (QData)((IData)(vlSelf->S_AXI_WSTRB)));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__arskd_addr 
        = (3U & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)
                  ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_data)
                  : (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr)));
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
    vlSelf->axidemo__DOT__video__DOT__axil_write_ready 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0) 
           & (((~ (IData)(vlSelf->axidemo__DOT__video__DOT__axil_bvalid)) 
               | (IData)(vlSelf->S_AXI_BREADY)) & (0U 
                                                   == (IData)(vlSelf->axidemo__DOT__video__DOT__new_image_dimension))));
}

void Vaxihdmi___024root___eval_ico(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vaxihdmi___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vaxihdmi___024root___eval_triggers__ico(Vaxihdmi___024root* vlSelf);

bool Vaxihdmi___024root___eval_phase__ico(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vaxihdmi___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vaxihdmi___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vaxihdmi___024root___eval_act(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___eval_act\n"); );
}

extern const VlUnpacked<SData/*9:0*/, 4> Vaxihdmi__ConstPool__TABLE_h11dbe033_0;
extern const VlUnpacked<SData/*9:0*/, 16> Vaxihdmi__ConstPool__TABLE_h73c1ff59_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vaxihdmi__ConstPool__TABLE_hf62722bc_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vaxihdmi__ConstPool__TABLE_ha396ef74_0;

VL_INLINE_OPT void Vaxihdmi___024root___nba_sequent__TOP__0(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*1:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*1:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*1:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    IData/*31:0*/ __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__sreg;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__sreg = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_valid;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_valid = 0;
    CData/*4:0*/ __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__scount;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__scount = 0;
    SData/*11:0*/ __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_remaining;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_remaining = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid = 0;
    SData/*11:0*/ __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hpos;
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hpos = 0;
    SData/*11:0*/ __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__vpos;
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__vpos = 0;
    CData/*4:0*/ __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count;
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count = 0;
    CData/*4:0*/ __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count;
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count = 0;
    CData/*4:0*/ __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count;
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count = 0;
    // Body
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count;
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count;
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count;
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__vpos 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos;
    __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hpos 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid 
        = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_remaining 
        = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining;
    vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0 = 0U;
    vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1 = 0U;
    vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2 = 0U;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__scount 
        = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__sreg 
        = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg;
    __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_valid 
        = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid;
    if (((IData)(vlSelf->axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0) 
         & ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
            >> 8U))) {
        if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__dma_wstrb))) {
            vlSelf->__Vdlyvval__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0 
                = (0xffU & vlSelf->axidemo__DOT__video__DOT__dma_wdata);
            vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0 = 1U;
            vlSelf->__Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0 = 0U;
            vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0 
                = vlSelf->axidemo__DOT__video__DOT__cmap_waddr;
        }
        if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__dma_wstrb))) {
            vlSelf->__Vdlyvval__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1 
                = (0xffU & (vlSelf->axidemo__DOT__video__DOT__dma_wdata 
                            >> 8U));
            vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1 = 1U;
            vlSelf->__Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1 = 8U;
            vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1 
                = vlSelf->axidemo__DOT__video__DOT__cmap_waddr;
        }
        if ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__dma_wstrb))) {
            vlSelf->__Vdlyvval__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2 
                = (0xffU & (vlSelf->axidemo__DOT__video__DOT__dma_wdata 
                            >> 0x10U));
            vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2 = 1U;
            vlSelf->__Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2 
                = vlSelf->axidemo__DOT__video__DOT__cmap_waddr;
        }
    }
    if (vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_read) {
        vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data 
            = vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem
            [(0x1fU & (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr))];
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vrd 
        = (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos) 
            < (IData)(vlSelf->axidemo__DOT__video__DOT__vm_height)) 
           & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset)));
    if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__s_dtype))) {
        if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__s_dtype))) {
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word 
                = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__pix_word;
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word 
                = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__pix_word;
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word 
                = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__pix_word;
        } else {
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word 
                = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__aux_word;
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word 
                = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__aux_word;
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word 
                = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__aux_word;
        }
    } else if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__s_dtype))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word 
            = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ctrl_word;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word 
            = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ctrl_word;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word 
            = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ctrl_word;
    } else {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word = 0x2ccU;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word = 0x133U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word = 0x2ccU;
    }
    if (vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__w_rd) {
        if (vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__lost_sync) {
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel = 0U;
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel = 0U;
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel = 0U;
        } else {
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel 
                = (0xffU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data);
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel 
                = (0xffU & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data 
                            >> 8U));
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel 
                = (0xffU & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data 
                            >> 0x10U));
        }
    } else {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel = 0U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel = 0U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel = 0U;
    }
    vlSelf->o_hdmi_red = ((0x200U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                     << 9U)) | ((0x100U 
                                                 & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                                    << 7U)) 
                                                | ((0x80U 
                                                    & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                                       << 5U)) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                                          << 3U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                                             << 1U)) 
                                                         | ((0x10U 
                                                             & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                                                >> 1U)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                                                   >> 3U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                                                      >> 5U)) 
                                                                  | ((2U 
                                                                      & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                                                         >> 7U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word) 
                                                                           >> 9U)))))))))));
    __Vtableidx8 = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_ctl;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ctrl_word 
        = Vaxihdmi__ConstPool__TABLE_h11dbe033_0[__Vtableidx8];
    __Vtableidx9 = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_aux;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__aux_word 
        = Vaxihdmi__ConstPool__TABLE_h73c1ff59_0[__Vtableidx9];
    if (((0U == VL_EXTENDS_II(32,5, (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count))) 
         | ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter) 
            == (0xfU & ((IData)(8U) - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)))))) {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count 
            = (0x1fU & ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))
                         ? ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count) 
                            + ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter) 
                               - (0xfU & ((IData)(8U) 
                                          - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)))))
                         : ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count) 
                            + ((0xfU & ((IData)(8U) 
                                        - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter))) 
                               - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__pix_word 
            = ((0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__pix_word)) 
               | ((0x200U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m) 
                                 >> 8U)) << 9U)) | 
                  (0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__pix_word 
            = ((0x300U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__pix_word)) 
               | (0xffU & ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))
                            ? (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m)
                            : (~ (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m)))));
    } else if (((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count))) 
                 & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter) 
                    > (0xfU & ((IData)(8U) - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter))))) 
                | (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count))) 
                   & ((0xfU & ((IData)(8U) - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter))) 
                      > (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter))))) {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count 
            = (0x1fU & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count) 
                         + ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))
                             ? 2U : 0U)) + ((0xfU & 
                                             ((IData)(8U) 
                                              - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter))) 
                                            - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__pix_word 
            = (0x200U | ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m)))));
    } else {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count 
            = (0x1fU & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count) 
                         - ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))
                             ? 0U : 2U)) + ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter) 
                                            - (0xfU 
                                               & ((IData)(8U) 
                                                  - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter))))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__pix_word 
            = (0x1ffU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m));
    }
    vlSelf->o_hdmi_grn = ((0x200U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                     << 9U)) | ((0x100U 
                                                 & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                                    << 7U)) 
                                                | ((0x80U 
                                                    & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                                       << 5U)) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                                          << 3U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                                             << 1U)) 
                                                         | ((0x10U 
                                                             & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                                                >> 1U)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                                                   >> 3U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                                                      >> 5U)) 
                                                                  | ((2U 
                                                                      & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                                                         >> 7U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word) 
                                                                           >> 9U)))))))))));
    __Vtableidx6 = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__r_ctl;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ctrl_word 
        = Vaxihdmi__ConstPool__TABLE_h11dbe033_0[__Vtableidx6];
    __Vtableidx7 = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_aux;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__aux_word 
        = Vaxihdmi__ConstPool__TABLE_h73c1ff59_0[__Vtableidx7];
    if (((0U == VL_EXTENDS_II(32,5, (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count))) 
         | ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter) 
            == (0xfU & ((IData)(8U) - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)))))) {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count 
            = (0x1fU & ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))
                         ? ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count) 
                            + ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter) 
                               - (0xfU & ((IData)(8U) 
                                          - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)))))
                         : ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count) 
                            + ((0xfU & ((IData)(8U) 
                                        - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter))) 
                               - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__pix_word 
            = ((0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__pix_word)) 
               | ((0x200U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m) 
                                 >> 8U)) << 9U)) | 
                  (0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__pix_word 
            = ((0x300U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__pix_word)) 
               | (0xffU & ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))
                            ? (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m)
                            : (~ (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m)))));
    } else if (((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count))) 
                 & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter) 
                    > (0xfU & ((IData)(8U) - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter))))) 
                | (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count))) 
                   & ((0xfU & ((IData)(8U) - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter))) 
                      > (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter))))) {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count 
            = (0x1fU & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count) 
                         + ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))
                             ? 2U : 0U)) + ((0xfU & 
                                             ((IData)(8U) 
                                              - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter))) 
                                            - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__pix_word 
            = (0x200U | ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m)))));
    } else {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count 
            = (0x1fU & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count) 
                         - ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))
                             ? 0U : 2U)) + ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter) 
                                            - (0xfU 
                                               & ((IData)(8U) 
                                                  - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter))))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__pix_word 
            = (0x1ffU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m));
    }
    vlSelf->o_hdmi_blu = ((0x200U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                     << 9U)) | ((0x100U 
                                                 & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                                    << 7U)) 
                                                | ((0x80U 
                                                    & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                                       << 5U)) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                                          << 3U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                                             << 1U)) 
                                                         | ((0x10U 
                                                             & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                                                >> 1U)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                                                   >> 3U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                                                      >> 5U)) 
                                                                  | ((2U 
                                                                      & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                                                         >> 7U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word) 
                                                                           >> 9U)))))))))));
    __Vtableidx5 = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__r_aux;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__aux_word 
        = Vaxihdmi__ConstPool__TABLE_h73c1ff59_0[__Vtableidx5];
    __Vtableidx4 = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__r_ctl;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ctrl_word 
        = Vaxihdmi__ConstPool__TABLE_h11dbe033_0[__Vtableidx4];
    if (((0U == VL_EXTENDS_II(32,5, (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count))) 
         | ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter) 
            == (0xfU & ((IData)(8U) - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)))))) {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count 
            = (0x1fU & ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))
                         ? ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count) 
                            + ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter) 
                               - (0xfU & ((IData)(8U) 
                                          - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)))))
                         : ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count) 
                            + ((0xfU & ((IData)(8U) 
                                        - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter))) 
                               - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__pix_word 
            = ((0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__pix_word)) 
               | ((0x200U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m) 
                                 >> 8U)) << 9U)) | 
                  (0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__pix_word 
            = ((0x300U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__pix_word)) 
               | (0xffU & ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))
                            ? (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m)
                            : (~ (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m)))));
    } else if (((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count))) 
                 & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter) 
                    > (0xfU & ((IData)(8U) - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter))))) 
                | (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count))) 
                   & ((0xfU & ((IData)(8U) - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter))) 
                      > (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter))))) {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count 
            = (0x1fU & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count) 
                         + ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))
                             ? 2U : 0U)) + ((0xfU & 
                                             ((IData)(8U) 
                                              - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter))) 
                                            - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__pix_word 
            = (0x200U | ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m)))));
    } else {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count 
            = (0x1fU & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count) 
                         - ((0x100U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))
                             ? 0U : 2U)) + ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter) 
                                            - (0xfU 
                                               & ((IData)(8U) 
                                                  - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter))))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__pix_word 
            = (0x1ffU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m));
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__s_dtype 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_dtype;
    if (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_step) {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data 
            = ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                ? ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                    ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                        ? vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__direct_clr
                        : vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_16)
                    : ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                        ? vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8
                        : vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_8))
                : ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                    ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                        ? vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_4
                        : vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_4)
                    : ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                        ? vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_2
                        : vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__bw_pix)));
    }
    __Vtableidx3 = (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__r_newline) 
                     << 6U) | (((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid) 
                                << 5U) | (((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_frame) 
                                           << 4U) | 
                                          (((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast) 
                                            << 3U) 
                                           | (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__r_newframe) 
                                               << 2U) 
                                              | (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__w_rd) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset)))))));
    if (Vaxihdmi__ConstPool__TABLE_hf62722bc_0[__Vtableidx3]) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__lost_sync 
            = Vaxihdmi__ConstPool__TABLE_ha396ef74_0
            [__Vtableidx3];
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count 
        = __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter = 0U;
    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)));
    }
    if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)));
    }
    if ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)));
    }
    if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)));
    }
    if ((0x10U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)));
    }
    if ((0x20U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)));
    }
    if ((0x40U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)));
    }
    if ((0x80U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)));
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count 
        = __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter = 0U;
    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)));
    }
    if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)));
    }
    if ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)));
    }
    if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)));
    }
    if ((0x10U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)));
    }
    if ((0x20U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)));
    }
    if ((0x40U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)));
    }
    if ((0x80U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)));
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count 
        = __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter = 0U;
    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)));
    }
    if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)));
    }
    if ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)));
    }
    if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)));
    }
    if ((0x10U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)));
    }
    if ((0x20U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)));
    }
    if ((0x40U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)));
    }
    if ((0x80U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)));
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_ctl = 0U;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__r_ctl = 1U;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_aux = 0U;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__r_aux 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT____Vcellinp__hdmi_encoder_ch0____pinNumber3;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__r_ctl 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT____Vcellinp__hdmi_encoder_ch0____pinNumber3;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp;
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_dtype 
        = vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_type;
    if (vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset) {
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__vpos = 0U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vsync = 0U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__first_frame = 1U;
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hpos = 0U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__r_newline = 0U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hsync = 0U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hrd = 1U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_type = 0U;
    } else {
        if (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
             == (0xfffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_porch) 
                           - (IData)(1U))))) {
            __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__vpos 
                = (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos) 
                    < (0xfffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_raw) 
                                 - (IData)(1U)))) ? 
                   (0xfffU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos)))
                    : 0U);
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vsync 
                = (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos) 
                    >= (0xfffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_porch) 
                                  - (IData)(1U)))) 
                   & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos) 
                      < (0xfffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_synch) 
                                   - (IData)(1U)))));
        }
        if (vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__r_newframe) {
            vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__first_frame = 0U;
        }
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hrd 
            = (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
                < ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_width) 
                   - (IData)(2U))) | ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
                                      >= ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_raw) 
                                          - (IData)(2U))));
        __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hpos 
            = (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
                < (0xfffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_raw) 
                             - (IData)(1U)))) ? (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos)))
                : 0U);
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__r_newline 
            = ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
               == ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_width) 
                   - (IData)(3U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hsync 
            = (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
                >= (0xfffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_porch) 
                              - (IData)(1U)))) & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
                                                  < 
                                                  (0xfffU 
                                                   & ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_synch) 
                                                      - (IData)(1U)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_type 
            = ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pre_line)
                ? (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
                    >= ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_raw) 
                        - (IData)(1U))) ? 3U : (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
                                                 < 
                                                 ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_width) 
                                                  - (IData)(1U)))
                                                 ? 3U
                                                 : 
                                                (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
                                                  >= 
                                                  (((IData)(vlSelf->axidemo__DOT__video__DOT__hm_raw) 
                                                    - (IData)(1U)) 
                                                   - (IData)(2U)))
                                                  ? 0U
                                                  : 1U)))
                : 1U);
    }
    if (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step) {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__direct_clr 
            = (0xffffffU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg);
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_16 
            = ((0xffU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_16) 
               | (((0xf80000U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                 << 8U)) | (0x70000U 
                                            & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                               << 3U))) 
                  | ((0xfc00U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                 << 5U)) | (0x300U 
                                            & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                               >> 1U)))));
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_16 
            = ((0xffff00U & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_16) 
               | ((0xf8U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                            << 3U)) | (7U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                             >> 2U))));
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8 
            = ((0xffffU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8) 
               | ((0xfc0000U & ((0xe00000U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                              << 0x10U)) 
                                | (0x1c0000U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                                << 0xdU)))) 
                  | (0x30000U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                 << 0xaU))));
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8 
            = ((0xff00ffU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8) 
               | ((0xfc00U & ((0xe000U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                          << 0xbU)) 
                              | (0x1c00U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                            << 8U)))) 
                  | (0x300U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                               << 5U))));
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8 
            = ((0xffff00U & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8) 
               | (0xffU & ((0xc0U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                     << 6U)) | ((0x30U 
                                                 & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                                    << 4U)) 
                                                | ((0xcU 
                                                    & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg))))));
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_4 
            = (0xffffffU & ((0xf00000U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                          << 0x14U)) 
                            | ((0xf0000U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                            << 0x10U)) 
                               | ((0xf000U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                              << 0xcU)) 
                                  | ((0xf00U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                                << 8U)) 
                                     | ((0xf0U & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
                                                  << 4U)) 
                                        | (0xfU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg)))))));
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_2 
            = ((2U & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg)
                ? ((1U & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg)
                    ? 0xffffffU : 0xaaaaaaU) : ((1U 
                                                 & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg)
                                                 ? 0x555555U
                                                 : 0U));
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__bw_pix 
            = ((1U & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg)
                ? 0xffffffU : 0U);
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_8 
            = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap
            [(0xffU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg)];
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_4 
            = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap
            [(0xfU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg)];
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__r_newframe 
        = ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset)) 
           & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos) 
               == ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_width) 
                   - (IData)(3U))) & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos) 
                                      == ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_height) 
                                          - (IData)(1U)))));
    if (((4U < (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones)) 
         | ((4U == (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones)) 
            & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel) 
               >> 7U)))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1feU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1fdU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (2U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                            ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel) 
                               >> 1U))) << 1U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1fbU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (4U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                             >> 1U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel) 
                                       >> 2U))) << 2U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1f7U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (8U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                             >> 2U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel) 
                                       >> 3U))) << 3U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1efU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (0x10U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                >> 3U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel) 
                                          >> 4U))) 
                           << 4U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1dfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (0x20U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                >> 4U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel) 
                                          >> 5U))) 
                           << 5U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1bfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (0x40U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                >> 5U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel) 
                                          >> 6U))) 
                           << 6U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x17fU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (0x80U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                >> 6U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel) 
                                          >> 7U))) 
                           << 7U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = (0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp));
    } else {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1feU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1fdU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (2U & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                         << 1U) ^ (0xfffffffeU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1fbU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (4U & ((0xfffffffcU & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                        << 1U)) ^ (0xfffffffcU 
                                                   & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1f7U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (8U & ((0xfffffff8U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                        << 1U)) ^ (0xfffffff8U 
                                                   & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1efU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (0x10U & ((0xfffffff0U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xfffffff0U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1dfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (0x20U & ((0xffffffe0U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xffffffe0U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x1bfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (0x40U & ((0xffffffc0U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xffffffc0U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = ((0x17fU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp)) 
               | (0x80U & ((0xffffff80U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xffffff80U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp 
            = (0x100U | (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp));
    }
    if (((4U < (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones)) 
         | ((4U == (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones)) 
            & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel) 
               >> 7U)))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1feU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1fdU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (2U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                            ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel) 
                               >> 1U))) << 1U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1fbU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (4U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                             >> 1U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel) 
                                       >> 2U))) << 2U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1f7U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (8U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                             >> 2U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel) 
                                       >> 3U))) << 3U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1efU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (0x10U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                >> 3U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel) 
                                          >> 4U))) 
                           << 4U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1dfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (0x20U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                >> 4U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel) 
                                          >> 5U))) 
                           << 5U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1bfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (0x40U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                >> 5U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel) 
                                          >> 6U))) 
                           << 6U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x17fU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (0x80U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                >> 6U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel) 
                                          >> 7U))) 
                           << 7U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = (0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp));
    } else {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1feU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1fdU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (2U & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                         << 1U) ^ (0xfffffffeU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1fbU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (4U & ((0xfffffffcU & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                        << 1U)) ^ (0xfffffffcU 
                                                   & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1f7U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (8U & ((0xfffffff8U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                        << 1U)) ^ (0xfffffff8U 
                                                   & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1efU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (0x10U & ((0xfffffff0U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xfffffff0U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1dfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (0x20U & ((0xffffffe0U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xffffffe0U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x1bfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (0x40U & ((0xffffffc0U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xffffffc0U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = ((0x17fU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp)) 
               | (0x80U & ((0xffffff80U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xffffff80U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp 
            = (0x100U | (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp));
    }
    if (((4U < (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones)) 
         | ((4U == (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones)) 
            & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel) 
               >> 7U)))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1feU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1fdU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (2U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                            ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel) 
                               >> 1U))) << 1U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1fbU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (4U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                             >> 1U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel) 
                                       >> 2U))) << 2U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1f7U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (8U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                             >> 2U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel) 
                                       >> 3U))) << 3U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1efU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (0x10U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                >> 3U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel) 
                                          >> 4U))) 
                           << 4U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1dfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (0x20U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                >> 4U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel) 
                                          >> 5U))) 
                           << 5U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1bfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (0x40U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                >> 5U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel) 
                                          >> 6U))) 
                           << 6U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x17fU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (0x80U & ((~ (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                >> 6U) ^ ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel) 
                                          >> 7U))) 
                           << 7U)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = (0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp));
    } else {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1feU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel)));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1fdU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (2U & (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                         << 1U) ^ (0xfffffffeU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1fbU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (4U & ((0xfffffffcU & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                        << 1U)) ^ (0xfffffffcU 
                                                   & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1f7U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (8U & ((0xfffffff8U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                        << 1U)) ^ (0xfffffff8U 
                                                   & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1efU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (0x10U & ((0xfffffff0U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xfffffff0U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1dfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (0x20U & ((0xffffffe0U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xffffffe0U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x1bfU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (0x40U & ((0xffffffc0U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xffffffc0U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = ((0x17fU & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp)) 
               | (0x80U & ((0xffffff80U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp) 
                                           << 1U)) 
                           ^ (0xffffff80U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel)))));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp 
            = (0x100U | (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp));
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter = 0U;
    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter)));
    }
    if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter)));
    }
    if ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter)));
    }
    if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter)));
    }
    if ((0x10U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter)));
    }
    if ((0x20U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter)));
    }
    if ((0x40U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter)));
    }
    if ((0x80U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter)));
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter = 0U;
    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter)));
    }
    if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter)));
    }
    if ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter)));
    }
    if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter)));
    }
    if ((0x10U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter)));
    }
    if ((0x20U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter)));
    }
    if ((0x40U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter)));
    }
    if ((0x80U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter)));
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter = 0U;
    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter)));
    }
    if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter)));
    }
    if ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter)));
    }
    if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter)));
    }
    if ((0x10U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter)));
    }
    if ((0x20U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter)));
    }
    if ((0x40U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter)));
    }
    if ((0x80U & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m))) {
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter)));
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT____Vcellinp__hdmi_encoder_ch0____pinNumber3 
        = (((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vsync) 
            << 1U) | (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hsync));
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__w_rd 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hrd) 
           & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__first_frame)) 
              & (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vrd)));
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos 
        = __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__hpos;
    if (vlSelf->axidemo__DOT__video__DOT__pix_reset_n) {
        if ((((~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_empty)) 
              & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_read)) 
             & ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
                & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready))))) {
            __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid = 1U;
        } else if (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready) {
            __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid = 0U;
        }
        if (((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
             & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready))) {
            __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_remaining 
                = (0xfffU & ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data))
                              ? (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width)
                              : ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                  ? ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                      ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                          ? ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining) 
                                             - (IData)(1U))
                                          : ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining) 
                                             - (IData)(2U)))
                                      : ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                          ? ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining) 
                                             - (IData)(4U))
                                          : ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining) 
                                             - (IData)(4U))))
                                  : ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                      ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                          ? ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining) 
                                             - (IData)(8U))
                                          : ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining) 
                                             - (IData)(8U)))
                                      : ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                          ? ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining) 
                                             - (IData)(0x10U))
                                          : ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining) 
                                             - (IData)(0x20U)))))));
        }
        if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid)) 
                   | (IData)(vlSelf->axidemo__DOT__video__DOT__pix_ready)))) {
            if (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_hlast) {
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_count 
                    = (0xfffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__hm_width) 
                                 - (IData)(1U)));
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast = 1U;
            } else {
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_count 
                    = (0xfffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_count) 
                                 - (IData)(1U)));
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast = 0U;
            }
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_frame 
                = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_frame;
        }
        if (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step) {
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_hlast 
                = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast;
        }
        if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__pix_valid)) 
                   | (IData)(vlSelf->axidemo__DOT__video__DOT__pix_ready)))) {
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid 
                = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_valid;
        }
    } else {
        __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid = 0U;
        __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_remaining 
            = vlSelf->axidemo__DOT__video__DOT__hm_width;
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_count = 0U;
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast = 1U;
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_frame = 0U;
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_hlast = 1U;
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid = 0U;
    }
    vlSelf->axidemo__DOT__video__DOT__pix_ready = (1U 
                                                   & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__lost_sync)
                                                       ? 
                                                      ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_frame)) 
                                                       | ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast)) 
                                                          | (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__r_newframe)))
                                                       : (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__w_rd)));
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pre_line 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset) 
           | ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos) 
              < (IData)(vlSelf->axidemo__DOT__video__DOT__vm_height)));
    vlSelf->axidemo__DOT__video__DOT__pix_valid = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_step 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid)) 
                 | (IData)(vlSelf->axidemo__DOT__video__DOT__pix_ready)));
    if (vlSelf->axidemo__DOT__video__DOT__pix_reset_n) {
        if (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step) {
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_frame 
                = ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_frame) 
                   & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast));
        }
    } else {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_frame = 0U;
    }
    if (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready) {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_frame 
            = ((IData)((vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data 
                        >> 1U)) & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
        __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__sreg 
            = (IData)((vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data 
                       >> 2U));
        __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_valid 
            = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
        __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__scount 
            = (0x1fU & ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data))
                         ? ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining) 
                            - (IData)(1U)) : ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                                    ? 0U
                                                    : 1U)
                                                   : 3U)
                                               : ((2U 
                                                   & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                                   ? 7U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                                    ? 0xfU
                                                    : 0x1fU)))));
        if (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) {
            if ((7U == (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))) {
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word = 1U;
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast 
                    = (1U & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data));
            } else if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data))) {
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word 
                    = (1U == (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining));
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast 
                    = (1U == (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining));
            } else {
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word = 0U;
                vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast = 0U;
            }
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_word_in_packet 
                = (1U & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data));
        } else {
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word = 0U;
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast = 0U;
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_word_in_packet = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid)))) {
            __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__scount = 0U;
        }
    } else if (((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid) 
                & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step))) {
        __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__sreg 
            = ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                ? ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                    ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                        ? 0U : VL_SHIFTR_III(32,32,32, vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg, 0x10U))
                    : ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                        ? VL_SHIFTR_III(32,32,32, vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg, 8U)
                        : VL_SHIFTR_III(32,32,32, vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg, 8U)))
                : ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                    ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                        ? VL_SHIFTR_III(32,32,32, vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg, 4U)
                        : VL_SHIFTR_III(32,32,32, vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg, 4U))
                    : ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                        ? VL_SHIFTR_III(32,32,32, vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg, 2U)
                        : VL_SHIFTR_III(32,32,32, vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg, 1U))));
        if ((0U == (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount))) {
            __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_valid = 0U;
        }
        if ((1U >= (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount))) {
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word = 1U;
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast 
                = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_word_in_packet;
        }
        if ((0U < (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount))) {
            __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__scount 
                = (0x1fU & ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount) 
                            - (IData)(1U)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__pix_reset_n)))) {
        __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_valid = 0U;
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word = 1U;
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast = 0U;
        __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__scount = 0U;
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_word_in_packet = 0U;
    }
    vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos 
        = __Vdly__axidemo__DOT__video__DOT__genhdmi__DOT__vpos;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining 
        = __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_remaining;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount 
        = __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__scount;
    if (vlSelf->axidemo__DOT__video__DOT__pix_reset_n) {
        if (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step) {
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_valid 
                = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid;
        }
    } else {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_valid = 0U;
    }
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid 
        = __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__s_valid;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg 
        = __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__sreg;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_valid)) 
                 | (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_step)));
    if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid)) 
               | (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready)))) {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data 
            = ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid)
                ? vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_data
                : vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellinp__tskd__i_data);
    }
    if (vlSelf->axidemo__DOT__video__DOT__pix_reset_n) {
        if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_valid)) 
                   | (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready)))) {
            vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid 
                = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_empty)) 
                         | (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid)));
        }
    } else {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_data 
            = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellinp__tskd__i_data;
    }
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellinp__tskd__i_data 
        = (((QData)((IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data)) 
            << 2U) | (QData)((IData)(((2U & ((IData)(
                                                     (vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data 
                                                      >> 0x20U)) 
                                             << 1U)) 
                                      | (1U & (IData)(
                                                      (vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data 
                                                       >> 0x21U)))))));
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid)) 
                 | ((IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step) 
                    & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word))));
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid 
        = __Vdly__axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid;
    vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_valid 
        = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
    vlSelf->axidemo__DOT__video__DOT__cmap_read = (1U 
                                                   & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid)));
}

extern const VlUnpacked<IData/*25:0*/, 32> Vaxihdmi__ConstPool__TABLE_hbec020df_0;

VL_INLINE_OPT void Vaxihdmi___024root___nba_sequent__TOP__1(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_sequent__TOP__1\n"); );
    // Init
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
    IData/*23:0*/ __Vdlyvdim0__axidemo__DOT__ram__v0;
    __Vdlyvdim0__axidemo__DOT__ram__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__axidemo__DOT__ram__v0;
    __Vdlyvlsb__axidemo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__axidemo__DOT__ram__v0;
    __Vdlyvval__axidemo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axidemo__DOT__ram__v0;
    __Vdlyvset__axidemo__DOT__ram__v0 = 0;
    IData/*23:0*/ __Vdlyvdim0__axidemo__DOT__ram__v1;
    __Vdlyvdim0__axidemo__DOT__ram__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__axidemo__DOT__ram__v1;
    __Vdlyvlsb__axidemo__DOT__ram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__axidemo__DOT__ram__v1;
    __Vdlyvval__axidemo__DOT__ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__axidemo__DOT__ram__v1;
    __Vdlyvset__axidemo__DOT__ram__v1 = 0;
    IData/*23:0*/ __Vdlyvdim0__axidemo__DOT__ram__v2;
    __Vdlyvdim0__axidemo__DOT__ram__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__axidemo__DOT__ram__v2;
    __Vdlyvlsb__axidemo__DOT__ram__v2 = 0;
    CData/*7:0*/ __Vdlyvval__axidemo__DOT__ram__v2;
    __Vdlyvval__axidemo__DOT__ram__v2 = 0;
    CData/*0:0*/ __Vdlyvset__axidemo__DOT__ram__v2;
    __Vdlyvset__axidemo__DOT__ram__v2 = 0;
    IData/*23:0*/ __Vdlyvdim0__axidemo__DOT__ram__v3;
    __Vdlyvdim0__axidemo__DOT__ram__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__axidemo__DOT__ram__v3;
    __Vdlyvlsb__axidemo__DOT__ram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__axidemo__DOT__ram__v3;
    __Vdlyvval__axidemo__DOT__ram__v3 = 0;
    CData/*0:0*/ __Vdlyvset__axidemo__DOT__ram__v3;
    __Vdlyvset__axidemo__DOT__ram__v3 = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__memcontrol__DOT__axi_awready;
    __Vdly__axidemo__DOT__memcontrol__DOT__axi_awready = 0;
    SData/*8:0*/ __Vdly__axidemo__DOT__memcontrol__DOT__axi_rlen;
    __Vdly__axidemo__DOT__memcontrol__DOT__axi_rlen = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__memcontrol__DOT__rskd_valid;
    __Vdly__axidemo__DOT__memcontrol__DOT__rskd_valid = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
    __Vdly__axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid = 0;
    CData/*1:0*/ __Vdly__axidemo__DOT__video__DOT__new_image_dimension;
    __Vdly__axidemo__DOT__video__DOT__new_image_dimension = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__soft_reset;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__soft_reset = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_err;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_err = 0;
    SData/*15:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step = 0;
    SData/*9:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available = 0;
    IData/*26:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr = 0;
    IData/*26:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_addr;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_addr = 0;
    SData/*13:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_words;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_words = 0;
    SData/*15:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_nlines;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_nlines = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_vlast;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_vlast = 0;
    SData/*13:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_hlast;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_hlast = 0;
    SData/*15:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_lines;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_lines = 0;
    SData/*15:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_stopped;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_stopped = 0;
    CData/*7:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arlen;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arlen = 0;
    CData/*0:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid = 0;
    SData/*9:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_fill;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_fill = 0;
    SData/*9:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr = 0;
    SData/*8:0*/ __Vdlyvdim0__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0;
    __Vdlyvdim0__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0 = 0;
    QData/*33:0*/ __Vdlyvval__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0;
    __Vdlyvval__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0;
    __Vdlyvset__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr = 0;
    CData/*4:0*/ __Vdlyvdim0__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0;
    __Vdlyvdim0__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 = 0;
    QData/*33:0*/ __Vdlyvval__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0;
    __Vdlyvval__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0;
    __Vdlyvset__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 = 0;
    // Body
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_fill 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill;
    __Vdlyvset__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 = 0U;
    __Vdly__axidemo__DOT__memcontrol__DOT__axi_awready 
        = vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready;
    __Vdly__axidemo__DOT__memcontrol__DOT__rskd_valid 
        = vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available;
    __Vdlyvset__axidemo__DOT__ram__v0 = 0U;
    __Vdlyvset__axidemo__DOT__ram__v1 = 0U;
    __Vdlyvset__axidemo__DOT__ram__v2 = 0U;
    __Vdlyvset__axidemo__DOT__ram__v3 = 0U;
    __Vdly__axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid 
        = vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid;
    __Vdly__axidemo__DOT__memcontrol__DOT__axi_rlen 
        = vlSelf->axidemo__DOT__memcontrol__DOT__axi_rlen;
    __Vdly__axidemo__DOT__video__DOT__new_image_dimension 
        = vlSelf->axidemo__DOT__video__DOT__new_image_dimension;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arlen 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_vlast 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_nlines 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_nlines;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_hlast 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_lines 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_lines;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_addr 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_addr;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_words 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words;
    __Vdlyvset__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0 = 0U;
    __Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step;
    if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped) {
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_stopped = 1U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_err 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_err;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__soft_reset 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset;
        vlSelf->axidemo__DOT__rk = 4U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr = 0U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr = 0U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_fill = 0U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available = 0x200U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty = 1U;
    } else {
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_stopped = 0U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_err 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_err;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__soft_reset 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset;
        vlSelf->axidemo__DOT__rk = 4U;
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr)));
        }
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr)));
        }
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available 
                = (0x3ffU & (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo) 
                              & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty)))
                              ? ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available) 
                                 - (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen))
                              : ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available) 
                                 - ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen)))));
        } else if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo) 
                    & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty)))) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available)));
        }
        if ((1U == (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr) 
                     << 1U) | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd)))) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_fill 
                = (0x3ffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill) 
                             - (IData)(1U)));
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty 
                = (1U >= (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill));
        } else if ((2U == (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr) 
                            << 1U) | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd)))) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_fill 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill)));
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty = 0U;
        } else {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_fill 
                = (0x3ffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr) 
                             - (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr)));
        }
    }
    if (((IData)(vlSelf->axidemo__DOT__video__DOT____Vcellinp__switch_clocks__i_wr) 
         & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_full)))) {
        __Vdlyvval__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 
            = (((QData)((IData)((1U & (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
                                               >> 0x20U))))) 
                << 0x21U) | (((QData)((IData)((1U & (IData)(
                                                            (vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
                                                             >> 0x21U))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8))));
        __Vdlyvset__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 = 1U;
        __Vdlyvdim0__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0 
            = (0x1fU & (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr));
    }
    if (((IData)(vlSelf->axidemo__DOT__ram_we) & (IData)(vlSelf->axidemo__DOT__ram_wstrb))) {
        __Vdlyvval__axidemo__DOT__ram__v0 = (0xffU 
                                             & vlSelf->axidemo__DOT__ram_wdata);
        __Vdlyvset__axidemo__DOT__ram__v0 = 1U;
        __Vdlyvlsb__axidemo__DOT__ram__v0 = 0U;
        __Vdlyvdim0__axidemo__DOT__ram__v0 = vlSelf->axidemo__DOT__ram_waddr;
    }
    if (((IData)(vlSelf->axidemo__DOT__ram_we) & ((IData)(vlSelf->axidemo__DOT__ram_wstrb) 
                                                  >> 1U))) {
        __Vdlyvval__axidemo__DOT__ram__v1 = (0xffU 
                                             & (vlSelf->axidemo__DOT__ram_wdata 
                                                >> 8U));
        __Vdlyvset__axidemo__DOT__ram__v1 = 1U;
        __Vdlyvlsb__axidemo__DOT__ram__v1 = 8U;
        __Vdlyvdim0__axidemo__DOT__ram__v1 = vlSelf->axidemo__DOT__ram_waddr;
    }
    if (((IData)(vlSelf->axidemo__DOT__ram_we) & ((IData)(vlSelf->axidemo__DOT__ram_wstrb) 
                                                  >> 2U))) {
        __Vdlyvval__axidemo__DOT__ram__v2 = (0xffU 
                                             & (vlSelf->axidemo__DOT__ram_wdata 
                                                >> 0x10U));
        __Vdlyvset__axidemo__DOT__ram__v2 = 1U;
        __Vdlyvlsb__axidemo__DOT__ram__v2 = 0x10U;
        __Vdlyvdim0__axidemo__DOT__ram__v2 = vlSelf->axidemo__DOT__ram_waddr;
    }
    if (((IData)(vlSelf->axidemo__DOT__ram_we) & ((IData)(vlSelf->axidemo__DOT__ram_wstrb) 
                                                  >> 3U))) {
        __Vdlyvval__axidemo__DOT__ram__v3 = (vlSelf->axidemo__DOT__ram_wdata 
                                             >> 0x18U);
        __Vdlyvset__axidemo__DOT__ram__v3 = 1U;
        __Vdlyvlsb__axidemo__DOT__ram__v3 = 0x18U;
        __Vdlyvdim0__axidemo__DOT__ram__v3 = vlSelf->axidemo__DOT__ram_waddr;
    }
    if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid)) 
               | (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)))) {
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arlen 
            = (0xffU & (((0U < (0xffU & (~ (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                                            >> 2U)))) 
                         & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__max_burst) 
                            <= (0xffU & (~ (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                                            >> 2U)))))
                         ? ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__max_burst) 
                            - (IData)(1U)) : (~ (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                                                 >> 2U))));
    }
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped))) {
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_nlines 
            = (0xffffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines) 
                          - (IData)(1U)));
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_vlast 
            = (1U >= (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines));
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats 
            = (0x3fffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words) 
                          - (IData)(1U)));
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_hlast 
            = (1U == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words));
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_addr 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr;
    } else {
        if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start) 
             & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast))) {
            if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast) {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_nlines 
                    = (0xffffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines) 
                                  - (IData)(1U)));
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_vlast 
                    = (1U >= (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines));
            } else {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_nlines 
                    = (0xffffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_nlines) 
                                  - (IData)(1U)));
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_vlast 
                    = (1U >= (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_nlines));
            }
        }
        if (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
             & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full)))) {
            if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast) {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats 
                    = (0x3fffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_words) 
                                  - (IData)(1U)));
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_hlast 
                    = (1U >= (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_words));
            } else {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats 
                    = (0x3fffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats) 
                                  - (IData)(1U)));
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_hlast 
                    = (1U >= (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats));
            }
        }
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start) {
            if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast) 
                 & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast))) {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                    = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr;
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_addr 
                    = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr;
            } else if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast) {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                    = (0x7ffffffU & (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_addr 
                                     + ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_step) 
                                        << 2U)));
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_addr 
                    = (0x7ffffffU & (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_addr 
                                     + ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_step) 
                                        << 2U)));
            } else {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                    = (0x7ffffffU & ((IData)(0x400U) 
                                     + vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr));
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                    = (0x7fffc00U & __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr);
            }
        }
    }
    if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr) {
        __Vdlyvval__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0 
            = (((QData)((IData)(((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast) 
                                 & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast)))) 
                << 0x21U) | (((QData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast)) 
                              << 0x20U) | (QData)((IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data))));
        __Vdlyvset__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0 
            = (0x1ffU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr));
    }
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped))) {
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_words 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_lines 
            = (0xffffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines) 
                          - (IData)(1U)));
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast 
            = (1U == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines));
    } else {
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_words 
                = (0x3fffU & (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast) 
                               & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast))
                               ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words)
                               : ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast)
                                   ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_words)
                                   : ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words) 
                                      - ((IData)(1U) 
                                         + (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen))))));
        }
        if ((((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
              & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full))) 
             & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast))) {
            if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__vlast) {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_lines 
                    = (0xffffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_frame_lines) 
                                  - (IData)(1U)));
                vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast 
                    = (1U >= (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_frame_lines));
            } else {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_lines 
                    = (0xffffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_lines) 
                                  - (IData)(1U)));
                vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast 
                    = (1U >= (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_lines));
            }
        }
    }
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_exclusive_write = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__block_write = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__exclusive_write = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_lock = 0U;
    if (vlSelf->S_AXI_AWREADY) {
        vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_data 
            = (0x1ffU & ((IData)(vlSelf->S_AXI_AWADDR) 
                         >> 2U));
    }
    if (vlSelf->S_AXI_ARREADY) {
        vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_data 
            = (0x1ffU & ((IData)(vlSelf->S_AXI_ARADDR) 
                         >> 2U));
    }
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_bid 
        = vlSelf->axidemo__DOT__memcontrol__DOT__r_bid;
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_bvalid 
        = ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
           && (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__r_bvalid));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_bvalid 
        = ((1U & (~ (IData)(vlSelf->i_reset))) && (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_valid 
        = ((1U & (~ (IData)(vlSelf->i_reset))) && (IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN));
    if (((IData)(vlSelf->axidemo__DOT__video__DOT__axil_write_ready) 
         & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
               >> 8U)))) {
        if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
                if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr)))) {
                        vlSelf->axidemo__DOT__video__DOT__clk_speed 
                            = vlSelf->axidemo__DOT__video__DOT__new_clk_speed;
                    }
                }
            }
        }
    }
    vlSelf->axidemo__DOT__video__DOT__clk_speed = 0U;
    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_data 
            = vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__awbuf__i_data;
    }
    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_data 
            = (3U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr));
    }
    if (vlSelf->S_AXI_WREADY) {
        vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_data 
            = vlSelf->axidemo__DOT__video__DOT____Vcellinp__axilwskid__i_data;
    }
    if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid)) 
               | (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid))))) {
        vlSelf->axidemo__DOT__memcontrol__DOT__rskd_last = 0U;
        if (((IData)(vlSelf->axidemo__DOT__ram_rd) 
             & (1U == (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_rlen)))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__rskd_last = 1U;
        }
        if ((((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid) 
              & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)) 
             & (0U == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen)))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__rskd_last = 1U;
        }
        vlSelf->axidemo__DOT__memcontrol__DOT__rskd_id 
            = ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid) 
                         & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)))) 
               && (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rid));
    }
    if (vlSelf->axidemo__DOT__ram_rd) {
        vlSelf->axidemo__DOT__ram_rdata = vlSelf->axidemo__DOT__ram
            [(0xffffffU & ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)
                            ? (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr 
                               >> 2U) : (vlSelf->axidemo__DOT__memcontrol__DOT__raddr 
                                         >> 2U)))];
        vlSelf->axidemo__DOT__memcontrol__DOT__raddr 
            = vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr;
    } else if (vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready) {
        vlSelf->axidemo__DOT__memcontrol__DOT__raddr 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr;
    }
    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_data 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellinp__axilwskid__i_data;
    }
    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_data 
            = (3U & ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_awaddr) 
                     >> 2U));
    }
    if (vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) {
        if (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__m_awvalid) 
             & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__m_awready))) {
            __Vdly__axidemo__DOT__memcontrol__DOT__axi_awready = 0U;
        } else if ((1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready)))) {
            __Vdly__axidemo__DOT__memcontrol__DOT__axi_awready 
                = (1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_wready)));
        }
        if (vlSelf->axidemo__DOT__ram_rd) {
            __Vdly__axidemo__DOT__memcontrol__DOT__rskd_valid = 1U;
        } else if ((1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid)))) {
            __Vdly__axidemo__DOT__memcontrol__DOT__rskd_valid = 0U;
        }
        if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid) 
             & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready))) {
            __Vdly__axidemo__DOT__memcontrol__DOT__axi_rlen 
                = (0x1ffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen) 
                             + ((IData)(vlSelf->axidemo__DOT__ram_rd)
                                 ? 0U : 1U)));
        } else if (vlSelf->axidemo__DOT__ram_rd) {
            __Vdly__axidemo__DOT__memcontrol__DOT__axi_rlen 
                = (0x1ffU & ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_rlen) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__m_awvalid) 
             & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__axi_wready = 1U;
        }
    } else {
        __Vdly__axidemo__DOT__memcontrol__DOT__axi_awready = 1U;
        __Vdly__axidemo__DOT__memcontrol__DOT__rskd_valid = 0U;
        __Vdly__axidemo__DOT__memcontrol__DOT__axi_rlen = 0U;
        vlSelf->axidemo__DOT__memcontrol__DOT__axi_wready = 0U;
    }
    if (vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready) {
        vlSelf->axidemo__DOT__memcontrol__DOT__rlock = 0U;
        vlSelf->axidemo__DOT__memcontrol__DOT__rburst = 1U;
        vlSelf->axidemo__DOT__memcontrol__DOT__rlen 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen;
        vlSelf->axidemo__DOT__memcontrol__DOT__rsize = 2U;
        vlSelf->axidemo__DOT__memcontrol__DOT__rid = 0U;
    }
    if (vlSelf->i_reset) {
        __Vdly__axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid = 0U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__mem_rvalid)) 
                   | (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full))))) {
            __Vdly__axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid 
                = ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid) 
                   | (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid));
        }
        if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__mem_arvalid)) 
                   | (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)))) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid 
                = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst;
        }
    }
    if (vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) {
        if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid) 
             & (IData)(vlSelf->axidemo__DOT__mem_arready))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready 
                = ((0U == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen)) 
                   & (IData)(vlSelf->axidemo__DOT__ram_rd));
        } else if (vlSelf->axidemo__DOT__ram_rd) {
            vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready 
                = (1U >= (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_rlen));
        }
    } else {
        vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready = 1U;
    }
    if ((1U & ((~ (IData)(vlSelf->S_AXI_RVALID)) | (IData)(vlSelf->S_AXI_RREADY)))) {
        vlSelf->axidemo__DOT__video__DOT__axil_read_data = 0U;
        if ((2U == (2U & (IData)(vlSelf->axidemo__DOT__video__DOT__staging_addr)))) {
            vlSelf->axidemo__DOT__video__DOT__axil_read_data 
                = ((IData)(vlSelf->axidemo__DOT__video__DOT__cmap_read_flag)
                    ? vlSelf->axidemo__DOT__video__DOT__cmap_rdata
                    : vlSelf->axidemo__DOT__video__DOT__cmap_return_data);
        } else if ((0U == (IData)(vlSelf->axidemo__DOT__video__DOT__staging_addr))) {
            vlSelf->axidemo__DOT__video__DOT__axil_read_data 
                = ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_read_flag)
                    ? vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_data
                    : vlSelf->axidemo__DOT__video__DOT__dma_return_data);
        } else if ((1U == (IData)(vlSelf->axidemo__DOT__video__DOT__staging_addr))) {
            vlSelf->axidemo__DOT__video__DOT__axil_read_data 
                = vlSelf->axidemo__DOT__video__DOT__staging_data;
        }
    }
    vlSelf->axidemo__DOT__video__DOT__cmap_waddr = 
        (0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr;
    if (__Vdlyvset__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0) {
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[__Vdlyvdim0__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0] 
            = __Vdlyvval__axidemo__DOT__video__DOT__switch_clocks__DOT__mem__v0;
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_nlines 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_nlines;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_addr 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_addr;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr;
    if (__Vdlyvset__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem[__Vdlyvdim0__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0] 
            = __Vdlyvval__axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem__v0;
    }
    if (vlSelf->i_reset) {
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_stopped = 1U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__soft_reset = 1U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_err = 0U;
    } else {
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_stopped 
                = (1U & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset) 
                         | (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active))));
        } else if ((((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset) 
                     & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_none_outstanding)) 
                    & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid)))) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_stopped = 1U;
        }
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset) {
            if ((((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active) 
                  & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_err))) 
                 & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped))) {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__soft_reset = 0U;
            }
            if (((((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready) 
                   & (0U == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr))) 
                  & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data)) 
                 & (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
                            >> 6U)))) {
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_err 
                    = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_zero_length;
            }
        } else if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active)))) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__soft_reset = 1U;
        }
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__soft_reset;
    if (__Vdlyvset__axidemo__DOT__ram__v0) {
        vlSelf->axidemo__DOT__ram[__Vdlyvdim0__axidemo__DOT__ram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axidemo__DOT__ram__v0))) 
                & vlSelf->axidemo__DOT__ram[__Vdlyvdim0__axidemo__DOT__ram__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axidemo__DOT__ram__v0) 
                                   << (IData)(__Vdlyvlsb__axidemo__DOT__ram__v0))));
    }
    if (__Vdlyvset__axidemo__DOT__ram__v1) {
        vlSelf->axidemo__DOT__ram[__Vdlyvdim0__axidemo__DOT__ram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axidemo__DOT__ram__v1))) 
                & vlSelf->axidemo__DOT__ram[__Vdlyvdim0__axidemo__DOT__ram__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axidemo__DOT__ram__v1) 
                                   << (IData)(__Vdlyvlsb__axidemo__DOT__ram__v1))));
    }
    if (__Vdlyvset__axidemo__DOT__ram__v2) {
        vlSelf->axidemo__DOT__ram[__Vdlyvdim0__axidemo__DOT__ram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axidemo__DOT__ram__v2))) 
                & vlSelf->axidemo__DOT__ram[__Vdlyvdim0__axidemo__DOT__ram__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axidemo__DOT__ram__v2) 
                                   << (IData)(__Vdlyvlsb__axidemo__DOT__ram__v2))));
    }
    if (__Vdlyvset__axidemo__DOT__ram__v3) {
        vlSelf->axidemo__DOT__ram[__Vdlyvdim0__axidemo__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axidemo__DOT__ram__v3))) 
                & vlSelf->axidemo__DOT__ram[__Vdlyvdim0__axidemo__DOT__ram__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axidemo__DOT__ram__v3) 
                                   << (IData)(__Vdlyvlsb__axidemo__DOT__ram__v3))));
    }
    vlSelf->axidemo__DOT__ram_wstrb = 0U;
    vlSelf->axidemo__DOT__ram_wdata = 0U;
    vlSelf->axidemo__DOT__ram_we = 0U;
    vlSelf->axidemo__DOT__ram_waddr = (0xffffffU & 
                                       (vlSelf->axidemo__DOT__memcontrol__DOT__waddr 
                                        >> 2U));
    if (vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready) {
        vlSelf->axidemo__DOT__memcontrol__DOT__wlen 
            = (0xffU & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                >> 1U)));
        vlSelf->axidemo__DOT__memcontrol__DOT__wburst 
            = (3U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                             >> 0xdU)));
        vlSelf->axidemo__DOT__memcontrol__DOT__wsize 
            = (7U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                             >> 0xaU)));
        vlSelf->axidemo__DOT__memcontrol__DOT__r_bid 
            = (1U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data));
        vlSelf->axidemo__DOT__memcontrol__DOT__waddr 
            = (0x3ffffffU & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                     >> 0xfU)));
    }
    if ((((IData)(vlSelf->i_reset) | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped)) 
         | (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start) 
             & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast)) 
            & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast)))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_step 
            = (0x3fffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step) 
                          >> 2U));
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_words 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_frame_lines 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines;
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem
        [(0x1ffU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr))];
    vlSelf->axidemo__DOT__memcontrol__DOT__r_bvalid = 0U;
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask 
        = (0x3ffffffU & (1U | ((0xfU & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wlen)) 
                               << (3U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wsize)))));
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask 
        = (0xfffU & vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask);
    __Vtableidx1 = (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wsize) 
                     << 2U) | (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__wburst));
    vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__increment 
        = Vaxihdmi__ConstPool__TABLE_hbec020df_0[__Vtableidx1];
    if (vlSelf->i_reset) {
        vlSelf->axidemo__DOT__video__DOT__axil_bvalid = 0U;
        vlSelf->S_AXI_BVALID = vlSelf->axidemo__DOT__video__DOT__axil_bvalid;
        vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid = 0U;
    } else {
        if (vlSelf->axidemo__DOT__video__DOT__axil_write_ready) {
            vlSelf->axidemo__DOT__video__DOT__axil_bvalid = 1U;
        } else if (vlSelf->S_AXI_BREADY) {
            vlSelf->axidemo__DOT__video__DOT__axil_bvalid = 0U;
        }
        vlSelf->S_AXI_BVALID = vlSelf->axidemo__DOT__video__DOT__axil_bvalid;
        if ((((IData)(vlSelf->S_AXI_ARVALID) & (IData)(vlSelf->S_AXI_ARREADY)) 
             & ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_valid) 
                & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__axil_read_ready))))) {
            vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid = 1U;
        } else if (vlSelf->axidemo__DOT__video__DOT__axil_read_ready) {
            vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid = 0U;
        }
    }
    vlSelf->S_AXI_ARREADY = (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__arskd_valid = 
        ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
         & ((IData)(vlSelf->S_AXI_ARVALID) | (IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)));
    if (vlSelf->i_reset) {
        vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = 0U;
    } else if ((((IData)(vlSelf->S_AXI_AWVALID) & (IData)(vlSelf->S_AXI_AWREADY)) 
                & ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_valid) 
                   & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__axil_write_ready))))) {
        vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = 1U;
    } else if (vlSelf->axidemo__DOT__video__DOT__axil_write_ready) {
        vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = 0U;
    }
    vlSelf->S_AXI_AWREADY = (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__awskd_valid = 
        ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
         & ((IData)(vlSelf->S_AXI_AWVALID) | (IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)));
    if (vlSelf->i_reset) {
        vlSelf->axidemo__DOT__video__DOT__axil_read_valid = 0U;
        vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = 0U;
    } else {
        if (vlSelf->axidemo__DOT__video__DOT__read_staging) {
            vlSelf->axidemo__DOT__video__DOT__axil_read_valid = 1U;
        } else if (vlSelf->S_AXI_RREADY) {
            vlSelf->axidemo__DOT__video__DOT__axil_read_valid = 0U;
        }
        if ((((IData)(vlSelf->S_AXI_WVALID) & (IData)(vlSelf->S_AXI_WREADY)) 
             & ((IData)(vlSelf->axidemo__DOT__video__DOT__wskd_valid) 
                & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__axil_write_ready))))) {
            vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = 1U;
        } else if (vlSelf->axidemo__DOT__video__DOT__axil_write_ready) {
            vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = 0U;
        }
    }
    vlSelf->S_AXI_WREADY = (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__wskd_valid = 
        ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
         & ((IData)(vlSelf->S_AXI_WVALID) | (IData)(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->S_AXI_RDATA = vlSelf->axidemo__DOT__video__DOT__axil_read_data;
    if (vlSelf->axidemo__DOT__video__DOT__cmap_read_flag) {
        vlSelf->axidemo__DOT__video__DOT__cmap_return_data 
            = vlSelf->axidemo__DOT__video__DOT__cmap_rdata;
    }
    if (vlSelf->axidemo__DOT__video__DOT__dma_read_flag) {
        vlSelf->axidemo__DOT__video__DOT__dma_return_data 
            = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_data;
    }
    if (vlSelf->axidemo__DOT__video__DOT__axil_read_ready) {
        vlSelf->axidemo__DOT__video__DOT__read_staging = 1U;
        vlSelf->axidemo__DOT__video__DOT__staging_data = 0U;
        if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))) {
            vlSelf->axidemo__DOT__video__DOT__staging_addr 
                = ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))
                    ? (2U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                 >> 8U)) << 1U)) : 
                   ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))
                     ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))
                         ? (1U | (2U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                            >> 8U)) 
                                        << 1U))) : 
                        (1U | (2U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                         >> 8U)) << 1U))))
                     : ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))
                         ? (1U | (2U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                            >> 8U)) 
                                        << 1U))) : 
                        (1U | (2U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                         >> 8U)) << 1U))))));
            if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))) {
                    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))) {
                        vlSelf->axidemo__DOT__video__DOT__staging_data 
                            = ((0xfffff000U & vlSelf->axidemo__DOT__video__DOT__staging_data) 
                               | (IData)(vlSelf->axidemo__DOT__video__DOT__hm_raw));
                        vlSelf->axidemo__DOT__video__DOT__staging_data 
                            = ((0xf000ffffU & vlSelf->axidemo__DOT__video__DOT__staging_data) 
                               | ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_raw) 
                                  << 0x10U));
                    } else {
                        vlSelf->axidemo__DOT__video__DOT__staging_data 
                            = ((0xfffff000U & vlSelf->axidemo__DOT__video__DOT__staging_data) 
                               | (IData)(vlSelf->axidemo__DOT__video__DOT__hm_synch));
                        vlSelf->axidemo__DOT__video__DOT__staging_data 
                            = ((0xf000ffffU & vlSelf->axidemo__DOT__video__DOT__staging_data) 
                               | ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_synch) 
                                  << 0x10U));
                    }
                } else if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))) {
                    vlSelf->axidemo__DOT__video__DOT__staging_data 
                        = ((0xfffff000U & vlSelf->axidemo__DOT__video__DOT__staging_data) 
                           | (IData)(vlSelf->axidemo__DOT__video__DOT__hm_porch));
                    vlSelf->axidemo__DOT__video__DOT__staging_data 
                        = ((0xf000ffffU & vlSelf->axidemo__DOT__video__DOT__staging_data) 
                           | ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_porch) 
                              << 0x10U));
                } else {
                    vlSelf->axidemo__DOT__video__DOT__staging_data 
                        = ((0xfffff000U & vlSelf->axidemo__DOT__video__DOT__staging_data) 
                           | (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width));
                    vlSelf->axidemo__DOT__video__DOT__staging_data 
                        = ((0xf000ffffU & vlSelf->axidemo__DOT__video__DOT__staging_data) 
                           | ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_height) 
                              << 0x10U));
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                             >> 2U)))) {
            vlSelf->axidemo__DOT__video__DOT__staging_addr 
                = (2U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                             >> 8U)) << 1U));
        }
        if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                          >> 2U)))) {
                vlSelf->axidemo__DOT__video__DOT__dma_read_flag 
                    = (1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                >> 8U)));
            }
        }
    } else {
        if ((1U & ((~ (IData)(vlSelf->S_AXI_RVALID)) 
                   | (IData)(vlSelf->S_AXI_RREADY)))) {
            vlSelf->axidemo__DOT__video__DOT__read_staging = 0U;
        }
        vlSelf->axidemo__DOT__video__DOT__dma_read_flag = 0U;
    }
    if (vlSelf->i_reset) {
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step = 0x1400U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty = 0U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step 
            = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_lines 
            = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_lines;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast 
            = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_hlast;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr = 0U;
        __Vdly__axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding = 0U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_none_outstanding = 1U;
    } else {
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped) {
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty = 0U;
        }
        if (((((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active) 
               & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast)) 
              & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast)) 
             & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start))) {
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty = 0U;
        }
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready) {
            if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr))) {
                vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty = 1U;
                vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr 
                    = (0x3ffffffU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr));
            } else if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr))) {
                vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty = 1U;
            } else if ((0U == (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_control 
                               >> 0x10U))) {
                vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty 
                    = ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step) 
                       != (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words), 2U)));
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step = 0U;
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step 
                    = ((3U & (IData)(__Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step)) 
                       | ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words) 
                          << 2U));
            } else {
                vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty 
                    = ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step) 
                       != (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_control 
                           >> 0x10U));
                __Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step 
                    = (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_control 
                       >> 0x10U);
            }
        }
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step 
            = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_lines 
            = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_lines;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast 
            = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__rd_hlast;
        if ((1U == (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start) 
                     << 1U) | (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
                                & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full))) 
                               & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data 
                                          >> 0x20U)))))) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding 
                = (0xffffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding) 
                              - (IData)(1U)));
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_none_outstanding 
                = (1U == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding));
        } else if ((2U == (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start) 
                            << 1U) | (((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
                                       & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full))) 
                                      & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data 
                                                 >> 0x20U)))))) {
            __Vdly__axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding)));
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_none_outstanding = 0U;
        }
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding;
    vlSelf->S_AXI_RVALID = vlSelf->axidemo__DOT__video__DOT__axil_read_valid;
    vlSelf->axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_valid) 
           & (IData)(vlSelf->axidemo__DOT__video__DOT__wskd_valid));
    if (vlSelf->i_reset) {
        vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid = 0U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid = 0U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = 0U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = 0U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active = 0U;
    } else {
        if (vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready) {
            vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid = 0U;
        }
        if (vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) {
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid = 0U;
        }
        if ((((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wvalid) 
              & (IData)(vlSelf->axidemo__DOT__video__DOT__dma_wready)) 
             & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wskd_valid) 
                & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready))))) {
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = 1U;
        } else if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready) {
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid = 0U;
        }
        if ((((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wvalid) 
              & (IData)(vlSelf->axidemo__DOT__video__DOT__dma_awready)) 
             & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_valid) 
                & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready))))) {
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = 1U;
        } else if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready) {
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid = 0U;
        }
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready) {
            if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr))) {
                    if (((0U == (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config 
                                 >> 0x10U)) | (0U == 
                                               (0x3fffU 
                                                & (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config 
                                                   >> 2U))))) {
                        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data))) {
                    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active 
                        = (1U & (((IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
                                           >> 4U)) 
                                  & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_err)) 
                                     | (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
                                                >> 6U)))) 
                                 & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_zero_length))));
                }
            }
        }
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_err 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_err;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__vlast 
        = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast;
    vlSelf->axidemo__DOT__memcontrol__DOT__m_awvalid 
        = ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
           & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid));
    vlSelf->axidemo__DOT__video__DOT__dma_arready = 
        (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)));
    if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr 
            = (0x3ffffffU & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr);
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr 
        = (0x3fffffcU & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr);
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
    vlSelf->axidemo__DOT__video__DOT__dma_wready = 
        (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__dma_awready = 
        (1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__dma_wvalid = 0U;
    vlSelf->axidemo__DOT__video__DOT__dma_awaddr = 
        (0xcU & ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                 << 2U));
    vlSelf->axidemo__DOT__video__DOT__dma_wdata = (IData)(
                                                          (vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                                                           >> 4U));
    vlSelf->axidemo__DOT__video__DOT__dma_wdata = (IData)(
                                                          (vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                                                           >> 4U));
    vlSelf->axidemo__DOT__video__DOT__dma_wstrb = (0xfU 
                                                   & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data));
    __Vdly__axidemo__DOT__video__DOT__new_image_dimension 
        = (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelf->axidemo__DOT__video__DOT__new_image_dimension), 1U));
    if (((IData)(vlSelf->axidemo__DOT__video__DOT__axil_write_ready) 
         & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
               >> 8U)))) {
        if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
            if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr)))) {
                        __Vdly__axidemo__DOT__video__DOT__new_image_dimension 
                            = (1U | (IData)(__Vdly__axidemo__DOT__video__DOT__new_image_dimension));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                             >> 2U)))) {
            if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
                if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
                    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data))) {
                        __Vdly__axidemo__DOT__video__DOT__new_image_dimension 
                            = (1U | (IData)(__Vdly__axidemo__DOT__video__DOT__new_image_dimension));
                    }
                } else {
                    vlSelf->axidemo__DOT__video__DOT__dma_wvalid = 1U;
                }
            } else if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
                vlSelf->axidemo__DOT__video__DOT__dma_wvalid = 1U;
                vlSelf->axidemo__DOT__video__DOT__dma_wdata = 0U;
                vlSelf->axidemo__DOT__video__DOT__dma_wdata 
                    = (((IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                                 >> 0x14U)) << 0x10U) 
                       | ((IData)(vlSelf->axidemo__DOT__video__DOT__words_per_line) 
                          << 2U));
            } else {
                vlSelf->axidemo__DOT__video__DOT__dma_wvalid = 1U;
                vlSelf->axidemo__DOT__video__DOT__dma_wdata 
                    = (0xffffU & (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                                          >> 4U)));
            }
        }
    }
    if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__new_image_dimension))) {
        vlSelf->axidemo__DOT__video__DOT__dma_wvalid = 1U;
        vlSelf->axidemo__DOT__video__DOT__dma_awaddr = 4U;
        vlSelf->axidemo__DOT__video__DOT__dma_wstrb = 0xfU;
        vlSelf->axidemo__DOT__video__DOT__dma_wdata = 0U;
        vlSelf->axidemo__DOT__video__DOT__dma_wdata 
            = ((0xf000ffffU & vlSelf->axidemo__DOT__video__DOT__dma_wdata) 
               | ((IData)(vlSelf->axidemo__DOT__video__DOT__vm_height) 
                  << 0x10U));
        vlSelf->axidemo__DOT__video__DOT__dma_wdata 
            = ((0xffffc003U & vlSelf->axidemo__DOT__video__DOT__dma_wdata) 
               | ((IData)(vlSelf->axidemo__DOT__video__DOT__words_per_line) 
                  << 2U));
    }
    vlSelf->axidemo__DOT__video__DOT__dma_awaddr = 
        (0xcU & (IData)(vlSelf->axidemo__DOT__video__DOT__dma_awaddr));
    vlSelf->axidemo__DOT__video__DOT__cmap_read_flag 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__axil_read_ready) 
           && (1U & ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                     >> 8U)));
    if ((1U & (~ (IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN)))) {
        vlSelf->axidemo__DOT__ram_we = 0U;
        vlSelf->axidemo__DOT__video__DOT__read_staging = 0U;
        vlSelf->axidemo__DOT__video__DOT__dma_wvalid = 0U;
        __Vdly__axidemo__DOT__video__DOT__new_image_dimension = 0U;
        vlSelf->axidemo__DOT__video__DOT__cmap_read_flag = 0U;
        vlSelf->axidemo__DOT__video__DOT__dma_read_flag = 0U;
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_data = 0U;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_data 
        = ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__arskd_addr))
            ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__arskd_addr))
                ? (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address 
                           >> 0x20U)) : (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address))
            : ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__arskd_addr))
                ? (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines) 
                    << 0x10U) | ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words) 
                                 << 2U)) : vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word));
    if ((1U & ((~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid)) 
               | (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full))))) {
        vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data 
            = ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid)
                ? vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_data
                : vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__rskid__i_data);
    }
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready 
        = __Vdly__axidemo__DOT__memcontrol__DOT__axi_awready;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_vlast;
    vlSelf->axidemo__DOT__memcontrol__DOT__axi_rlen 
        = __Vdly__axidemo__DOT__memcontrol__DOT__axi_rlen;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__axi_arlen;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address = 0ULL;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address 
        = ((0xfffffffffc000000ULL & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address) 
           | (IData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr)));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address 
        = (0xfffffffffffffffcULL & vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address);
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
    vlSelf->axidemo__DOT__memcontrol__DOT__m_awready 
        = vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready;
    if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__lag_start) 
         | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst))) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast = 1U;
        if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words) 
             > ((IData)(1U) + (0xffU & (~ (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                                           >> 2U)))))) {
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast = 0U;
        }
        if (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words) 
             > (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__max_burst))) {
            vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast = 0U;
        }
    }
    vlSelf->axidemo__DOT__mem_arvalid = vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid;
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__awbuf__i_data 
        = (((QData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr)) 
            << 0xfU) | (QData)((IData)((0x2800U | ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen) 
                                                   << 1U)))));
    vlSelf->axidemo__DOT__mem_arready = vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_valid 
        = ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
           & ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wvalid) 
              | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wskd_valid 
        = ((IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) 
           & ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wvalid) 
              | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellinp__axilwskid__i_data 
        = (((QData)((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wdata)) 
            << 4U) | (QData)((IData)(vlSelf->axidemo__DOT__video__DOT__dma_wstrb)));
    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__new_image_dimension))) {
        vlSelf->axidemo__DOT__video__DOT__words_per_line 
            = (0xfffU & ((4U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                          ? ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                              ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                  ? (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width)
                                  : (((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width)) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                                 ? 
                                                (((IData)(3U) 
                                                  + (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width)) 
                                                 >> 2U)
                                                 : 
                                                (((IData)(3U) 
                                                  + (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width)) 
                                                 >> 2U)))
                          : ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                              ? ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                  ? (((IData)(7U) + (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width)) 
                                     >> 3U) : (((IData)(7U) 
                                                + (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width)) 
                                               >> 3U))
                              : ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__cmap_mode))
                                  ? (((IData)(0xfU) 
                                      + (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width)) 
                                     >> 4U) : (((IData)(0x1fU) 
                                                + (IData)(vlSelf->axidemo__DOT__video__DOT__hm_width)) 
                                               >> 5U)))));
    }
    if (((IData)(vlSelf->axidemo__DOT__video__DOT__axil_write_ready) 
         & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
               >> 8U)))) {
        if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
            if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
                    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
                        vlSelf->axidemo__DOT__video__DOT__vm_raw 
                            = (0xfffU & (vlSelf->axidemo__DOT__video__DOT__new_image_raw 
                                         >> 0x10U));
                        vlSelf->axidemo__DOT__video__DOT__hm_raw 
                            = (0xfffU & vlSelf->axidemo__DOT__video__DOT__new_image_raw);
                    }
                    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr)))) {
                        vlSelf->axidemo__DOT__video__DOT__vm_synch 
                            = (0xfffU & (vlSelf->axidemo__DOT__video__DOT__new_image_synch 
                                         >> 0x10U));
                        vlSelf->axidemo__DOT__video__DOT__hm_synch 
                            = (0xfffU & vlSelf->axidemo__DOT__video__DOT__new_image_synch);
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
                        vlSelf->axidemo__DOT__video__DOT__vm_porch 
                            = (0xfffU & (vlSelf->axidemo__DOT__video__DOT__new_image_porch 
                                         >> 0x10U));
                        vlSelf->axidemo__DOT__video__DOT__hm_porch 
                            = (0xfffU & vlSelf->axidemo__DOT__video__DOT__new_image_porch);
                    }
                    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr)))) {
                        vlSelf->axidemo__DOT__video__DOT__vm_height 
                            = (0xfffU & (vlSelf->axidemo__DOT__video__DOT__new_image_size 
                                         >> 0x10U));
                        vlSelf->axidemo__DOT__video__DOT__hm_width 
                            = (0xfffU & vlSelf->axidemo__DOT__video__DOT__new_image_size);
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
                    if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
                        if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data))) {
                            vlSelf->axidemo__DOT__video__DOT__cmap_mode 
                                = (7U & (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                                                 >> 4U)));
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_data 
            = vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__rskid__i_data;
    }
    if (vlSelf->i_reset) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_zero_length = 0U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines = 0x400U;
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words = 0x500U;
        vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid = 0U;
    } else {
        if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready) {
            if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr))) {
                    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_zero_length 
                        = ((0U == (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config 
                                   >> 0x10U)) | (0U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config 
                                                     >> 2U))));
                    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines 
                        = (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config 
                           >> 0x10U);
                    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words 
                        = (0x3fffU & (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config 
                                      >> 2U));
                }
            }
        }
        if ((((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid) 
              & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_ready)) 
             & ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
                & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full)))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid = 1U;
        } else if ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full)))) {
            vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid = 0U;
        }
    }
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_addr;
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
        = ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid)
            ? vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_data
            : vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__awbuf__i_data);
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
        = Vaxihdmi__ConstPool__TABLE_hbec020df_0[__Vtableidx2];
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)
            ? vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_data
            : vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellinp__axilwskid__i_data);
    vlSelf->axidemo__DOT__video__DOT__new_image_dimension 
        = __Vdly__axidemo__DOT__video__DOT__new_image_dimension;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_valid) 
           & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wskd_valid));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr 
        = (3U & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)
                  ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_data)
                  : ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_awaddr) 
                     >> 2U)));
    vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__rskid__i_data 
        = (((QData)((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_id)) 
            << 0x22U) | (((QData)((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_lock)) 
                          << 0x21U) | (((QData)((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_last)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->axidemo__DOT__ram_rdata)))));
    if (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__lag_start) {
        vlSelf->axidemo__DOT__video__DOT__videodma__DOT__max_burst 
            = ((0x100U <= (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words))
                ? 0x100U : (0x1ffU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words)));
    }
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
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__req_line_words;
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
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid 
        = __Vdly__axidemo__DOT__memcontrol__DOT__rskd_valid;
    vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid 
        = __Vdly__axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__lag_start 
        = (((IData)(vlSelf->i_reset) | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped)) 
           | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start));
    vlSelf->axidemo__DOT__memcontrol__DOT__rskd_ready 
        = (1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->axidemo__DOT__mem_rvalid = vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full 
        = ((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped))) 
           && ((1U != (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr) 
                        << 1U) | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd))) 
               && ((2U == (((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr) 
                            << 1U) | (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd)))
                    ? (0x1ffU == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill))
                    : (0x200U == (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill)))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__fifo_fill;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped 
        = __Vdly__axidemo__DOT__video__DOT__videodma__DOT__r_stopped;
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start 
        = ((~ (IData)(vlSelf->i_reset)) & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr 
        = ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full)) 
           & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
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
}

VL_INLINE_OPT void Vaxihdmi___024root___nba_sequent__TOP__3(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->axidemo__DOT__video__DOT__pix_reset_n) {
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_wgray 
            = vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray_cross;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset 
            = (1U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset_pipe) 
                     >> 1U));
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset_pipe 
            = (2U & ((IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset_pipe) 
                     << 1U));
        if (vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_read) {
            vlSelf->axidemo__DOT__video__DOT__afifo_empty 
                = vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_rd_empty;
        }
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray_cross 
            = vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray;
    } else {
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_wgray = 0U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset_pipe = 3U;
        vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset = 1U;
        vlSelf->axidemo__DOT__video__DOT__afifo_empty = 1U;
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray_cross = 0U;
    }
}

VL_INLINE_OPT void Vaxihdmi___024root___nba_sequent__TOP__4(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) {
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_rgray 
            = vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray_cross;
        if (((IData)(vlSelf->axidemo__DOT__video__DOT____Vcellinp__switch_clocks__i_wr) 
             & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_full)))) {
            vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray 
                = (0x3fU & (((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr)) 
                            ^ VL_SHIFTR_III(6,6,32, 
                                            (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr))), 1U)));
            vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr 
                = vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__next_wr_addr;
        }
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray_cross 
            = vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray;
    } else {
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_rgray = 0U;
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray = 0U;
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray_cross = 0U;
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr = 0U;
    }
    vlSelf->axidemo__DOT__video__DOT__afifo_full = 
        ((IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_rgray) 
         == ((0x30U & ((~ ((IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray))));
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__next_wr_addr 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr)));
}

VL_INLINE_OPT void Vaxihdmi___024root___nba_sequent__TOP__5(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (((IData)(vlSelf->axidemo__DOT__video__DOT__axil_read_ready) 
         & ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
            >> 8U))) {
        vlSelf->axidemo__DOT__video__DOT__cmap_rdata 
            = vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap
            [(0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))];
    }
    if (vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0) {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap[vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0))) 
                & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap
                [vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0]) 
               | (0xffffffU & ((IData)(vlSelf->__Vdlyvval__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0) 
                               << (IData)(vlSelf->__Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0))));
    }
    if (vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1) {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap[vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1))) 
                & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap
                [vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1]) 
               | (0xffffffU & ((IData)(vlSelf->__Vdlyvval__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1) 
                               << (IData)(vlSelf->__Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1))));
    }
    if (vlSelf->__Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2) {
        vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap[vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2))) 
                & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap
                [vlSelf->__Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2]) 
               | (0xffffffU & ((IData)(vlSelf->__Vdlyvval__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2) 
                               << (IData)(vlSelf->__Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2))));
    }
}

VL_INLINE_OPT void Vaxihdmi___024root___nba_sequent__TOP__6(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->axidemo__DOT__video__DOT__pix_reset_n) {
        if (((IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_read) 
             & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_rd_empty)))) {
            vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray 
                = (0x3fU & (((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr)) 
                            ^ VL_SHIFTR_III(6,6,32, 
                                            (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr))), 1U)));
            vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr 
                = vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__next_rd_addr;
        }
    } else {
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray = 0U;
        vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr = 0U;
    }
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_rd_empty 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_wgray) 
           == (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray));
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__next_rd_addr 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr)));
}

VL_INLINE_OPT void Vaxihdmi___024root___nba_comb__TOP__0(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->axidemo__DOT__video__DOT____Vcellinp__switch_clocks__i_wr 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_full)) 
                 & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty)) 
                 & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_full))));
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd 
        = ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty)) 
           & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo));
}

VL_INLINE_OPT void Vaxihdmi___024root___nba_sequent__TOP__7(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_sequent__TOP__7\n"); );
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
    // Body
    vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)
            ? vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_data
            : vlSelf->axidemo__DOT__video__DOT____Vcellinp__axilwskid__i_data);
    vlSelf->axidemo__DOT__video__DOT__axil_read_ready 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_valid) 
           & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__axil_read_valid)) 
              | ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__read_staging)) 
                 | (IData)(vlSelf->S_AXI_RREADY))));
    vlSelf->axidemo__DOT__video__DOT__arskd_addr = 
        (0x1ffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)
                    ? (IData)(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_data)
                    : ((IData)(vlSelf->S_AXI_ARADDR) 
                       >> 2U)));
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
    vlSelf->axidemo__DOT__video__DOT__videodma__DOT__arskd_addr 
        = (3U & ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)
                  ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_data)
                  : (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr)));
}

VL_INLINE_OPT void Vaxihdmi___024root___nba_comb__TOP__1(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_read 
        = (1U & ((~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid)) 
                 | (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_empty)));
}

VL_INLINE_OPT void Vaxihdmi___024root___nba_sequent__TOP__8(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_sequent__TOP__8\n"); );
    // Body
    if (vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN) {
        vlSelf->axidemo__DOT__video__DOT__pix_reset_n 
            = (1U & ((IData)(vlSelf->axidemo__DOT__video__DOT__pix_reset_pipe) 
                     >> 1U));
        vlSelf->axidemo__DOT__video__DOT__pix_reset_pipe 
            = (1U | (2U & ((IData)(vlSelf->axidemo__DOT__video__DOT__pix_reset_pipe) 
                           << 1U)));
        if (vlSelf->axidemo__DOT__video__DOT__new_mode) {
            vlSelf->axidemo__DOT__video__DOT__pix_reset_n = 0U;
        }
    } else {
        vlSelf->axidemo__DOT__video__DOT__pix_reset_pipe = 0U;
        vlSelf->axidemo__DOT__video__DOT__pix_reset_n = 0U;
    }
}

VL_INLINE_OPT void Vaxihdmi___024root___nba_sequent__TOP__9(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->axidemo__DOT__video__DOT__new_mode = 0U;
    if (((IData)(vlSelf->axidemo__DOT__video__DOT__axil_write_ready) 
         & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
               >> 8U)))) {
        if ((8U & (IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr))) {
            if ((1U & (~ ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                          >> 2U)))) {
                vlSelf->axidemo__DOT__video__DOT__new_mode = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN)))) {
        vlSelf->axidemo__DOT__video__DOT__new_mode = 1U;
    }
    vlSelf->axidemo__DOT__video__DOT__awskd_addr = 
        (0x1ffU & ((IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)
                    ? (IData)(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_data)
                    : ((IData)(vlSelf->S_AXI_AWADDR) 
                       >> 2U)));
    vlSelf->axidemo__DOT__video__DOT__axil_write_ready 
        = ((IData)(vlSelf->axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0) 
           & (((~ (IData)(vlSelf->axidemo__DOT__video__DOT__axil_bvalid)) 
               | (IData)(vlSelf->S_AXI_BREADY)) & (0U 
                                                   == (IData)(vlSelf->axidemo__DOT__video__DOT__new_image_dimension))));
}

void Vaxihdmi___024root___eval_nba(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___eval_nba\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxihdmi___024root___nba_sequent__TOP__9(vlSelf);
    }
}

void Vaxihdmi___024root___eval_triggers__act(Vaxihdmi___024root* vlSelf);

bool Vaxihdmi___024root___eval_phase__act(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaxihdmi___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vaxihdmi___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vaxihdmi___024root___eval_phase__nba(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaxihdmi___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxihdmi___024root___dump_triggers__ico(Vaxihdmi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxihdmi___024root___dump_triggers__nba(Vaxihdmi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxihdmi___024root___dump_triggers__act(Vaxihdmi___024root* vlSelf);
#endif  // VL_DEBUG

void Vaxihdmi___024root___eval(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___eval\n"); );
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
            Vaxihdmi___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("axidemo.v", 47, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vaxihdmi___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vaxihdmi___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("axidemo.v", 47, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vaxihdmi___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("axidemo.v", 47, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vaxihdmi___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vaxihdmi___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaxihdmi___024root___eval_debug_assertions(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_pixclk & 0xfeU))) {
        Verilated::overWidthError("i_pixclk");}
    if (VL_UNLIKELY((vlSelf->i_reset & 0xfeU))) {
        Verilated::overWidthError("i_reset");}
    if (VL_UNLIKELY((vlSelf->S_AXI_AWVALID & 0xfeU))) {
        Verilated::overWidthError("S_AXI_AWVALID");}
    if (VL_UNLIKELY((vlSelf->S_AXI_AWADDR & 0xf800U))) {
        Verilated::overWidthError("S_AXI_AWADDR");}
    if (VL_UNLIKELY((vlSelf->S_AXI_AWPROT & 0xf8U))) {
        Verilated::overWidthError("S_AXI_AWPROT");}
    if (VL_UNLIKELY((vlSelf->S_AXI_WVALID & 0xfeU))) {
        Verilated::overWidthError("S_AXI_WVALID");}
    if (VL_UNLIKELY((vlSelf->S_AXI_WSTRB & 0xf0U))) {
        Verilated::overWidthError("S_AXI_WSTRB");}
    if (VL_UNLIKELY((vlSelf->S_AXI_BREADY & 0xfeU))) {
        Verilated::overWidthError("S_AXI_BREADY");}
    if (VL_UNLIKELY((vlSelf->S_AXI_ARVALID & 0xfeU))) {
        Verilated::overWidthError("S_AXI_ARVALID");}
    if (VL_UNLIKELY((vlSelf->S_AXI_ARADDR & 0xf800U))) {
        Verilated::overWidthError("S_AXI_ARADDR");}
    if (VL_UNLIKELY((vlSelf->S_AXI_ARPROT & 0xf8U))) {
        Verilated::overWidthError("S_AXI_ARPROT");}
    if (VL_UNLIKELY((vlSelf->S_AXI_RREADY & 0xfeU))) {
        Verilated::overWidthError("S_AXI_RREADY");}
}
#endif  // VL_DEBUG
