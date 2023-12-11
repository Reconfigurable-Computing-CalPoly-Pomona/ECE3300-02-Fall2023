// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpong_top.h for the primary calling header

#include "Vpong_top__pch.h"
#include "Vpong_top__Syms.h"
#include "Vpong_top___024root.h"

void Vpong_top___024root___ctor_var_reset(Vpong_top___024root* vlSelf);

Vpong_top___024root::Vpong_top___024root(Vpong_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpong_top___024root___ctor_var_reset(this);
}

void Vpong_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpong_top___024root::~Vpong_top___024root() {
}
