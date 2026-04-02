// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_64_test.h for the primary calling header

#include "Vadd_64_test__pch.h"
#include "Vadd_64_test_prim_onehot_mux__W138_I20.h"

VL_ATTR_COLD void Vadd_64_test_prim_onehot_mux__W138_I20___ctor_var_reset(Vadd_64_test_prim_onehot_mux__W138_I20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vadd_64_test_prim_onehot_mux__W138_I20___ctor_var_reset\n"); );
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
