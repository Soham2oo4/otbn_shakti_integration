// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_64_test.h for the primary calling header

#include "Vadd_64_test__pch.h"
#include "Vadd_64_test__Syms.h"
#include "Vadd_64_test___024root.h"

// Parameter definitions for Vadd_64_test___024root
constexpr VlUnpacked<IData/*31:0*/, 9> Vadd_64_test___024root::add_64_test__DOT__PROGRAM;
constexpr VlUnpacked<IData/*31:0*/, 8> Vadd_64_test___024root::add_64_test__DOT__OPERAND_A;
constexpr VlUnpacked<IData/*31:0*/, 8> Vadd_64_test___024root::add_64_test__DOT__OPERAND_B;
constexpr VlUnpacked<IData/*31:0*/, 8> Vadd_64_test___024root::add_64_test__DOT__EXPECTED;


void Vadd_64_test___024root___ctor_var_reset(Vadd_64_test___024root* vlSelf);

Vadd_64_test___024root::Vadd_64_test___024root(Vadd_64_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vadd_64_test___024root___ctor_var_reset(this);
}

void Vadd_64_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vadd_64_test___024root::~Vadd_64_test___024root() {
}
