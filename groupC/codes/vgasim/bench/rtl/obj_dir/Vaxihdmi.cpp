// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaxihdmi__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vaxihdmi::Vaxihdmi(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaxihdmi__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_pixclk{vlSymsp->TOP.i_pixclk}
    , i_reset{vlSymsp->TOP.i_reset}
    , S_AXI_AWVALID{vlSymsp->TOP.S_AXI_AWVALID}
    , S_AXI_AWREADY{vlSymsp->TOP.S_AXI_AWREADY}
    , S_AXI_AWPROT{vlSymsp->TOP.S_AXI_AWPROT}
    , S_AXI_WVALID{vlSymsp->TOP.S_AXI_WVALID}
    , S_AXI_WREADY{vlSymsp->TOP.S_AXI_WREADY}
    , S_AXI_WSTRB{vlSymsp->TOP.S_AXI_WSTRB}
    , S_AXI_BVALID{vlSymsp->TOP.S_AXI_BVALID}
    , S_AXI_BREADY{vlSymsp->TOP.S_AXI_BREADY}
    , S_AXI_BRESP{vlSymsp->TOP.S_AXI_BRESP}
    , S_AXI_ARVALID{vlSymsp->TOP.S_AXI_ARVALID}
    , S_AXI_ARREADY{vlSymsp->TOP.S_AXI_ARREADY}
    , S_AXI_ARPROT{vlSymsp->TOP.S_AXI_ARPROT}
    , S_AXI_RVALID{vlSymsp->TOP.S_AXI_RVALID}
    , S_AXI_RREADY{vlSymsp->TOP.S_AXI_RREADY}
    , S_AXI_RRESP{vlSymsp->TOP.S_AXI_RRESP}
    , o_hdmi_red{vlSymsp->TOP.o_hdmi_red}
    , o_hdmi_grn{vlSymsp->TOP.o_hdmi_grn}
    , o_hdmi_blu{vlSymsp->TOP.o_hdmi_blu}
    , S_AXI_AWADDR{vlSymsp->TOP.S_AXI_AWADDR}
    , S_AXI_ARADDR{vlSymsp->TOP.S_AXI_ARADDR}
    , S_AXI_WDATA{vlSymsp->TOP.S_AXI_WDATA}
    , S_AXI_RDATA{vlSymsp->TOP.S_AXI_RDATA}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vaxihdmi::Vaxihdmi(const char* _vcname__)
    : Vaxihdmi(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaxihdmi::~Vaxihdmi() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaxihdmi___024root___eval_debug_assertions(Vaxihdmi___024root* vlSelf);
#endif  // VL_DEBUG
void Vaxihdmi___024root___eval_static(Vaxihdmi___024root* vlSelf);
void Vaxihdmi___024root___eval_initial(Vaxihdmi___024root* vlSelf);
void Vaxihdmi___024root___eval_settle(Vaxihdmi___024root* vlSelf);
void Vaxihdmi___024root___eval(Vaxihdmi___024root* vlSelf);

void Vaxihdmi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaxihdmi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaxihdmi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaxihdmi___024root___eval_static(&(vlSymsp->TOP));
        Vaxihdmi___024root___eval_initial(&(vlSymsp->TOP));
        Vaxihdmi___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaxihdmi___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaxihdmi::eventsPending() { return false; }

uint64_t Vaxihdmi::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaxihdmi::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaxihdmi___024root___eval_final(Vaxihdmi___024root* vlSelf);

VL_ATTR_COLD void Vaxihdmi::final() {
    Vaxihdmi___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaxihdmi::hierName() const { return vlSymsp->name(); }
const char* Vaxihdmi::modelName() const { return "Vaxihdmi"; }
unsigned Vaxihdmi::threads() const { return 1; }
void Vaxihdmi::prepareClone() const { contextp()->prepareClone(); }
void Vaxihdmi::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vaxihdmi::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaxihdmi___024root__trace_init_top(Vaxihdmi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaxihdmi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxihdmi___024root*>(voidSelf);
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vaxihdmi___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaxihdmi___024root__trace_register(Vaxihdmi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaxihdmi::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaxihdmi::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaxihdmi___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
