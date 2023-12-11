// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxihdmi.h for the primary calling header

#ifndef VERILATED_VAXIHDMI___024ROOT_H_
#define VERILATED_VAXIHDMI___024ROOT_H_  // guard

#include "verilated.h"


class Vaxihdmi__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaxihdmi___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_pixclk,0,0);
        CData/*0:0*/ axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN;
        CData/*0:0*/ axidemo__DOT__video__DOT__pix_reset_n;
        VL_IN8(i_reset,0,0);
        VL_IN8(S_AXI_AWVALID,0,0);
        VL_OUT8(S_AXI_AWREADY,0,0);
        VL_IN8(S_AXI_AWPROT,2,0);
        VL_IN8(S_AXI_WVALID,0,0);
        VL_OUT8(S_AXI_WREADY,0,0);
        VL_IN8(S_AXI_WSTRB,3,0);
        VL_OUT8(S_AXI_BVALID,0,0);
        VL_IN8(S_AXI_BREADY,0,0);
        VL_OUT8(S_AXI_BRESP,1,0);
        VL_IN8(S_AXI_ARVALID,0,0);
        VL_OUT8(S_AXI_ARREADY,0,0);
        VL_IN8(S_AXI_ARPROT,2,0);
        VL_OUT8(S_AXI_RVALID,0,0);
        VL_IN8(S_AXI_RREADY,0,0);
        VL_OUT8(S_AXI_RRESP,1,0);
        CData/*0:0*/ axidemo__DOT__mem_arready;
        CData/*0:0*/ axidemo__DOT__mem_arvalid;
        CData/*0:0*/ axidemo__DOT__mem_rvalid;
        CData/*0:0*/ axidemo__DOT__ram_we;
        CData/*0:0*/ axidemo__DOT__ram_rd;
        CData/*3:0*/ axidemo__DOT__ram_wstrb;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__r_bid;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__r_bvalid;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__axi_bid;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__axi_bvalid;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__axi_awready;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__axi_wready;
        CData/*7:0*/ axidemo__DOT__memcontrol__DOT__wlen;
        CData/*2:0*/ axidemo__DOT__memcontrol__DOT__wsize;
        CData/*1:0*/ axidemo__DOT__memcontrol__DOT__wburst;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__m_awvalid;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__m_awready;
        CData/*7:0*/ axidemo__DOT__memcontrol__DOT__rlen;
        CData/*2:0*/ axidemo__DOT__memcontrol__DOT__rsize;
        CData/*1:0*/ axidemo__DOT__memcontrol__DOT__rburst;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__rid;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__rlock;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__axi_arready;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__rskd_valid;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__rskd_last;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__rskd_lock;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__rskd_ready;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__rskd_id;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__exclusive_write;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__block_write;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__axi_exclusive_write;
        CData/*1:0*/ axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber3;
        CData/*2:0*/ axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber2;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_valid;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_valid;
        CData/*0:0*/ axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__arskd_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__awskd_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__wskd_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__axil_write_ready;
        CData/*0:0*/ axidemo__DOT__video__DOT__axil_bvalid;
        CData/*0:0*/ axidemo__DOT__video__DOT__axil_read_ready;
        CData/*0:0*/ axidemo__DOT__video__DOT__axil_read_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__afifo_empty;
    };
    struct {
        CData/*0:0*/ axidemo__DOT__video__DOT__afifo_full;
        CData/*1:0*/ axidemo__DOT__video__DOT__pix_reset_pipe;
        CData/*0:0*/ axidemo__DOT__video__DOT__dma_wvalid;
        CData/*3:0*/ axidemo__DOT__video__DOT__dma_awaddr;
        CData/*0:0*/ axidemo__DOT__video__DOT__dma_awready;
        CData/*0:0*/ axidemo__DOT__video__DOT__dma_wready;
        CData/*3:0*/ axidemo__DOT__video__DOT__dma_wstrb;
        CData/*0:0*/ axidemo__DOT__video__DOT__dma_arready;
        CData/*1:0*/ axidemo__DOT__video__DOT__new_image_dimension;
        CData/*2:0*/ axidemo__DOT__video__DOT__cmap_mode;
        CData/*0:0*/ axidemo__DOT__video__DOT__read_staging;
        CData/*7:0*/ axidemo__DOT__video__DOT__cmap_waddr;
        CData/*1:0*/ axidemo__DOT__video__DOT__staging_addr;
        CData/*0:0*/ axidemo__DOT__video__DOT__cmap_read_flag;
        CData/*0:0*/ axidemo__DOT__video__DOT__dma_read_flag;
        CData/*0:0*/ axidemo__DOT__video__DOT__new_mode;
        CData/*0:0*/ axidemo__DOT__video__DOT__cmap_read;
        CData/*0:0*/ axidemo__DOT__video__DOT__pix_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__pix_ready;
        CData/*0:0*/ axidemo__DOT__video__DOT____Vcellinp__switch_clocks__i_wr;
        CData/*0:0*/ axidemo__DOT__video__DOT____VdfgTmp_h023f5358__0;
        CData/*0:0*/ axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__soft_reset;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__r_err;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__r_stopped;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__cfg_active;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__cfg_zero_length;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__cfg_dirty;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__read_from_fifo;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__awskd_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__axil_write_ready;
        CData/*1:0*/ axidemo__DOT__video__DOT__videodma__DOT__awskd_addr;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__wskd_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__axil_bvalid;
        CData/*1:0*/ axidemo__DOT__video__DOT__videodma__DOT__arskd_addr;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__axil_read_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__axi_arvalid;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__lag_start;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__phantom_start;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__start_burst;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__ar_none_outstanding;
        CData/*7:0*/ axidemo__DOT__video__DOT__videodma__DOT__axi_arlen;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__vlast;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__req_hlast;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__req_vlast;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__rd_hlast;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__rd_vlast;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_valid;
        CData/*1:0*/ axidemo__DOT__video__DOT__videodma__DOT__axilawskid__DOT__LOGIC__DOT__r_data;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_valid;
        CData/*1:0*/ axidemo__DOT__video__DOT__videodma__DOT__axilarskid__DOT__LOGIC__DOT__r_data;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_full;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__r_empty;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_wr;
        CData/*0:0*/ axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__w_rd;
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__rd_addr;
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__wr_addr;
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__rd_wgray;
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__wr_rgray;
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__next_rd_addr;
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__next_wr_addr;
    };
    struct {
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__rgray;
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__wgray;
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__rgray_cross;
        CData/*5:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__wgray_cross;
        CData/*0:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_read;
        CData/*0:0*/ axidemo__DOT__video__DOT__switch_clocks__DOT__lcl_rd_empty;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__skd_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__s_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__skd_ready;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__s_frame;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__s_hlast;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__s_last_in_word;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__s_last_word_in_packet;
        CData/*4:0*/ axidemo__DOT__video__DOT__s2pix__DOT__scount;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__s_step;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__c_hlast;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__c_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__c_frame;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__c_step;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__pix_frame;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__pix_hlast;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__pix_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__r_newline;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__r_newframe;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__lost_sync;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__vsync;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hsync;
        CData/*1:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_type;
        CData/*7:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__red_pixel;
        CData/*7:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__grn_pixel;
        CData/*7:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__blu_pixel;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__pre_line;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__first_frame;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__w_rd;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hrd;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__vrd;
        CData/*0:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset;
        CData/*1:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__pix_reset_pipe;
        CData/*1:0*/ axidemo__DOT__video__DOT__genhdmi__DOT____Vcellinp__hdmi_encoder_ch0____pinNumber3;
        CData/*1:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__r_ctl;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__r_aux;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ones_counter;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__qm_ones_counter;
        CData/*4:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__count;
        CData/*1:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__r_ctl;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ones_counter;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__qm_ones_counter;
        CData/*4:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__count;
        CData/*1:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_dtype;
        CData/*1:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_ctl;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__r_aux;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ones_counter;
        CData/*3:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__qm_ones_counter;
        CData/*4:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__count;
        CData/*1:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__s_dtype;
        CData/*7:0*/ __Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0;
        CData/*4:0*/ __Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0;
        CData/*7:0*/ __Vdlyvval__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0;
        CData/*0:0*/ __Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v0;
    };
    struct {
        CData/*7:0*/ __Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1;
        CData/*4:0*/ __Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1;
        CData/*7:0*/ __Vdlyvval__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1;
        CData/*0:0*/ __Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v1;
        CData/*7:0*/ __Vdlyvdim0__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2;
        CData/*4:0*/ __Vdlyvlsb__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2;
        CData/*7:0*/ __Vdlyvval__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2;
        CData/*0:0*/ __Vdlyvset__axidemo__DOT__video__DOT__s2pix__DOT__cmap__v2;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__axidemo__DOT____Vcellinp__memcontrol__S_AXI_ARESETN__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_pixclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__axidemo__DOT__video__DOT__pix_reset_n__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(o_hdmi_red,9,0);
        VL_OUT16(o_hdmi_grn,9,0);
        VL_OUT16(o_hdmi_blu,9,0);
        VL_IN16(S_AXI_AWADDR,10,0);
        VL_IN16(S_AXI_ARADDR,10,0);
        SData/*8:0*/ axidemo__DOT__memcontrol__DOT__axi_rlen;
        SData/*8:0*/ axidemo__DOT__video__DOT__awskd_addr;
        SData/*8:0*/ axidemo__DOT__video__DOT__arskd_addr;
        SData/*11:0*/ axidemo__DOT__video__DOT__hm_width;
        SData/*11:0*/ axidemo__DOT__video__DOT__hm_porch;
        SData/*11:0*/ axidemo__DOT__video__DOT__hm_synch;
        SData/*11:0*/ axidemo__DOT__video__DOT__hm_raw;
        SData/*11:0*/ axidemo__DOT__video__DOT__vm_height;
        SData/*11:0*/ axidemo__DOT__video__DOT__vm_porch;
        SData/*11:0*/ axidemo__DOT__video__DOT__vm_synch;
        SData/*11:0*/ axidemo__DOT__video__DOT__vm_raw;
        SData/*11:0*/ axidemo__DOT__video__DOT__words_per_line;
        SData/*8:0*/ axidemo__DOT__video__DOT__axilawskid__DOT__LOGIC__DOT__r_data;
        SData/*8:0*/ axidemo__DOT__video__DOT__axilarskid__DOT__LOGIC__DOT__r_data;
        SData/*15:0*/ axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_lines;
        SData/*15:0*/ axidemo__DOT__video__DOT__videodma__DOT__cfg_line_step;
        SData/*13:0*/ axidemo__DOT__video__DOT__videodma__DOT__cfg_line_words;
        SData/*9:0*/ axidemo__DOT__video__DOT__videodma__DOT__fifo_fill;
        SData/*8:0*/ axidemo__DOT__video__DOT__videodma__DOT__max_burst;
        SData/*15:0*/ axidemo__DOT__video__DOT__videodma__DOT__ar_bursts_outstanding;
        SData/*15:0*/ axidemo__DOT__video__DOT__videodma__DOT__r_frame_lines;
        SData/*15:0*/ axidemo__DOT__video__DOT__videodma__DOT__r_line_step;
        SData/*13:0*/ axidemo__DOT__video__DOT__videodma__DOT__r_line_words;
        SData/*15:0*/ axidemo__DOT__video__DOT__videodma__DOT__req_nlines;
        SData/*13:0*/ axidemo__DOT__video__DOT__videodma__DOT__req_line_words;
        SData/*15:0*/ axidemo__DOT__video__DOT__videodma__DOT__rd_lines;
        SData/*13:0*/ axidemo__DOT__video__DOT__videodma__DOT__rd_line_beats;
        SData/*9:0*/ axidemo__DOT__video__DOT__videodma__DOT__fifo_space_available;
        SData/*9:0*/ axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__wr_addr;
        SData/*9:0*/ axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__rd_addr;
        SData/*11:0*/ axidemo__DOT__video__DOT__s2pix__DOT__s_remaining;
        SData/*11:0*/ axidemo__DOT__video__DOT__s2pix__DOT__pix_count;
        SData/*11:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hpos;
        SData/*11:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__vpos;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__ctrl_word;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__aux_word;
        SData/*8:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_m;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__pix_word;
        SData/*8:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__q_mp;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__brv_word;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__ctrl_word;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__aux_word;
        SData/*8:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_m;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__pix_word;
    };
    struct {
        SData/*8:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__q_mp;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__brv_word;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__ctrl_word;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__aux_word;
        SData/*8:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_m;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__pix_word;
        SData/*8:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__q_mp;
        SData/*9:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__brv_word;
        VL_IN(S_AXI_WDATA,31,0);
        VL_OUT(S_AXI_RDATA,31,0);
        IData/*23:0*/ axidemo__DOT__ram_waddr;
        IData/*31:0*/ axidemo__DOT__ram_wdata;
        IData/*31:0*/ axidemo__DOT__ram_rdata;
        IData/*31:0*/ axidemo__DOT__rk;
        IData/*25:0*/ axidemo__DOT__memcontrol__DOT__waddr;
        IData/*25:0*/ axidemo__DOT__memcontrol__DOT__next_wr_addr;
        IData/*25:0*/ axidemo__DOT__memcontrol__DOT__next_rd_addr;
        IData/*25:0*/ axidemo__DOT__memcontrol__DOT__raddr;
        IData/*25:0*/ axidemo__DOT__memcontrol__DOT____Vcellinp__get_next_rd_addr____pinNumber1;
        IData/*25:0*/ axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__wrap_mask;
        IData/*25:0*/ axidemo__DOT__memcontrol__DOT__get_next_wr_addr__DOT__increment;
        IData/*25:0*/ axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__wrap_mask;
        IData/*25:0*/ axidemo__DOT__memcontrol__DOT__get_next_rd_addr__DOT__increment;
        IData/*31:0*/ axidemo__DOT__video__DOT__axil_read_data;
        IData/*31:0*/ axidemo__DOT__video__DOT__dma_wdata;
        IData/*31:0*/ axidemo__DOT__video__DOT__clk_speed;
        IData/*31:0*/ axidemo__DOT__video__DOT__staging_data;
        IData/*31:0*/ axidemo__DOT__video__DOT__dma_return_data;
        IData/*31:0*/ axidemo__DOT__video__DOT__cmap_return_data;
        IData/*23:0*/ axidemo__DOT__video__DOT__cmap_rdata;
        IData/*31:0*/ axidemo__DOT__video__DOT__new_image_size;
        IData/*31:0*/ axidemo__DOT__video__DOT__new_image_porch;
        IData/*31:0*/ axidemo__DOT__video__DOT__new_image_synch;
        IData/*31:0*/ axidemo__DOT__video__DOT__new_image_raw;
        IData/*31:0*/ axidemo__DOT__video__DOT__new_clk_speed;
        IData/*31:0*/ axidemo__DOT__video__DOT__image_size;
        IData/*31:0*/ axidemo__DOT__video__DOT__image_porch;
        IData/*31:0*/ axidemo__DOT__video__DOT__image_synch;
        IData/*31:0*/ axidemo__DOT__video__DOT__image_raw;
        IData/*31:0*/ axidemo__DOT__video__DOT__apply_wstrb__Vstatic__k;
        IData/*25:0*/ axidemo__DOT__video__DOT__videodma__DOT__cfg_frame_addr;
        IData/*31:0*/ axidemo__DOT__video__DOT__videodma__DOT__axil_read_data;
        IData/*31:0*/ axidemo__DOT__video__DOT__videodma__DOT__w_status_word;
        IData/*31:0*/ axidemo__DOT__video__DOT__videodma__DOT__new_cmdaddrlo;
        IData/*31:0*/ axidemo__DOT__video__DOT__videodma__DOT__new_config;
        IData/*25:0*/ axidemo__DOT__video__DOT__videodma__DOT__axi_araddr;
        IData/*26:0*/ axidemo__DOT__video__DOT__videodma__DOT__req_addr;
        IData/*26:0*/ axidemo__DOT__video__DOT__videodma__DOT__req_line_addr;
        IData/*31:0*/ axidemo__DOT__video__DOT__videodma__DOT__new_control;
        IData/*31:0*/ axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__Vstatic__k;
        IData/*31:0*/ axidemo__DOT__video__DOT__s2pix__DOT__sreg;
        IData/*23:0*/ axidemo__DOT__video__DOT__s2pix__DOT__bw_pix;
        IData/*23:0*/ axidemo__DOT__video__DOT__s2pix__DOT__gray_2;
        IData/*23:0*/ axidemo__DOT__video__DOT__s2pix__DOT__gray_4;
        IData/*23:0*/ axidemo__DOT__video__DOT__s2pix__DOT__cmap_4;
        IData/*23:0*/ axidemo__DOT__video__DOT__s2pix__DOT__cmap_8;
        IData/*23:0*/ axidemo__DOT__video__DOT__s2pix__DOT__clr_8;
        IData/*23:0*/ axidemo__DOT__video__DOT__s2pix__DOT__clr_16;
        IData/*23:0*/ axidemo__DOT__video__DOT__s2pix__DOT__direct_clr;
        IData/*23:0*/ axidemo__DOT__video__DOT__s2pix__DOT__pix_data;
        IData/*31:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch0__DOT__k;
        IData/*31:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch1__DOT__k;
        IData/*31:0*/ axidemo__DOT__video__DOT__genhdmi__DOT__hdmi_encoder_ch2__DOT__k;
        IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__0__Vfuncout;
    };
    struct {
        IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__1__Vfuncout;
        IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__2__Vfuncout;
        IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__3__Vfuncout;
        IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__apply_wstrb__4__Vfuncout;
        IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__5__Vfuncout;
        IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__6__Vfuncout;
        IData/*31:0*/ __Vfunc_axidemo__DOT__video__DOT__videodma__DOT__apply_wstrb__7__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*40:0*/ axidemo__DOT__memcontrol__DOT____Vcellout__awbuf__o_data;
        QData/*40:0*/ axidemo__DOT__memcontrol__DOT____Vcellinp__awbuf__i_data;
        QData/*34:0*/ axidemo__DOT__memcontrol__DOT____Vcellout__rskid__o_data;
        QData/*34:0*/ axidemo__DOT__memcontrol__DOT____Vcellinp__rskid__i_data;
        QData/*40:0*/ axidemo__DOT__memcontrol__DOT__awbuf__DOT__LOGIC__DOT__r_data;
        QData/*34:0*/ axidemo__DOT__memcontrol__DOT__rskid__DOT__LOGIC__DOT__r_data;
        QData/*35:0*/ axidemo__DOT__video__DOT____Vcellout__axilwskid__o_data;
        QData/*35:0*/ axidemo__DOT__video__DOT____Vcellinp__axilwskid__i_data;
        QData/*33:0*/ axidemo__DOT__video__DOT____Vcellout__switch_clocks__o_rd_data;
        QData/*35:0*/ axidemo__DOT__video__DOT__axilwskid__DOT__LOGIC__DOT__r_data;
        QData/*63:0*/ axidemo__DOT__video__DOT__videodma__DOT__wide_address;
        QData/*63:0*/ axidemo__DOT__video__DOT__videodma__DOT__new_wideaddr;
        QData/*35:0*/ axidemo__DOT__video__DOT__videodma__DOT____Vcellout__axilwskid__o_data;
        QData/*35:0*/ axidemo__DOT__video__DOT__videodma__DOT____Vcellinp__axilwskid__i_data;
        QData/*33:0*/ axidemo__DOT__video__DOT__videodma__DOT____Vcellout__GEN_SPACE_AVAILBLE__DOT__sfifo____pinNumber8;
        QData/*35:0*/ axidemo__DOT__video__DOT__videodma__DOT__axilwskid__DOT__LOGIC__DOT__r_data;
        QData/*33:0*/ axidemo__DOT__video__DOT__s2pix__DOT____Vcellout__tskd__o_data;
        QData/*33:0*/ axidemo__DOT__video__DOT__s2pix__DOT____Vcellinp__tskd__i_data;
        QData/*33:0*/ axidemo__DOT__video__DOT__s2pix__DOT__tskd__DOT__LOGIC__DOT__r_data;
        VlUnpacked<IData/*31:0*/, 16777216> axidemo__DOT__ram;
        VlUnpacked<QData/*33:0*/, 512> axidemo__DOT__video__DOT__videodma__DOT__GEN_SPACE_AVAILBLE__DOT__sfifo__DOT__mem;
        VlUnpacked<QData/*33:0*/, 32> axidemo__DOT__video__DOT__switch_clocks__DOT__mem;
        VlUnpacked<IData/*23:0*/, 256> axidemo__DOT__video__DOT__s2pix__DOT__cmap;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaxihdmi__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxihdmi___024root(Vaxihdmi__Syms* symsp, const char* v__name);
    ~Vaxihdmi___024root();
    VL_UNCOPYABLE(Vaxihdmi___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
