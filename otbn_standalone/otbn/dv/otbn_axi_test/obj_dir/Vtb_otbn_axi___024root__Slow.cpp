// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_otbn_axi.h for the primary calling header

#include "Vtb_otbn_axi__pch.h"
#include "Vtb_otbn_axi__Syms.h"
#include "Vtb_otbn_axi___024root.h"

void Vtb_otbn_axi___024root___ctor_var_reset(Vtb_otbn_axi___024root* vlSelf);

Vtb_otbn_axi___024root::Vtb_otbn_axi___024root(Vtb_otbn_axi__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_otbn_axi___024root___ctor_var_reset(this);
}

void Vtb_otbn_axi___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_otbn_axi___024root::~Vtb_otbn_axi___024root() {
}
