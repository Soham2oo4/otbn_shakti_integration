// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdmem_test.h for the primary calling header

#include "Vdmem_test__pch.h"
#include "Vdmem_test__Syms.h"
#include "Vdmem_test_prim_sha2_pkg.h"

// Parameter definitions for Vdmem_test_prim_sha2_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vdmem_test_prim_sha2_pkg::__PVT__InitHash_256;
constexpr VlUnpacked<QData/*63:0*/, 8> Vdmem_test_prim_sha2_pkg::__PVT__InitHash_384;
constexpr VlUnpacked<QData/*63:0*/, 8> Vdmem_test_prim_sha2_pkg::__PVT__InitHash_512;


void Vdmem_test_prim_sha2_pkg___ctor_var_reset(Vdmem_test_prim_sha2_pkg* vlSelf);

Vdmem_test_prim_sha2_pkg::Vdmem_test_prim_sha2_pkg(Vdmem_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdmem_test_prim_sha2_pkg___ctor_var_reset(this);
}

void Vdmem_test_prim_sha2_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdmem_test_prim_sha2_pkg::~Vdmem_test_prim_sha2_pkg() {
}
