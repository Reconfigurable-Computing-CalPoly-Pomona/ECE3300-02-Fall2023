// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxihdmi.h for the primary calling header

#include "Vaxihdmi__pch.h"
#include "Vaxihdmi__Syms.h"
#include "Vaxihdmi___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxihdmi___024root___dump_triggers__stl(Vaxihdmi___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxihdmi___024root___eval_triggers__stl(Vaxihdmi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxihdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxihdmi___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaxihdmi___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
