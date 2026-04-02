// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimem_test.h for the primary calling header

#include "Vimem_test__pch.h"
#include "Vimem_test__Syms.h"
#include "Vimem_test_prim_sha2_pkg.h"

// Parameter definitions for Vimem_test_prim_sha2_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vimem_test_prim_sha2_pkg::__PVT__InitHash_256;
constexpr VlUnpacked<QData/*63:0*/, 8> Vimem_test_prim_sha2_pkg::__PVT__InitHash_384;
constexpr VlUnpacked<QData/*63:0*/, 8> Vimem_test_prim_sha2_pkg::__PVT__InitHash_512;


void Vimem_test_prim_sha2_pkg___ctor_var_reset(Vimem_test_prim_sha2_pkg* vlSelf);

Vimem_test_prim_sha2_pkg::Vimem_test_prim_sha2_pkg(Vimem_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimem_test_prim_sha2_pkg___ctor_var_reset(this);
}

void Vimem_test_prim_sha2_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vimem_test_prim_sha2_pkg::~Vimem_test_prim_sha2_pkg() {
}
