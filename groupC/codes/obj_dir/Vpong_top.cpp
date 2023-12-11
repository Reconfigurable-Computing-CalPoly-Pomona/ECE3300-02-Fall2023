// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpong_top__pch.h"

//============================================================
// Constructors

Vpong_top::Vpong_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpong_top__Syms(contextp(), _vcname__, this)}
    , top_clk{vlSymsp->TOP.top_clk}
    , pix_clk{vlSymsp->TOP.pix_clk}
    , reset{vlSymsp->TOP.reset}
    , key_clk{vlSymsp->TOP.key_clk}
    , key_data{vlSymsp->TOP.key_data}
    , inputsw{vlSymsp->TOP.inputsw}
    , btn{vlSymsp->TOP.btn}
    , key_uart{vlSymsp->TOP.key_uart}
    , hsync{vlSymsp->TOP.hsync}
    , vsync{vlSymsp->TOP.vsync}
    , ssd_port_cc{vlSymsp->TOP.ssd_port_cc}
    , ssd_port_an_out{vlSymsp->TOP.ssd_port_an_out}
    , ssd_port_odp{vlSymsp->TOP.ssd_port_odp}
    , rgb{vlSymsp->TOP.rgb}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpong_top::Vpong_top(const char* _vcname__)
    : Vpong_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpong_top::~Vpong_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpong_top___024root___eval_debug_assertions(Vpong_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vpong_top___024root___eval_static(Vpong_top___024root* vlSelf);
void Vpong_top___024root___eval_initial(Vpong_top___024root* vlSelf);
void Vpong_top___024root___eval_settle(Vpong_top___024root* vlSelf);
void Vpong_top___024root___eval(Vpong_top___024root* vlSelf);

void Vpong_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpong_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpong_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpong_top___024root___eval_static(&(vlSymsp->TOP));
        Vpong_top___024root___eval_initial(&(vlSymsp->TOP));
        Vpong_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpong_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpong_top::eventsPending() { return false; }

uint64_t Vpong_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpong_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpong_top___024root___eval_final(Vpong_top___024root* vlSelf);

VL_ATTR_COLD void Vpong_top::final() {
    Vpong_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpong_top::hierName() const { return vlSymsp->name(); }
const char* Vpong_top::modelName() const { return "Vpong_top"; }
unsigned Vpong_top::threads() const { return 1; }
void Vpong_top::prepareClone() const { contextp()->prepareClone(); }
void Vpong_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vpong_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpong_top::trace()' called on model that was Verilated without --trace option");
}
