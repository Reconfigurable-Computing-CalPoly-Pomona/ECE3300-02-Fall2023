// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaxihdmi__Syms.h"


void Vaxihdmi___024root__trace_chg_0_sub_0(Vaxihdmi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaxihdmi___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root__trace_chg_0\n"); );
    // Init
    Vaxihdmi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxihdmi___024root*>(voidSelf);
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaxihdmi___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaxihdmi___024root__trace_chg_0_sub_0(Vaxihdmi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->axidemo__DOT__video__DOT__apply_wstrb__Vstatic__k),32);
        bufp->chgIData(oldp+1,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__k),32);
        bufp->chgIData(oldp+2,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__k),32);
        bufp->chgIData(oldp+3,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__k),32);
        bufp->chgIData(oldp+4,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__Vstatic__k),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+5,(vlSelf->axidemo__DOT__memcontrol__DOT__m_awvalid));
        bufp->chgBit(oldp+6,(vlSelf->axidemo__DOT__video__DOT__arskd_valid));
        bufp->chgBit(oldp+7,(vlSelf->axidemo__DOT__video__DOT__awskd_valid));
        bufp->chgBit(oldp+8,(vlSelf->axidemo__DOT__video__DOT__wskd_valid));
        bufp->chgBit(oldp+9,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_valid));
        bufp->chgBit(oldp+10,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready));
        bufp->chgBit(oldp+11,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wskd_valid));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+12,((IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data 
                                         >> 4U))),32);
        bufp->chgCData(oldp+13,((0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data))),4);
        bufp->chgBit(oldp+14,(vlSelf->axidemo__DOT__video__DOT__axil_read_ready));
        bufp->chgSData(oldp+15,(vlSelf->axidemo__DOT__video__DOT__arskd_addr),9);
        bufp->chgBit(oldp+16,(((IData)(vlSelf->axidemo__DOT__video__DOT__axil_read_ready) 
                               & ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                  >> 8U))));
        bufp->chgCData(oldp+17,((0xcU & ((IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr) 
                                         << 2U))),4);
        bufp->chgIData(oldp+18,(vlSelf->axidemo__DOT__video__DOT__new_image_size),32);
        bufp->chgIData(oldp+19,(vlSelf->axidemo__DOT__video__DOT__new_image_porch),32);
        bufp->chgIData(oldp+20,(vlSelf->axidemo__DOT__video__DOT__new_image_synch),32);
        bufp->chgIData(oldp+21,(vlSelf->axidemo__DOT__video__DOT__new_image_raw),32);
        bufp->chgIData(oldp+22,(vlSelf->axidemo__DOT__video__DOT__new_clk_speed),32);
        bufp->chgIData(oldp+23,(vlSelf->axidemo__DOT__video__DOT__image_size),32);
        bufp->chgIData(oldp+24,(vlSelf->axidemo__DOT__video__DOT__image_porch),32);
        bufp->chgIData(oldp+25,(vlSelf->axidemo__DOT__video__DOT__image_synch),32);
        bufp->chgIData(oldp+26,(vlSelf->axidemo__DOT__video__DOT__image_raw),32);
        bufp->chgQData(oldp+27,(vlSelf->axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data),36);
        bufp->chgCData(oldp+29,((0xffU & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))),8);
        bufp->chgCData(oldp+30,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__arskd_addr),2);
        bufp->chgCData(oldp+31,((3U & (IData)(vlSelf->axidemo__DOT__video__DOT__arskd_addr))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+32,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+33,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+34,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgIData(oldp+35,((IData)(vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data)),32);
        bufp->chgBit(oldp+36,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_valid));
        bufp->chgBit(oldp+37,(vlSelf->axidemo__DOT__video__DOT__pix_ready));
        bufp->chgBit(oldp+38,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast));
        bufp->chgBit(oldp+39,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_frame));
        bufp->chgIData(oldp+40,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data),24);
        bufp->chgBit(oldp+41,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__r_newline));
        bufp->chgBit(oldp+42,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__r_newframe));
        bufp->chgBit(oldp+43,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__lost_sync));
        bufp->chgBit(oldp+44,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vsync));
        bufp->chgBit(oldp+45,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hsync));
        bufp->chgCData(oldp+46,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_type),2);
        bufp->chgSData(oldp+47,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT____Vcellinp__hdmi_encoder_ch0____pinNumber3),12);
        bufp->chgCData(oldp+48,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel),8);
        bufp->chgCData(oldp+49,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel),8);
        bufp->chgCData(oldp+50,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel),8);
        bufp->chgBit(oldp+51,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pre_line));
        bufp->chgBit(oldp+52,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__first_frame));
        bufp->chgBit(oldp+53,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__w_rd));
        bufp->chgCData(oldp+54,((0xffU & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+55,((0xffU & (vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data 
                                          >> 8U))),8);
        bufp->chgCData(oldp+56,((0xffU & vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_data)),8);
        bufp->chgSData(oldp+57,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hpos),12);
        bufp->chgSData(oldp+58,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vpos),12);
        bufp->chgBit(oldp+59,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hrd));
        bufp->chgBit(oldp+60,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__vrd));
        bufp->chgCData(oldp+61,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT____Vcellinp__hdmi_encoder_ch0____pinNumber3),2);
        bufp->chgCData(oldp+62,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT____Vcellinp__hdmi_encoder_ch0____pinNumber3),4);
        bufp->chgCData(oldp+63,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_dtype),2);
        bufp->chgSData(oldp+64,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ctrl_word),10);
        bufp->chgCData(oldp+65,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__r_ctl),2);
        bufp->chgSData(oldp+66,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__aux_word),10);
        bufp->chgCData(oldp+67,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__r_aux),4);
        bufp->chgCData(oldp+68,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones),4);
        bufp->chgCData(oldp+69,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter),4);
        bufp->chgCData(oldp+70,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter),4);
        bufp->chgSData(oldp+71,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m),9);
        bufp->chgSData(oldp+72,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__pix_word),10);
        bufp->chgCData(oldp+73,((0xfU & ((IData)(8U) 
                                         - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter)))),4);
        bufp->chgSData(oldp+74,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp),9);
        bufp->chgCData(oldp+75,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count),5);
        bufp->chgCData(oldp+76,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__s_dtype),2);
        bufp->chgSData(oldp+77,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word),10);
        bufp->chgSData(oldp+78,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ctrl_word),10);
        bufp->chgCData(oldp+79,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__r_ctl),2);
        bufp->chgSData(oldp+80,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__aux_word),10);
        bufp->chgCData(oldp+81,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_aux),4);
        bufp->chgCData(oldp+82,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones),4);
        bufp->chgCData(oldp+83,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter),4);
        bufp->chgCData(oldp+84,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter),4);
        bufp->chgSData(oldp+85,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m),9);
        bufp->chgSData(oldp+86,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__pix_word),10);
        bufp->chgCData(oldp+87,((0xfU & ((IData)(8U) 
                                         - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter)))),4);
        bufp->chgSData(oldp+88,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp),9);
        bufp->chgCData(oldp+89,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count),5);
        bufp->chgSData(oldp+90,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word),10);
        bufp->chgSData(oldp+91,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ctrl_word),10);
        bufp->chgCData(oldp+92,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_ctl),2);
        bufp->chgSData(oldp+93,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__aux_word),10);
        bufp->chgCData(oldp+94,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones),4);
        bufp->chgCData(oldp+95,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter),4);
        bufp->chgCData(oldp+96,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter),4);
        bufp->chgSData(oldp+97,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m),9);
        bufp->chgSData(oldp+98,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__pix_word),10);
        bufp->chgCData(oldp+99,((0xfU & ((IData)(8U) 
                                         - (IData)(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter)))),4);
        bufp->chgSData(oldp+100,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp),9);
        bufp->chgCData(oldp+101,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count),5);
        bufp->chgSData(oldp+102,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word),10);
        bufp->chgBit(oldp+103,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
        bufp->chgBit(oldp+104,((1U & (IData)(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data))));
        bufp->chgBit(oldp+105,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data 
                                              >> 1U)))));
        bufp->chgIData(oldp+106,((IData)((vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data 
                                          >> 2U))),32);
        bufp->chgSData(oldp+107,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_remaining),12);
        bufp->chgBit(oldp+108,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_valid));
        bufp->chgBit(oldp+109,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__skd_ready));
        bufp->chgBit(oldp+110,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_frame));
        bufp->chgBit(oldp+111,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_hlast));
        bufp->chgBit(oldp+112,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word));
        bufp->chgBit(oldp+113,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_last_word_in_packet));
        bufp->chgCData(oldp+114,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__scount),5);
        bufp->chgIData(oldp+115,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__sreg),32);
        bufp->chgBit(oldp+116,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__s_step));
        bufp->chgBit(oldp+117,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_hlast));
        bufp->chgBit(oldp+118,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_valid));
        bufp->chgBit(oldp+119,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_frame));
        bufp->chgIData(oldp+120,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__bw_pix),24);
        bufp->chgIData(oldp+121,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_2),24);
        bufp->chgIData(oldp+122,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__gray_4),24);
        bufp->chgIData(oldp+123,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_4),24);
        bufp->chgIData(oldp+124,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__cmap_8),24);
        bufp->chgIData(oldp+125,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_8),24);
        bufp->chgIData(oldp+126,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__clr_16),24);
        bufp->chgIData(oldp+127,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__direct_clr),24);
        bufp->chgBit(oldp+128,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__c_step));
        bufp->chgSData(oldp+129,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__pix_count),12);
        bufp->chgQData(oldp+130,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellinp__tskd__i_data),34);
        bufp->chgQData(oldp+132,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data),34);
        bufp->chgQData(oldp+134,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_data),34);
        bufp->chgBit(oldp+136,(vlSelf->axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid));
        bufp->chgQData(oldp+137,(vlSelf->axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data),34);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+139,((1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+140,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready));
        bufp->chgBit(oldp+141,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_wready));
        bufp->chgBit(oldp+142,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full)))));
        bufp->chgBit(oldp+143,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid));
        bufp->chgBit(oldp+144,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_bvalid));
        bufp->chgBit(oldp+145,(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
        bufp->chgBit(oldp+146,((1U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+147,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_bid));
        bufp->chgBit(oldp+148,((1U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data 
                                              >> 0x22U)))));
        bufp->chgIData(oldp+149,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr),26);
        bufp->chgCData(oldp+150,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen),8);
        bufp->chgCData(oldp+151,((1U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data 
                                                >> 0x21U)))),2);
        bufp->chgCData(oldp+152,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_exclusive_write),2);
        bufp->chgIData(oldp+153,((IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data)),32);
        bufp->chgBit(oldp+154,(vlSelf->axidemo__DOT__ram_we));
        bufp->chgBit(oldp+155,(vlSelf->axidemo__DOT__ram_rd));
        bufp->chgIData(oldp+156,(vlSelf->axidemo__DOT__ram_waddr),24);
        bufp->chgIData(oldp+157,((0xffffffU & ((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)
                                                ? (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_araddr 
                                                   >> 2U)
                                                : (vlSelf->axidemo__DOT__memcontrol__DOT__raddr 
                                                   >> 2U)))),24);
        bufp->chgIData(oldp+158,(vlSelf->axidemo__DOT__ram_wdata),32);
        bufp->chgIData(oldp+159,(vlSelf->axidemo__DOT__ram_rdata),32);
        bufp->chgCData(oldp+160,(vlSelf->axidemo__DOT__ram_wstrb),4);
        bufp->chgIData(oldp+161,(vlSelf->axidemo__DOT__rk),32);
        bufp->chgBit(oldp+162,(vlSelf->axidemo__DOT__memcontrol__DOT__r_bid));
        bufp->chgBit(oldp+163,(vlSelf->axidemo__DOT__memcontrol__DOT__r_bvalid));
        bufp->chgBit(oldp+164,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_awready));
        bufp->chgIData(oldp+165,(vlSelf->axidemo__DOT__memcontrol__DOT__waddr),26);
        bufp->chgIData(oldp+166,(vlSelf->axidemo__DOT__memcontrol__DOT__next_wr_addr),26);
        bufp->chgCData(oldp+167,(vlSelf->axidemo__DOT__memcontrol__DOT__wlen),8);
        bufp->chgCData(oldp+168,(vlSelf->axidemo__DOT__memcontrol__DOT__wsize),3);
        bufp->chgCData(oldp+169,(vlSelf->axidemo__DOT__memcontrol__DOT__wburst),2);
        bufp->chgBit(oldp+170,((1U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                              >> 9U)))));
        bufp->chgIData(oldp+171,((0x3ffffffU & (IData)(
                                                       (vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                                        >> 0xfU)))),26);
        bufp->chgCData(oldp+172,((3U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                                >> 0xdU)))),2);
        bufp->chgCData(oldp+173,((7U & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                                >> 0xaU)))),3);
        bufp->chgCData(oldp+174,((0xffU & (IData)((vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data 
                                                   >> 1U)))),8);
        bufp->chgBit(oldp+175,((1U & (IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data))));
        bufp->chgIData(oldp+176,(vlSelf->axidemo__DOT__memcontrol__DOT__next_rd_addr),26);
        bufp->chgCData(oldp+177,(vlSelf->axidemo__DOT__memcontrol__DOT__rlen),8);
        bufp->chgCData(oldp+178,(vlSelf->axidemo__DOT__memcontrol__DOT__rsize),3);
        bufp->chgCData(oldp+179,(vlSelf->axidemo__DOT__memcontrol__DOT__rburst),2);
        bufp->chgBit(oldp+180,(vlSelf->axidemo__DOT__memcontrol__DOT__rid));
        bufp->chgBit(oldp+181,(vlSelf->axidemo__DOT__memcontrol__DOT__rlock));
        bufp->chgSData(oldp+182,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_rlen),9);
        bufp->chgIData(oldp+183,(vlSelf->axidemo__DOT__memcontrol__DOT__raddr),26);
        bufp->chgBit(oldp+184,(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_valid));
        bufp->chgBit(oldp+185,(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_last));
        bufp->chgBit(oldp+186,(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_lock));
        bufp->chgBit(oldp+187,((1U & (~ (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+188,(vlSelf->axidemo__DOT__memcontrol__DOT__rskd_id));
        bufp->chgBit(oldp+189,(vlSelf->axidemo__DOT__memcontrol__DOT__exclusive_write));
        bufp->chgBit(oldp+190,(vlSelf->axidemo__DOT__memcontrol__DOT__block_write));
        bufp->chgBit(oldp+191,(vlSelf->axidemo__DOT__memcontrol__DOT__axi_exclusive_write));
        bufp->chgQData(oldp+192,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__awbuf__i_data),41);
        bufp->chgQData(oldp+194,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data),41);
        bufp->chgQData(oldp+196,(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_data),41);
        bufp->chgBit(oldp+198,(vlSelf->axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid));
        bufp->chgIData(oldp+199,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber1),26);
        bufp->chgCData(oldp+200,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2),3);
        bufp->chgCData(oldp+201,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber3),2);
        bufp->chgCData(oldp+202,(((IData)(vlSelf->axidemo__DOT__memcontrol__DOT__axi_arready)
                                   ? (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axi_arlen)
                                   : (IData)(vlSelf->axidemo__DOT__memcontrol__DOT__rlen))),8);
        bufp->chgIData(oldp+203,(vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__wrap_mask),26);
        bufp->chgIData(oldp+204,(vlSelf->axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__increment),26);
        bufp->chgIData(oldp+205,(vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask),26);
        bufp->chgIData(oldp+206,(vlSelf->axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__increment),26);
        bufp->chgQData(oldp+207,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellinp__rskid__i_data),35);
        bufp->chgQData(oldp+209,(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data),35);
        bufp->chgQData(oldp+211,(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_data),35);
        bufp->chgBit(oldp+213,(vlSelf->axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+214,(vlSelf->axidemo__DOT__video__DOT__axil_bvalid));
        bufp->chgIData(oldp+215,(vlSelf->axidemo__DOT__video__DOT__axil_read_data),32);
        bufp->chgBit(oldp+216,(vlSelf->axidemo__DOT__video__DOT__axil_read_valid));
        bufp->chgBit(oldp+217,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+218,((1U & (IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+219,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty)))));
        bufp->chgIData(oldp+220,((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8)),32);
        bufp->chgBit(oldp+221,(vlSelf->axidemo__DOT__video__DOT__dma_wvalid));
        bufp->chgCData(oldp+222,(vlSelf->axidemo__DOT__video__DOT__dma_awaddr),4);
        bufp->chgBit(oldp+223,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+224,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgIData(oldp+225,(vlSelf->axidemo__DOT__video__DOT__dma_wdata),32);
        bufp->chgCData(oldp+226,(vlSelf->axidemo__DOT__video__DOT__dma_wstrb),4);
        bufp->chgBit(oldp+227,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_bvalid));
        bufp->chgBit(oldp+228,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+229,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_valid));
        bufp->chgIData(oldp+230,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axil_read_data),32);
        bufp->chgCData(oldp+231,(vlSelf->axidemo__DOT__video__DOT__new_image_dimension),2);
        bufp->chgCData(oldp+232,(vlSelf->axidemo__DOT__video__DOT__cmap_mode),3);
        bufp->chgSData(oldp+233,(vlSelf->axidemo__DOT__video__DOT__hm_width),12);
        bufp->chgSData(oldp+234,(vlSelf->axidemo__DOT__video__DOT__hm_porch),12);
        bufp->chgSData(oldp+235,(vlSelf->axidemo__DOT__video__DOT__hm_synch),12);
        bufp->chgSData(oldp+236,(vlSelf->axidemo__DOT__video__DOT__hm_raw),12);
        bufp->chgSData(oldp+237,(vlSelf->axidemo__DOT__video__DOT__vm_height),12);
        bufp->chgSData(oldp+238,(vlSelf->axidemo__DOT__video__DOT__vm_porch),12);
        bufp->chgSData(oldp+239,(vlSelf->axidemo__DOT__video__DOT__vm_synch),12);
        bufp->chgSData(oldp+240,(vlSelf->axidemo__DOT__video__DOT__vm_raw),12);
        bufp->chgSData(oldp+241,(vlSelf->axidemo__DOT__video__DOT__words_per_line),12);
        bufp->chgBit(oldp+242,(vlSelf->axidemo__DOT__video__DOT__read_staging));
        bufp->chgIData(oldp+243,(vlSelf->axidemo__DOT__video__DOT__clk_speed),32);
        bufp->chgIData(oldp+244,(vlSelf->axidemo__DOT__video__DOT__staging_data),32);
        bufp->chgIData(oldp+245,(vlSelf->axidemo__DOT__video__DOT__dma_return_data),32);
        bufp->chgIData(oldp+246,(vlSelf->axidemo__DOT__video__DOT__cmap_return_data),32);
        bufp->chgCData(oldp+247,(vlSelf->axidemo__DOT__video__DOT__cmap_waddr),8);
        bufp->chgCData(oldp+248,(vlSelf->axidemo__DOT__video__DOT__staging_addr),2);
        bufp->chgBit(oldp+249,(vlSelf->axidemo__DOT__video__DOT__cmap_read_flag));
        bufp->chgBit(oldp+250,(vlSelf->axidemo__DOT__video__DOT__dma_read_flag));
        bufp->chgSData(oldp+251,(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_data),9);
        bufp->chgBit(oldp+252,(vlSelf->axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgSData(oldp+253,(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_data),9);
        bufp->chgBit(oldp+254,(vlSelf->axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgQData(oldp+255,(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_data),36);
        bufp->chgBit(oldp+257,(vlSelf->axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgIData(oldp+258,((0xffffffU & vlSelf->axidemo__DOT__video__DOT__dma_wdata)),24);
        bufp->chgCData(oldp+259,((7U & (IData)(vlSelf->axidemo__DOT__video__DOT__dma_wstrb))),3);
        bufp->chgQData(oldp+260,((((QData)((IData)(
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
        bufp->chgQData(oldp+262,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[0]),34);
        bufp->chgQData(oldp+264,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[1]),34);
        bufp->chgQData(oldp+266,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[2]),34);
        bufp->chgQData(oldp+268,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[3]),34);
        bufp->chgQData(oldp+270,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[4]),34);
        bufp->chgQData(oldp+272,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[5]),34);
        bufp->chgQData(oldp+274,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[6]),34);
        bufp->chgQData(oldp+276,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[7]),34);
        bufp->chgQData(oldp+278,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[8]),34);
        bufp->chgQData(oldp+280,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[9]),34);
        bufp->chgQData(oldp+282,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[10]),34);
        bufp->chgQData(oldp+284,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[11]),34);
        bufp->chgQData(oldp+286,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[12]),34);
        bufp->chgQData(oldp+288,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[13]),34);
        bufp->chgQData(oldp+290,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[14]),34);
        bufp->chgQData(oldp+292,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[15]),34);
        bufp->chgQData(oldp+294,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[16]),34);
        bufp->chgQData(oldp+296,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[17]),34);
        bufp->chgQData(oldp+298,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[18]),34);
        bufp->chgQData(oldp+300,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[19]),34);
        bufp->chgQData(oldp+302,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[20]),34);
        bufp->chgQData(oldp+304,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[21]),34);
        bufp->chgQData(oldp+306,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[22]),34);
        bufp->chgQData(oldp+308,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[23]),34);
        bufp->chgQData(oldp+310,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[24]),34);
        bufp->chgQData(oldp+312,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[25]),34);
        bufp->chgQData(oldp+314,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[26]),34);
        bufp->chgQData(oldp+316,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[27]),34);
        bufp->chgQData(oldp+318,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[28]),34);
        bufp->chgQData(oldp+320,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[29]),34);
        bufp->chgQData(oldp+322,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[30]),34);
        bufp->chgQData(oldp+324,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem[31]),34);
        bufp->chgBit(oldp+326,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__soft_reset));
        bufp->chgBit(oldp+327,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_err));
        bufp->chgBit(oldp+328,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_stopped));
        bufp->chgBit(oldp+329,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_active));
        bufp->chgBit(oldp+330,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_zero_length));
        bufp->chgBit(oldp+331,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty));
        bufp->chgIData(oldp+332,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr),26);
        bufp->chgSData(oldp+333,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines),16);
        bufp->chgSData(oldp+334,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step),16);
        bufp->chgSData(oldp+335,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words),14);
        bufp->chgSData(oldp+336,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_fill),10);
        bufp->chgBit(oldp+337,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full));
        bufp->chgBit(oldp+338,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty));
        bufp->chgCData(oldp+339,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__awskd_addr),2);
        bufp->chgIData(oldp+340,((IData)((vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data 
                                          >> 4U))),32);
        bufp->chgCData(oldp+341,((0xfU & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data))),4);
        bufp->chgIData(oldp+342,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__w_status_word),32);
        bufp->chgQData(oldp+343,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__wide_address),64);
        bufp->chgQData(oldp+345,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr),64);
        bufp->chgIData(oldp+347,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_cmdaddrlo),32);
        bufp->chgIData(oldp+348,((((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines) 
                                   << 0x10U) | ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words) 
                                                << 2U))),32);
        bufp->chgIData(oldp+349,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_config),32);
        bufp->chgBit(oldp+350,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__lag_start));
        bufp->chgBit(oldp+351,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__phantom_start));
        bufp->chgBit(oldp+352,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__start_burst));
        bufp->chgBit(oldp+353,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_none_outstanding));
        bufp->chgSData(oldp+354,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__max_burst),9);
        bufp->chgSData(oldp+355,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding),16);
        bufp->chgBit(oldp+356,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast));
        bufp->chgBit(oldp+357,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast));
        bufp->chgSData(oldp+358,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_frame_lines),16);
        bufp->chgSData(oldp+359,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_step),16);
        bufp->chgSData(oldp+360,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__r_line_words),14);
        bufp->chgBit(oldp+361,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_hlast));
        bufp->chgBit(oldp+362,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_vlast));
        bufp->chgSData(oldp+363,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_nlines),16);
        bufp->chgSData(oldp+364,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_words),14);
        bufp->chgIData(oldp+365,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr),27);
        bufp->chgIData(oldp+366,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_line_addr),27);
        bufp->chgSData(oldp+367,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_lines),16);
        bufp->chgSData(oldp+368,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats),14);
        bufp->chgBit(oldp+369,((0x100U > (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available))));
        bufp->chgCData(oldp+370,((0xffU & (~ (vlSelf->axidemo__DOT__video__DOT__videodma__DOT__req_addr 
                                              >> 2U)))),8);
        bufp->chgSData(oldp+371,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available),10);
        bufp->chgIData(oldp+372,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__new_control),32);
        bufp->chgQData(oldp+373,((((QData)((IData)(
                                                   ((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast) 
                                                    & (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_vlast)))) 
                                   << 0x21U) | (((QData)((IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__rd_hlast)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data))))),34);
        bufp->chgQData(oldp+375,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8),34);
        bufp->chgSData(oldp+377,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr),10);
        bufp->chgSData(oldp+378,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr),10);
        bufp->chgSData(oldp+379,((0x1ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr)))),9);
        bufp->chgBit(oldp+380,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr));
        bufp->chgCData(oldp+381,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_data),2);
        bufp->chgBit(oldp+382,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgCData(oldp+383,((3U & ((IData)(vlSelf->axidemo__DOT__video__DOT__dma_awaddr) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+384,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_data),2);
        bufp->chgBit(oldp+385,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgQData(oldp+386,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellinp__axilwskid__i_data),36);
        bufp->chgQData(oldp+388,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data),36);
        bufp->chgQData(oldp+390,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_data),36);
        bufp->chgBit(oldp+392,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+393,(vlSelf->axidemo__DOT__video__DOT__afifo_empty));
        bufp->chgBit(oldp+394,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset));
        bufp->chgCData(oldp+395,(vlSelf->axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset_pipe),2);
        bufp->chgBit(oldp+396,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_empty)))));
        bufp->chgCData(oldp+397,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_wgray),6);
        bufp->chgCData(oldp+398,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray_cross),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+399,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__afifo_full)))));
        bufp->chgBit(oldp+400,(vlSelf->axidemo__DOT__video__DOT__afifo_full));
        bufp->chgCData(oldp+401,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr),6);
        bufp->chgCData(oldp+402,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_rgray),6);
        bufp->chgCData(oldp+403,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr)))),6);
        bufp->chgCData(oldp+404,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__wgray),6);
        bufp->chgCData(oldp+405,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray_cross),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+406,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr),6);
        bufp->chgCData(oldp+407,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr)))),6);
        bufp->chgCData(oldp+408,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rgray),6);
        bufp->chgBit(oldp+409,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_rd_empty));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+410,(vlSelf->axidemo__DOT__video__DOT____Vcellinp__switch_clocks__i_wr));
        bufp->chgBit(oldp+411,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo));
        bufp->chgBit(oldp+412,(vlSelf->axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+413,(vlSelf->axidemo__DOT__video__DOT__pix_reset_n));
        bufp->chgCData(oldp+414,(vlSelf->axidemo__DOT__video__DOT__pix_reset_pipe),2);
        bufp->chgBit(oldp+415,((1U & (~ (IData)(vlSelf->axidemo__DOT__video__DOT__pix_reset_n)))));
    }
    bufp->chgBit(oldp+416,(vlSelf->i_clk));
    bufp->chgBit(oldp+417,(vlSelf->i_pixclk));
    bufp->chgBit(oldp+418,(vlSelf->i_reset));
    bufp->chgSData(oldp+419,(vlSelf->o_hdmi_red),10);
    bufp->chgSData(oldp+420,(vlSelf->o_hdmi_grn),10);
    bufp->chgSData(oldp+421,(vlSelf->o_hdmi_blu),10);
    bufp->chgBit(oldp+422,(vlSelf->S_AXI_AWVALID));
    bufp->chgBit(oldp+423,(vlSelf->S_AXI_AWREADY));
    bufp->chgSData(oldp+424,(vlSelf->S_AXI_AWADDR),11);
    bufp->chgCData(oldp+425,(vlSelf->S_AXI_AWPROT),3);
    bufp->chgBit(oldp+426,(vlSelf->S_AXI_WVALID));
    bufp->chgBit(oldp+427,(vlSelf->S_AXI_WREADY));
    bufp->chgIData(oldp+428,(vlSelf->S_AXI_WDATA),32);
    bufp->chgCData(oldp+429,(vlSelf->S_AXI_WSTRB),4);
    bufp->chgBit(oldp+430,(vlSelf->S_AXI_BVALID));
    bufp->chgBit(oldp+431,(vlSelf->S_AXI_BREADY));
    bufp->chgCData(oldp+432,(vlSelf->S_AXI_BRESP),2);
    bufp->chgBit(oldp+433,(vlSelf->S_AXI_ARVALID));
    bufp->chgBit(oldp+434,(vlSelf->S_AXI_ARREADY));
    bufp->chgSData(oldp+435,(vlSelf->S_AXI_ARADDR),11);
    bufp->chgCData(oldp+436,(vlSelf->S_AXI_ARPROT),3);
    bufp->chgBit(oldp+437,(vlSelf->S_AXI_RVALID));
    bufp->chgBit(oldp+438,(vlSelf->S_AXI_RREADY));
    bufp->chgIData(oldp+439,(vlSelf->S_AXI_RDATA),32);
    bufp->chgCData(oldp+440,(vlSelf->S_AXI_RRESP),2);
    bufp->chgBit(oldp+441,(vlSelf->axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN));
    bufp->chgBit(oldp+442,(vlSelf->axidemo__DOT__video__DOT__axil_write_ready));
    bufp->chgSData(oldp+443,(vlSelf->axidemo__DOT__video__DOT__awskd_addr),9);
    bufp->chgIData(oldp+444,(vlSelf->axidemo__DOT__video__DOT__cmap_rdata),24);
    bufp->chgBit(oldp+445,(vlSelf->axidemo__DOT__video__DOT__new_mode));
    bufp->chgSData(oldp+446,((0x1ffU & ((IData)(vlSelf->S_AXI_ARADDR) 
                                        >> 2U))),9);
    bufp->chgSData(oldp+447,((0x1ffU & ((IData)(vlSelf->S_AXI_AWADDR) 
                                        >> 2U))),9);
    bufp->chgQData(oldp+448,(vlSelf->axidemo__DOT__video__DOT____Vcellinp__axilwskid__i_data),36);
    bufp->chgBit(oldp+450,(((IData)(vlSelf->axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0) 
                            & ((IData)(vlSelf->axidemo__DOT__video__DOT__awskd_addr) 
                               >> 8U))));
    bufp->chgQData(oldp+451,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__mem
                             [(0x1fU & (IData)(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr))]),34);
    bufp->chgBit(oldp+453,(vlSelf->axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_read));
}

void Vaxihdmi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root__trace_cleanup\n"); );
    // Init
    Vaxihdmi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxihdmi___024root*>(voidSelf);
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
