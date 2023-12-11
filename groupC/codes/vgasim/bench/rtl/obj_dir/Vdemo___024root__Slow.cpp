// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemo.h for the primary calling header

#include "Vdemo__pch.h"
#include "Vdemo__Syms.h"
#include "Vdemo___024root.h"

void Vdemo___024root___ctor_var_reset(Vdemo___024root* vlSelf);

Vdemo___024root::Vdemo___024root(Vdemo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdemo___024root___ctor_var_reset(this);
}

void Vdemo___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdemo___024root::~Vdemo___024root() {
}
