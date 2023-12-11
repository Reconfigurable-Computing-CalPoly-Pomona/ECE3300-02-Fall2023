// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaxidemo__Syms.h"


void Vaxidemo___024root__trace_chg_0_sub_0(Vaxidemo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaxidemo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root__trace_chg_0\n"); );
    // Init
    Vaxidemo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxidemo___024root*>(voidSelf);
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaxidemo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaxidemo___024root__trace_chg_0_sub_0(Vaxidemo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->axidemo__DOT__video__DOT__apply_wstrb__Vstatic__k),32);
        bufp->chgIData(oldp+1,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__Vstatic__k),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+2,((IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                                        >> 4U))),32);
        bufp->chgCData(oldp+3,((0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data))),4);
        bufp->chgBit(oldp+4,(vlSelf->axidemo__DOT__video__DOT__axil_read_ready));
        bufp->chgSData(oldp+5,(vlSelf->axidemo__DOT__video__DOT__arskd_addr),9);
        bufp->chgBit(oldp+6,(((IData)(vlSelf->axidemo__DOT__video__DOT__axil_read_ready) 
                              & ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                 >> 8U))));
        bufp->chgCData(oldp+7,((0xcU & ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                        << 2U))),4);
        bufp->chgIData(oldp+8,(vlSelf->axidemo__DOT__video__DOT__new_image_size),32);
        bufp->chgIData(oldp+9,(vlSelf->axidemo__DOT__video__DOT__new_image_porch),32);
        bufp->chgIData(oldp+10,(vlSelf->axidemo__DOT__video__DOT__new_image_synch),32);
        bufp->chgIData(oldp+11,(vlSelf->axidemo__DOT__video__DOT__new_image_raw),32);
        bufp->chgIData(oldp+12,(vlSelf->axidemo__DOT__video__DOT__new_clk_speed),32);
        bufp->chgIData(oldp+13,(vlSelf->axidemo__DOT__video__DOT__image_size),32);
        bufp->chgIData(oldp+14,(vlSelf->axidemo__DOT__video__DOT__image_porch),32);
        bufp->chgIData(oldp+15,(vlSelf->axidemo__DOT__video__DOT__image_synch),32);
        bufp->chgIData(oldp+16,(vlSelf->axidemo__DOT__video__DOT__image_raw),32);
        bufp->chgQData(oldp+17,(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data),36);
        bufp->chgCData(oldp+19,((0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))),8);
        bufp->chgBit(oldp+20,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_valid));
        bufp->chgBit(oldp+21,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready));
        bufp->chgBit(oldp+22,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wskd_valid));
        bufp->chgCData(oldp+23,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__arskd_addr),2);
        bufp->chgCData(oldp+24,((3U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+25,((1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+26,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready));
        bufp->chgBit(oldp+27,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_wready));
        bufp->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full)))));
        bufp->chgBit(oldp+29,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid));
        bufp->chgBit(oldp+30,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_bvalid));
        bufp->chgBit(oldp+31,(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
        bufp->chgBit(oldp+32,((1U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+33,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_bid));
        bufp->chgBit(oldp+34,((1U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data 
                                             >> 0x22U)))));
        bufp->chgIData(oldp+35,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr),26);
        bufp->chgCData(oldp+36,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen),8);
        bufp->chgCData(oldp+37,((1U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data 
                                               >> 0x21U)))),2);
        bufp->chgCData(oldp+38,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_exclusive_write),2);
        bufp->chgIData(oldp+39,((IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data)),32);
        bufp->chgBit(oldp+40,(vlSelf->axidemo__DOT__ram_we));
        bufp->chgBit(oldp+41,(vlSelf->axidemo__DOT__ram_rd));
        bufp->chgIData(oldp+42,(vlSelf->axidemo__DOT__ram_waddr),24);
        bufp->chgIData(oldp+43,((0xffffffU & ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)
                                               ? (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr 
                                                  >> 2U)
                                               : (vlSelf->axidemo__DOT__memcontrol__DOT__raddr 
                                                  >> 2U)))),24);
        bufp->chgIData(oldp+44,(vlSelf->axidemo__DOT__ram_wdata),32);
        bufp->chgIData(oldp+45,(vlSelf->axidemo__DOT__ram_rdata),32);
        bufp->chgCData(oldp+46,(vlSelf->axidemo__DOT__ram_wstrb),4);
        bufp->chgIData(oldp+47,(vlSelf->axidemo__DOT__rk),32);
        bufp->chgBit(oldp+48,(vlSelf->axidemo__DOT__memcontrol__DOT__r_bid));
        bufp->chgBit(oldp+49,(vlSelf->axidemo__DOT__memcontrol__DOT__r_bvalid));
        bufp->chgBit(oldp+50,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready));
        bufp->chgIData(oldp+51,(vlSelf->axidemo__DOT__memcontrol__DOT__waddr),26);
        bufp->chgIData(oldp+52,(vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr),26);
        bufp->chgCData(oldp+53,(vlSelf->axidemo__DOT__memcontrol__DOT__wlen),8);
        bufp->chgCData(oldp+54,(vlSelf->axidemo__DOT__memcontrol__DOT__wsize),3);
        bufp->chgCData(oldp+55,(vlSelf->axidemo__DOT__memcontrol__DOT__wburst),2);
        bufp->chgBit(oldp+56,((1U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                             >> 9U)))));
        bufp->chgIData(oldp+57,((0x3ffffffU & (IData)(
                                                      (vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                                       >> 0xfU)))),26);
        bufp->chgCData(oldp+58,((3U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                               >> 0xdU)))),2);
        bufp->chgCData(oldp+59,((7U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                               >> 0xaU)))),3);
        bufp->chgCData(oldp+60,((0xffU & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                                  >> 1U)))),8);
        bufp->chgBit(oldp+61,((1U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data))));
        bufp->chgIData(oldp+62,(vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr),26);
        bufp->chgCData(oldp+63,(vlSelf->axidemo__DOT__memcontrol__DOT__rlen),8);
        bufp->chgCData(oldp+64,(vlSelf->axidemo__DOT__memcontrol__DOT__rsize),3);
        bufp->chgCData(oldp+65,(vlSelf->axidemo__DOT__memcontrol__DOT__rburst),2);
        bufp->chgBit(oldp+66,(vlSelf->axidemo__DOT__memcontrol__DOT__rid));
        bufp->chgBit(oldp+67,(vlSelf->axidemo__DOT__memcontrol__DOT__rlock));
        bufp->chgSData(oldp+68,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_rlen),9);
        bufp->chgIData(oldp+69,(vlSelf->axidemo__DOT__memcontrol__DOT__raddr),26);
        bufp->chgBit(oldp+70,(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid));
        bufp->chgBit(oldp+71,(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_last));
        bufp->chgBit(oldp+72,(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_lock));
        bufp->chgBit(oldp+73,((1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+74,(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_id));
        bufp->chgBit(oldp+75,(vlSelf->axidemo__DOT__memcontrol__DOT__exclusive_write));
        bufp->chgBit(oldp+76,(vlSelf->axidemo__DOT__memcontrol__DOT__block_write));
        bufp->chgBit(oldp+77,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_exclusive_write));
        bufp->chgQData(oldp+78,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__awbuf__i_data),41);
        bufp->chgQData(oldp+80,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data),41);
        bufp->chgQData(oldp+82,(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_data),41);
        bufp->chgBit(oldp+84,(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid));
        bufp->chgIData(oldp+85,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber1),26);
        bufp->chgCData(oldp+86,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2),3);
        bufp->chgCData(oldp+87,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber3),2);
        bufp->chgCData(oldp+88,(((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)
                                  ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen)
                                  : (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rlen))),8);
        bufp->chgIData(oldp+89,(vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__wrap_mask),26);
        bufp->chgIData(oldp+90,(vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__increment),26);
        bufp->chgIData(oldp+91,(vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask),26);
        bufp->chgIData(oldp+92,(vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__increment),26);
        bufp->chgQData(oldp+93,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__rskid__i_data),35);
        bufp->chgQData(oldp+95,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data),35);
        bufp->chgQData(oldp+97,(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_data),35);
        bufp->chgBit(oldp+99,(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+100,(vlSelf->axidemo__DOT__video__DOT__axil_bvalid));
        bufp->chgIData(oldp+101,(vlSelf->axidemo__DOT__video__DOT__axil_read_data),32);
        bufp->chgBit(oldp+102,(vlSelf->axidemo__DOT__video__DOT__axil_read_valid));
        bufp->chgBit(oldp+103,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+104,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+105,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty)))));
        bufp->chgIData(oldp+106,((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8)),32);
        bufp->chgBit(oldp+107,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+108,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+109,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_bvalid));
        bufp->chgBit(oldp+110,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+111,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_valid));
        bufp->chgIData(oldp+112,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_data),32);
        bufp->chgBit(oldp+113,(vlSelf->axidemo__DOT__video__DOT__read_staging));
        bufp->chgIData(oldp+114,(vlSelf->axidemo__DOT__video__DOT__clk_speed),32);
        bufp->chgIData(oldp+115,(vlSelf->axidemo__DOT__video__DOT__staging_data),32);
        bufp->chgIData(oldp+116,(vlSelf->axidemo__DOT__video__DOT__dma_return_data),32);
        bufp->chgIData(oldp+117,(vlSelf->axidemo__DOT__video__DOT__cmap_return_data),32);
        bufp->chgCData(oldp+118,(vlSelf->axidemo__DOT__video__DOT__staging_addr),2);
        bufp->chgBit(oldp+119,(vlSelf->axidemo__DOT__video__DOT__cmap_read_flag));
        bufp->chgBit(oldp+120,(vlSelf->axidemo__DOT__video__DOT__dma_read_flag));
        bufp->chgSData(oldp+121,(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_data),9);
        bufp->chgBit(oldp+122,(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgSData(oldp+123,(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_data),9);
        bufp->chgBit(oldp+124,(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgQData(oldp+125,(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_data),36);
        bufp->chgBit(oldp+127,(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgQData(oldp+128,((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
                                                               >> 0x20U))))) 
                                   << 0x21U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
                                                                             >> 0x21U))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8))))),34);
        bufp->chgBit(oldp+130,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset));
        bufp->chgBit(oldp+131,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_err));
        bufp->chgBit(oldp+132,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped));
        bufp->chgBit(oldp+133,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active));
        bufp->chgBit(oldp+134,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_zero_length));
        bufp->chgBit(oldp+135,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty));
        bufp->chgIData(oldp+136,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr),26);
        bufp->chgSData(oldp+137,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines),16);
        bufp->chgSData(oldp+138,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step),16);
        bufp->chgSData(oldp+139,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words),14);
        bufp->chgSData(oldp+140,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill),10);
        bufp->chgBit(oldp+141,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full));
        bufp->chgBit(oldp+142,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty));
        bufp->chgIData(oldp+143,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word),32);
        bufp->chgQData(oldp+144,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address),64);
        bufp->chgIData(oldp+146,((((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines) 
                                   << 0x10U) | ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words) 
                                                << 2U))),32);
        bufp->chgBit(oldp+147,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__lag_start));
        bufp->chgBit(oldp+148,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start));
        bufp->chgBit(oldp+149,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst));
        bufp->chgBit(oldp+150,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_none_outstanding));
        bufp->chgSData(oldp+151,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__max_burst),9);
        bufp->chgSData(oldp+152,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding),16);
        bufp->chgBit(oldp+153,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast));
        bufp->chgBit(oldp+154,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast));
        bufp->chgSData(oldp+155,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_frame_lines),16);
        bufp->chgSData(oldp+156,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_step),16);
        bufp->chgSData(oldp+157,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_words),14);
        bufp->chgBit(oldp+158,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast));
        bufp->chgBit(oldp+159,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast));
        bufp->chgSData(oldp+160,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_nlines),16);
        bufp->chgSData(oldp+161,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words),14);
        bufp->chgIData(oldp+162,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr),27);
        bufp->chgIData(oldp+163,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_addr),27);
        bufp->chgSData(oldp+164,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_lines),16);
        bufp->chgSData(oldp+165,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats),14);
        bufp->chgBit(oldp+166,((0x100U > (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available))));
        bufp->chgCData(oldp+167,((0xffU & (~ (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                                              >> 2U)))),8);
        bufp->chgSData(oldp+168,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available),10);
        bufp->chgQData(oldp+169,((((QData)((IData)(
                                                   ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast) 
                                                    & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast)))) 
                                   << 0x21U) | (((QData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data))))),34);
        bufp->chgQData(oldp+171,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8),34);
        bufp->chgSData(oldp+173,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr),10);
        bufp->chgSData(oldp+174,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr),10);
        bufp->chgSData(oldp+175,((0x1ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr)))),9);
        bufp->chgBit(oldp+176,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr));
        bufp->chgCData(oldp+177,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_data),2);
        bufp->chgBit(oldp+178,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgCData(oldp+179,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_data),2);
        bufp->chgBit(oldp+180,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgQData(oldp+181,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_data),36);
        bufp->chgBit(oldp+183,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+184,(vlSelf->axidemo__DOT__video__DOT__cmap_rdata),24);
        bufp->chgBit(oldp+185,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+186,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+187,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgIData(oldp+188,((IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data)),32);
        bufp->chgBit(oldp+189,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid));
        bufp->chgBit(oldp+190,(vlSelf->axidemo__DOT__video__DOT__pix_ready));
        bufp->chgBit(oldp+191,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast));
        bufp->chgBit(oldp+192,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_frame));
        bufp->chgIData(oldp+193,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data),24);
        bufp->chgBit(oldp+194,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__r_newline));
        bufp->chgBit(oldp+195,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__r_newframe));
        bufp->chgBit(oldp+196,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__lost_sync));
        bufp->chgCData(oldp+197,((0xffU & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+198,((0xffU & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data 
                                           >> 8U))),8);
        bufp->chgCData(oldp+199,((0xffU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data)),8);
        bufp->chgSData(oldp+200,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__hpos),12);
        bufp->chgSData(oldp+201,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__vpos),12);
        bufp->chgBit(oldp+202,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__hrd));
        bufp->chgBit(oldp+203,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__vrd));
        bufp->chgBit(oldp+204,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__first_frame));
        bufp->chgBit(oldp+205,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__w_rd));
        bufp->chgBit(oldp+206,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
        bufp->chgBit(oldp+207,((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data))));
        bufp->chgBit(oldp+208,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data 
                                              >> 1U)))));
        bufp->chgIData(oldp+209,((IData)((vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data 
                                          >> 2U))),32);
        bufp->chgSData(oldp+210,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining),12);
        bufp->chgBit(oldp+211,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid));
        bufp->chgBit(oldp+212,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready));
        bufp->chgBit(oldp+213,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_frame));
        bufp->chgBit(oldp+214,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast));
        bufp->chgBit(oldp+215,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word));
        bufp->chgBit(oldp+216,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_word_in_packet));
        bufp->chgCData(oldp+217,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount),5);
        bufp->chgIData(oldp+218,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg),32);
        bufp->chgBit(oldp+219,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step));
        bufp->chgBit(oldp+220,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_hlast));
        bufp->chgBit(oldp+221,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_valid));
        bufp->chgBit(oldp+222,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_frame));
        bufp->chgIData(oldp+223,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__bw_pix),24);
        bufp->chgIData(oldp+224,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_2),24);
        bufp->chgIData(oldp+225,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_4),24);
        bufp->chgIData(oldp+226,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_4),24);
        bufp->chgIData(oldp+227,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_8),24);
        bufp->chgIData(oldp+228,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8),24);
        bufp->chgIData(oldp+229,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_16),24);
        bufp->chgIData(oldp+230,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__direct_clr),24);
        bufp->chgBit(oldp+231,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_step));
        bufp->chgSData(oldp+232,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_count),12);
        bufp->chgQData(oldp+233,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellinp__tskd__i_data),34);
        bufp->chgQData(oldp+235,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data),34);
        bufp->chgQData(oldp+237,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_data),34);
        bufp->chgBit(oldp+239,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid));
        bufp->chgQData(oldp+240,(vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data),34);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+242,(vlSelf->axidemo__DOT__video__DOT__afifo_empty));
        bufp->chgBit(oldp+243,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__pix_reset));
        bufp->chgBit(oldp+244,(vlSelf->axidemo__DOT__video__DOT__genvga__DOT__pix_reset_pipe));
        bufp->chgBit(oldp+245,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_empty)))));
        bufp->chgCData(oldp+246,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr),6);
        bufp->chgCData(oldp+247,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_wgray),6);
        bufp->chgCData(oldp+248,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr)))),6);
        bufp->chgCData(oldp+249,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray),6);
        bufp->chgCData(oldp+250,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray_cross),6);
        bufp->chgBit(oldp+251,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_rd_empty));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+252,(vlSelf->axidemo__DOT__video__DOT__dma_wvalid));
        bufp->chgCData(oldp+253,(vlSelf->axidemo__DOT__video__DOT__dma_awaddr),4);
        bufp->chgIData(oldp+254,(vlSelf->axidemo__DOT__video__DOT__dma_wdata),32);
        bufp->chgCData(oldp+255,(vlSelf->axidemo__DOT__video__DOT__dma_wstrb),4);
        bufp->chgCData(oldp+256,(vlSelf->axidemo__DOT__video__DOT__new_image_dimension),2);
        bufp->chgCData(oldp+257,(vlSelf->axidemo__DOT__video__DOT__cmap_mode),3);
        bufp->chgSData(oldp+258,(vlSelf->axidemo__DOT__video__DOT__hm_width),12);
        bufp->chgSData(oldp+259,(vlSelf->axidemo__DOT__video__DOT__hm_porch),12);
        bufp->chgSData(oldp+260,(vlSelf->axidemo__DOT__video__DOT__hm_synch),12);
        bufp->chgSData(oldp+261,(vlSelf->axidemo__DOT__video__DOT__hm_raw),12);
        bufp->chgSData(oldp+262,(vlSelf->axidemo__DOT__video__DOT__vm_height),12);
        bufp->chgSData(oldp+263,(vlSelf->axidemo__DOT__video__DOT__vm_porch),12);
        bufp->chgSData(oldp+264,(vlSelf->axidemo__DOT__video__DOT__vm_synch),12);
        bufp->chgSData(oldp+265,(vlSelf->axidemo__DOT__video__DOT__vm_raw),12);
        bufp->chgSData(oldp+266,(vlSelf->axidemo__DOT__video__DOT__words_per_line),12);
        bufp->chgCData(oldp+267,(vlSelf->axidemo__DOT__video__DOT__cmap_waddr),8);
        bufp->chgIData(oldp+268,((0xffffffU & vlSelf->axidemo__DOT__video__DOT__dma_wdata)),24);
        bufp->chgCData(oldp+269,((7U & (IData)(vlSelf->axidemo__DOT__video__DOT__dma_wstrb))),3);
        bufp->chgQData(oldp+270,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[0]),34);
        bufp->chgQData(oldp+272,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[1]),34);
        bufp->chgQData(oldp+274,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[2]),34);
        bufp->chgQData(oldp+276,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[3]),34);
        bufp->chgQData(oldp+278,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[4]),34);
        bufp->chgQData(oldp+280,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[5]),34);
        bufp->chgQData(oldp+282,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[6]),34);
        bufp->chgQData(oldp+284,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[7]),34);
        bufp->chgQData(oldp+286,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[8]),34);
        bufp->chgQData(oldp+288,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[9]),34);
        bufp->chgQData(oldp+290,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[10]),34);
        bufp->chgQData(oldp+292,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[11]),34);
        bufp->chgQData(oldp+294,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[12]),34);
        bufp->chgQData(oldp+296,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[13]),34);
        bufp->chgQData(oldp+298,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[14]),34);
        bufp->chgQData(oldp+300,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[15]),34);
        bufp->chgQData(oldp+302,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[16]),34);
        bufp->chgQData(oldp+304,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[17]),34);
        bufp->chgQData(oldp+306,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[18]),34);
        bufp->chgQData(oldp+308,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[19]),34);
        bufp->chgQData(oldp+310,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[20]),34);
        bufp->chgQData(oldp+312,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[21]),34);
        bufp->chgQData(oldp+314,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[22]),34);
        bufp->chgQData(oldp+316,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[23]),34);
        bufp->chgQData(oldp+318,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[24]),34);
        bufp->chgQData(oldp+320,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[25]),34);
        bufp->chgQData(oldp+322,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[26]),34);
        bufp->chgQData(oldp+324,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[27]),34);
        bufp->chgQData(oldp+326,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[28]),34);
        bufp->chgQData(oldp+328,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[29]),34);
        bufp->chgQData(oldp+330,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[30]),34);
        bufp->chgQData(oldp+332,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[31]),34);
        bufp->chgCData(oldp+334,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr),2);
        bufp->chgIData(oldp+335,((IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
                                          >> 4U))),32);
        bufp->chgCData(oldp+336,((0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data))),4);
        bufp->chgQData(oldp+337,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr),64);
        bufp->chgIData(oldp+339,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_cmdaddrlo),32);
        bufp->chgIData(oldp+340,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config),32);
        bufp->chgIData(oldp+341,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_control),32);
        bufp->chgCData(oldp+342,((3U & ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_awaddr) 
                                        >> 2U))),2);
        bufp->chgQData(oldp+343,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellinp__axilwskid__i_data),36);
        bufp->chgQData(oldp+345,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data),36);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+347,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_full)))));
        bufp->chgBit(oldp+348,(vlSelf->axidemo__DOT__video__DOT__afifo_full));
        bufp->chgCData(oldp+349,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr),6);
        bufp->chgCData(oldp+350,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr)))),6);
        bufp->chgCData(oldp+351,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+352,(vlSelf->axidemo__DOT__video__DOT__pix_reset_n));
        bufp->chgCData(oldp+353,(vlSelf->axidemo__DOT__video__DOT__pix_reset_pipe),2);
        bufp->chgBit(oldp+354,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__pix_reset_n)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+355,(vlSelf->axidemo__DOT__video__DOT____Vcellinp__switch_clocks__i_wr));
        bufp->chgBit(oldp+356,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo));
        bufp->chgBit(oldp+357,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd));
    }
    bufp->chgBit(oldp+358,(vlSelf->i_clk));
    bufp->chgBit(oldp+359,(vlSelf->i_pixclk));
    bufp->chgBit(oldp+360,(vlSelf->i_reset));
    bufp->chgBit(oldp+361,(vlSelf->o_vga_vsync));
    bufp->chgBit(oldp+362,(vlSelf->o_vga_hsync));
    bufp->chgCData(oldp+363,(vlSelf->o_vga_red),8);
    bufp->chgCData(oldp+364,(vlSelf->o_vga_grn),8);
    bufp->chgCData(oldp+365,(vlSelf->o_vga_blu),8);
    bufp->chgBit(oldp+366,(vlSelf->S_AXI_AWVALID));
    bufp->chgBit(oldp+367,(vlSelf->S_AXI_AWREADY));
    bufp->chgSData(oldp+368,(vlSelf->S_AXI_AWADDR),11);
    bufp->chgCData(oldp+369,(vlSelf->S_AXI_AWPROT),3);
    bufp->chgBit(oldp+370,(vlSelf->S_AXI_WVALID));
    bufp->chgBit(oldp+371,(vlSelf->S_AXI_WREADY));
    bufp->chgIData(oldp+372,(vlSelf->S_AXI_WDATA),32);
    bufp->chgCData(oldp+373,(vlSelf->S_AXI_WSTRB),4);
    bufp->chgBit(oldp+374,(vlSelf->S_AXI_BVALID));
    bufp->chgBit(oldp+375,(vlSelf->S_AXI_BREADY));
    bufp->chgCData(oldp+376,(vlSelf->S_AXI_BRESP),2);
    bufp->chgBit(oldp+377,(vlSelf->S_AXI_ARVALID));
    bufp->chgBit(oldp+378,(vlSelf->S_AXI_ARREADY));
    bufp->chgSData(oldp+379,(vlSelf->S_AXI_ARADDR),11);
    bufp->chgCData(oldp+380,(vlSelf->S_AXI_ARPROT),3);
    bufp->chgBit(oldp+381,(vlSelf->S_AXI_RVALID));
    bufp->chgBit(oldp+382,(vlSelf->S_AXI_RREADY));
    bufp->chgIData(oldp+383,(vlSelf->S_AXI_RDATA),32);
    bufp->chgCData(oldp+384,(vlSelf->S_AXI_RRESP),2);
    bufp->chgBit(oldp+385,(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN));
    bufp->chgBit(oldp+386,(vlSelf->axidemo__DOT__memcontrol__DOT__m_awvalid));
    bufp->chgBit(oldp+387,(vlSelf->axidemo__DOT__video__DOT__arskd_valid));
    bufp->chgBit(oldp+388,(vlSelf->axidemo__DOT__video__DOT__awskd_valid));
    bufp->chgBit(oldp+389,(vlSelf->axidemo__DOT__video__DOT__wskd_valid));
    bufp->chgBit(oldp+390,(vlSelf->axidemo__DOT__video__DOT__axil_write_ready));
    bufp->chgSData(oldp+391,(vlSelf->axidemo__DOT__video__DOT__awskd_addr),9);
    bufp->chgBit(oldp+392,(vlSelf->axidemo__DOT__video__DOT__new_mode));
    bufp->chgSData(oldp+393,((0x1ffU & ((IData)(vlSelf->S_AXI_ARADDR) 
                                        >> 2U))),9);
    bufp->chgSData(oldp+394,((0x1ffU & ((IData)(vlSelf->S_AXI_AWADDR) 
                                        >> 2U))),9);
    bufp->chgQData(oldp+395,(vlSelf->axidemo__DOT__video__DOT____Vcellinp__axilwskid__i_data),36);
    bufp->chgBit(oldp+397,(((IData)(vlSelf->axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0) 
                            & ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                               >> 8U))));
    bufp->chgCData(oldp+398,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_rgray),6);
    bufp->chgCData(oldp+399,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray_cross),6);
    bufp->chgQData(oldp+400,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem
                             [(0x1fU & (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr))]),34);
    bufp->chgBit(oldp+402,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_read));
}

void Vaxidemo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxidemo___024root__trace_cleanup\n"); );
    // Init
    Vaxidemo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxidemo___024root*>(voidSelf);
    Vaxidemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
