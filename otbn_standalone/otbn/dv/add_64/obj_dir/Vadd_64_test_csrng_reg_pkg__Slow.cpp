// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_64_test.h for the primary calling header

#include "Vadd_64_test__pch.h"
#include "Vadd_64_test__Syms.h"
#include "Vadd_64_test_csrng_reg_pkg.h"

// Parameter definitions for Vadd_64_test_csrng_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 24> Vadd_64_test_csrng_reg_pkg::__PVT__CSRNG_PERMIT;


void Vadd_64_test_csrng_reg_pkg___ctor_var_reset(Vadd_64_test_csrng_reg_pkg* vlSelf);

Vadd_64_test_csrng_reg_pkg::Vadd_64_test_csrng_reg_pkg(Vadd_64_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vadd_64_test_csrng_reg_pkg___ctor_var_reset(this);
}

void Vadd_64_test_csrng_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vadd_64_test_csrng_reg_pkg::~Vadd_64_test_csrng_reg_pkg() {
}
