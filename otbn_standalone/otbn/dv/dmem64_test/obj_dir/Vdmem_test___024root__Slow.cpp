// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdmem_test.h for the primary calling header

#include "Vdmem_test__pch.h"
#include "Vdmem_test__Syms.h"
#include "Vdmem_test___024root.h"

void Vdmem_test___024root___ctor_var_reset(Vdmem_test___024root* vlSelf);

Vdmem_test___024root::Vdmem_test___024root(Vdmem_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdmem_test___024root___ctor_var_reset(this);
}

void Vdmem_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdmem_test___024root::~Vdmem_test___024root() {
}
