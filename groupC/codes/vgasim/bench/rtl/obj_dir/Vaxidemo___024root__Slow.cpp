// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxidemo.h for the primary calling header

#include "Vaxidemo__pch.h"
#include "Vaxidemo__Syms.h"
#include "Vaxidemo___024root.h"

void Vaxidemo___024root___ctor_var_reset(Vaxidemo___024root* vlSelf);

Vaxidemo___024root::Vaxidemo___024root(Vaxidemo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaxidemo___024root___ctor_var_reset(this);
}

void Vaxidemo___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaxidemo___024root::~Vaxidemo___024root() {
}
