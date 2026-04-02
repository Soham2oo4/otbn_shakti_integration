// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimem_test.h for the primary calling header

#include "Vimem_test__pch.h"
#include "Vimem_test__Syms.h"
#include "Vimem_test___024unit.h"

void Vimem_test___024unit___ctor_var_reset(Vimem_test___024unit* vlSelf);

Vimem_test___024unit::Vimem_test___024unit(Vimem_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimem_test___024unit___ctor_var_reset(this);
}

void Vimem_test___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vimem_test___024unit::~Vimem_test___024unit() {
}
