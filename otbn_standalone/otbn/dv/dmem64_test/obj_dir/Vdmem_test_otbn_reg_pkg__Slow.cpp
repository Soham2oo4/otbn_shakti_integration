// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdmem_test.h for the primary calling header

#include "Vdmem_test__pch.h"
#include "Vdmem_test__Syms.h"
#include "Vdmem_test_otbn_reg_pkg.h"

// Parameter definitions for Vdmem_test_otbn_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 11> Vdmem_test_otbn_reg_pkg::__PVT__OTBN_PERMIT;


void Vdmem_test_otbn_reg_pkg___ctor_var_reset(Vdmem_test_otbn_reg_pkg* vlSelf);

Vdmem_test_otbn_reg_pkg::Vdmem_test_otbn_reg_pkg(Vdmem_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdmem_test_otbn_reg_pkg___ctor_var_reset(this);
}

void Vdmem_test_otbn_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdmem_test_otbn_reg_pkg::~Vdmem_test_otbn_reg_pkg() {
}
