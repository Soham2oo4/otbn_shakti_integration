// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimem_test.h for the primary calling header

#include "Vimem_test__pch.h"
#include "Vimem_test__Syms.h"
#include "Vimem_test___024root.h"

// Parameter definitions for Vimem_test___024root
constexpr VlUnpacked<IData/*31:0*/, 4> Vimem_test___024root::imem_test__DOT__TEST_DATA;


void Vimem_test___024root___ctor_var_reset(Vimem_test___024root* vlSelf);

Vimem_test___024root::Vimem_test___024root(Vimem_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimem_test___024root___ctor_var_reset(this);
}

void Vimem_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vimem_test___024root::~Vimem_test___024root() {
}
