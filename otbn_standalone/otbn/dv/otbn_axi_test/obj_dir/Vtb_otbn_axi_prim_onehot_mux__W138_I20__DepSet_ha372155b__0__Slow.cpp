// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_otbn_axi.h for the primary calling header

#include "Vtb_otbn_axi__pch.h"
#include "Vtb_otbn_axi_prim_onehot_mux__W138_I20.h"

VL_ATTR_COLD void Vtb_otbn_axi_prim_onehot_mux__W138_I20___ctor_var_reset(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_otbn_axi_prim_onehot_mux__W138_I20___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(312, vlSelf->in_i[__Vi0]);
    }
    vlSelf->sel_i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(312, vlSelf->out_o);
    for (int __Vi0 = 0; __Vi0 < 312; ++__Vi0) {
        vlSelf->__PVT__in_mux[__Vi0] = VL_RAND_RESET_I(32);
    }
}
