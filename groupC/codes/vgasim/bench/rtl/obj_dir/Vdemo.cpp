// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdemo__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdemo::Vdemo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdemo__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_pixclk{vlSymsp->TOP.i_pixclk}
    , i_reset{vlSymsp->TOP.i_reset}
    , i_test{vlSymsp->TOP.i_test}
    , o_vga_vsync{vlSymsp->TOP.o_vga_vsync}
    , o_vga_hsync{vlSymsp->TOP.o_vga_hsync}
    , o_vga_red{vlSymsp->TOP.o_vga_red}
    , o_vga_grn{vlSymsp->TOP.o_vga_grn}
    , o_vga_blu{vlSymsp->TOP.o_vga_blu}
    , o_interrupt{vlSymsp->TOP.o_interrupt}
    , i_hm_width{vlSymsp->TOP.i_hm_width}
    , i_hm_porch{vlSymsp->TOP.i_hm_porch}
    , i_hm_synch{vlSymsp->TOP.i_hm_synch}
    , i_hm_raw{vlSymsp->TOP.i_hm_raw}
    , i_vm_height{vlSymsp->TOP.i_vm_height}
    , i_vm_porch{vlSymsp->TOP.i_vm_porch}
    , i_vm_synch{vlSymsp->TOP.i_vm_synch}
    , i_vm_raw{vlSymsp->TOP.i_vm_raw}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdemo::Vdemo(const char* _vcname__)
    : Vdemo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdemo::~Vdemo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdemo___024root___eval_debug_assertions(Vdemo___024root* vlSelf);
#endif  // VL_DEBUG
void Vdemo___024root___eval_static(Vdemo___024root* vlSelf);
void Vdemo___024root___eval_initial(Vdemo___024root* vlSelf);
void Vdemo___024root___eval_settle(Vdemo___024root* vlSelf);
void Vdemo___024root___eval(Vdemo___024root* vlSelf);

void Vdemo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdemo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdemo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdemo___024root___eval_static(&(vlSymsp->TOP));
        Vdemo___024root___eval_initial(&(vlSymsp->TOP));
        Vdemo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdemo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdemo::eventsPending() { return false; }

uint64_t Vdemo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdemo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdemo___024root___eval_final(Vdemo___024root* vlSelf);

VL_ATTR_COLD void Vdemo::final() {
    Vdemo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdemo::hierName() const { return vlSymsp->name(); }
const char* Vdemo::modelName() const { return "Vdemo"; }
unsigned Vdemo::threads() const { return 1; }
void Vdemo::prepareClone() const { contextp()->prepareClone(); }
void Vdemo::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdemo::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdemo___024root__trace_init_top(Vdemo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdemo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemo___024root*>(voidSelf);
    Vdemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdemo___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdemo___024root__trace_register(Vdemo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdemo::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdemo::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdemo___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
