// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdmem_test.h for the primary calling header

#include "Vdmem_test__pch.h"
#include "Vdmem_test__Syms.h"
#include "Vdmem_test___024unit.h"

void Vdmem_test___024unit___ctor_var_reset(Vdmem_test___024unit* vlSelf);

Vdmem_test___024unit::Vdmem_test___024unit(Vdmem_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdmem_test___024unit___ctor_var_reset(this);
}

void Vdmem_test___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdmem_test___024unit::~Vdmem_test___024unit() {
}
