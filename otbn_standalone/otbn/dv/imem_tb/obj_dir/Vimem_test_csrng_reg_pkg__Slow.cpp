// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimem_test.h for the primary calling header

#include "Vimem_test__pch.h"
#include "Vimem_test__Syms.h"
#include "Vimem_test_csrng_reg_pkg.h"

// Parameter definitions for Vimem_test_csrng_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 24> Vimem_test_csrng_reg_pkg::__PVT__CSRNG_PERMIT;


void Vimem_test_csrng_reg_pkg___ctor_var_reset(Vimem_test_csrng_reg_pkg* vlSelf);

Vimem_test_csrng_reg_pkg::Vimem_test_csrng_reg_pkg(Vimem_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimem_test_csrng_reg_pkg___ctor_var_reset(this);
}

void Vimem_test_csrng_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vimem_test_csrng_reg_pkg::~Vimem_test_csrng_reg_pkg() {
}
