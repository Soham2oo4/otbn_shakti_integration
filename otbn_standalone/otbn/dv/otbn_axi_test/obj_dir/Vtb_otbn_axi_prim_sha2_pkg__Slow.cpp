// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_otbn_axi.h for the primary calling header

#include "Vtb_otbn_axi__pch.h"
#include "Vtb_otbn_axi__Syms.h"
#include "Vtb_otbn_axi_prim_sha2_pkg.h"

// Parameter definitions for Vtb_otbn_axi_prim_sha2_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_otbn_axi_prim_sha2_pkg::__PVT__InitHash_256;
constexpr VlUnpacked<QData/*63:0*/, 8> Vtb_otbn_axi_prim_sha2_pkg::__PVT__InitHash_384;
constexpr VlUnpacked<QData/*63:0*/, 8> Vtb_otbn_axi_prim_sha2_pkg::__PVT__InitHash_512;


void Vtb_otbn_axi_prim_sha2_pkg___ctor_var_reset(Vtb_otbn_axi_prim_sha2_pkg* vlSelf);

Vtb_otbn_axi_prim_sha2_pkg::Vtb_otbn_axi_prim_sha2_pkg(Vtb_otbn_axi__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_otbn_axi_prim_sha2_pkg___ctor_var_reset(this);
}

void Vtb_otbn_axi_prim_sha2_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_otbn_axi_prim_sha2_pkg::~Vtb_otbn_axi_prim_sha2_pkg() {
}
