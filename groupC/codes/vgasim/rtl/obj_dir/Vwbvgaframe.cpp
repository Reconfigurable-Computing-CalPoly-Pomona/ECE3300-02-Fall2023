// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vwbvgaframe__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vwbvgaframe::Vwbvgaframe(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vwbvgaframe__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_pixclk{vlSymsp->TOP.i_pixclk}
    , i_reset{vlSymsp->TOP.i_reset}
    , i_en{vlSymsp->TOP.i_en}
    , i_test{vlSymsp->TOP.i_test}
    , o_wb_cyc{vlSymsp->TOP.o_wb_cyc}
    , o_wb_stb{vlSymsp->TOP.o_wb_stb}
    , i_wb_ack{vlSymsp->TOP.i_wb_ack}
    , i_wb_err{vlSymsp->TOP.i_wb_err}
    , i_wb_stall{vlSymsp->TOP.i_wb_stall}
    , o_vga_vsync{vlSymsp->TOP.o_vga_vsync}
    , o_vga_hsync{vlSymsp->TOP.o_vga_hsync}
    , o_vga_red{vlSymsp->TOP.o_vga_red}
    , o_vga_grn{vlSymsp->TOP.o_vga_grn}
    , o_vga_blu{vlSymsp->TOP.o_vga_blu}
    , o_interrupt{vlSymsp->TOP.o_interrupt}
    , i_line_words{vlSymsp->TOP.i_line_words}
    , i_hm_width{vlSymsp->TOP.i_hm_width}
    , i_hm_porch{vlSymsp->TOP.i_hm_porch}
    , i_hm_synch{vlSymsp->TOP.i_hm_synch}
    , i_hm_raw{vlSymsp->TOP.i_hm_raw}
    , i_vm_height{vlSymsp->TOP.i_vm_height}
    , i_vm_porch{vlSymsp->TOP.i_vm_porch}
    , i_vm_synch{vlSymsp->TOP.i_vm_synch}
    , i_vm_raw{vlSymsp->TOP.i_vm_raw}
    , i_base_addr{vlSymsp->TOP.i_base_addr}
    , o_wb_addr{vlSymsp->TOP.o_wb_addr}
    , i_wb_data{vlSymsp->TOP.i_wb_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vwbvgaframe::Vwbvgaframe(const char* _vcname__)
    : Vwbvgaframe(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vwbvgaframe::~Vwbvgaframe() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vwbvgaframe___024root___eval_debug_assertions(Vwbvgaframe___024root* vlSelf);
#endif  // VL_DEBUG
void Vwbvgaframe___024root___eval_static(Vwbvgaframe___024root* vlSelf);
void Vwbvgaframe___024root___eval_initial(Vwbvgaframe___024root* vlSelf);
void Vwbvgaframe___024root___eval_settle(Vwbvgaframe___024root* vlSelf);
void Vwbvgaframe___024root___eval(Vwbvgaframe___024root* vlSelf);

void Vwbvgaframe::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vwbvgaframe::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vwbvgaframe___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vwbvgaframe___024root___eval_static(&(vlSymsp->TOP));
        Vwbvgaframe___024root___eval_initial(&(vlSymsp->TOP));
        Vwbvgaframe___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vwbvgaframe___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vwbvgaframe::eventsPending() { return false; }

uint64_t Vwbvgaframe::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vwbvgaframe::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vwbvgaframe___024root___eval_final(Vwbvgaframe___024root* vlSelf);

VL_ATTR_COLD void Vwbvgaframe::final() {
    Vwbvgaframe___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vwbvgaframe::hierName() const { return vlSymsp->name(); }
const char* Vwbvgaframe::modelName() const { return "Vwbvgaframe"; }
unsigned Vwbvgaframe::threads() const { return 1; }
void Vwbvgaframe::prepareClone() const { contextp()->prepareClone(); }
void Vwbvgaframe::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vwbvgaframe::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vwbvgaframe___024root__trace_init_top(Vwbvgaframe___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vwbvgaframe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwbvgaframe___024root*>(voidSelf);
    Vwbvgaframe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vwbvgaframe___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vwbvgaframe___024root__trace_register(Vwbvgaframe___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vwbvgaframe::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vwbvgaframe::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vwbvgaframe___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
