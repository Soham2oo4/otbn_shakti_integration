// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimem_test.h for the primary calling header

#include "Vimem_test__pch.h"
#include "Vimem_test__Syms.h"
#include "Vimem_test_prim_onehot_mux__W138_I20.h"

VL_INLINE_OPT void Vimem_test_prim_onehot_mux__W138_I20___nba_comb__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0(Vimem_test_prim_onehot_mux__W138_I20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vimem_test_prim_onehot_mux__W138_I20___nba_comb__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<5>/*159:0*/ __Vtemp_71;
    VlWide<5>/*159:0*/ __Vtemp_78;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_92;
    VlWide<6>/*191:0*/ __Vtemp_103;
    VlWide<6>/*191:0*/ __Vtemp_110;
    VlWide<6>/*191:0*/ __Vtemp_117;
    VlWide<6>/*191:0*/ __Vtemp_124;
    VlWide<7>/*223:0*/ __Vtemp_135;
    VlWide<7>/*223:0*/ __Vtemp_142;
    VlWide<7>/*223:0*/ __Vtemp_149;
    VlWide<7>/*223:0*/ __Vtemp_156;
    VlWide<8>/*255:0*/ __Vtemp_167;
    VlWide<8>/*255:0*/ __Vtemp_174;
    VlWide<8>/*255:0*/ __Vtemp_181;
    VlWide<8>/*255:0*/ __Vtemp_188;
    VlWide<9>/*287:0*/ __Vtemp_199;
    VlWide<9>/*287:0*/ __Vtemp_206;
    VlWide<9>/*287:0*/ __Vtemp_213;
    VlWide<9>/*287:0*/ __Vtemp_220;
    VlWide<10>/*319:0*/ __Vtemp_231;
    VlWide<10>/*319:0*/ __Vtemp_238;
    VlWide<10>/*319:0*/ __Vtemp_245;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0x3fU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x3eU] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x3dU] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x3cU] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x3bU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0x3aU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (vlSelf->__PVT__in_mux
                                                                             [0x39U] 
                                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (vlSelf->__PVT__in_mux
                                                                                [0x38U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x37U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x36U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x35U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x34U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x33U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x32U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x31U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x30U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2fU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2eU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2dU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2cU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2bU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2aU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x29U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x28U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x27U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x26U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x25U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x24U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x23U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x22U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x21U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x20U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1fU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1eU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1dU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1cU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1bU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1aU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x19U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x18U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x17U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x16U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x15U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x14U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x13U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x12U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x11U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x10U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xfU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xeU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xdU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xcU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xbU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xaU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [9U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [8U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [7U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [6U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [5U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [4U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [3U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [2U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [1U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0U 
                                                != 
                                                (vlSelf->__PVT__in_mux
                                                 [0x3fU] 
                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0x3eU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0x3dU] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0x3cU] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0x3bU] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (vlSelf->__PVT__in_mux
                                                                           [0x3aU] 
                                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (vlSelf->__PVT__in_mux
                                                                              [0x39U] 
                                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x38U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x37U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x36U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x35U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x34U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x33U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x32U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x31U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x30U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2fU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2eU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2dU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2cU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2bU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2aU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x29U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x28U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x27U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x26U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x25U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x24U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x23U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x22U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x21U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x20U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1fU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1eU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1dU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1cU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1bU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1aU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x19U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x18U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x17U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x16U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x15U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x14U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x13U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x12U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x11U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x10U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xfU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xeU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xdU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xcU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xbU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xaU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [9U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [8U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [7U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [6U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [5U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [4U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [3U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [2U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [1U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_7[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                      [0x46U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                      << 6U) | (((IData)((0U != (vlSelf->__PVT__in_mux
                                                 [0x45U] 
                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                 << 5U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x44U] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (vlSelf->__PVT__in_mux
                                                         [0x43U] 
                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0x42U] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0x41U] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                     << 1U) 
                                                    | (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0x40U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))));
    __Vtemp_14[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x4dU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (vlSelf->__PVT__in_mux
                                              [0x4cU] 
                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x4bU] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x4aU] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x49U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x48U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x47U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 7U) 
                                                            | __Vtemp_7[2U])))))));
    __Vtemp_21[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x54U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x53U] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x52U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x51U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x50U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x4fU] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x4eU] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_14[2U])))))));
    __Vtemp_28[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x5bU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x5aU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x59U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x58U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x57U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x56U] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x55U] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_21[2U])))))));
    __Vtemp_39[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x66U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 6U) | (((IData)((0U != (vlSelf->__PVT__in_mux
                                                  [0x65U] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->__PVT__in_mux
                                                       [0x64U] 
                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0x63U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x62U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x61U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (vlSelf->__PVT__in_mux
                                                         [0x60U] 
                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))));
    __Vtemp_46[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x6dU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (vlSelf->__PVT__in_mux
                                              [0x6cU] 
                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x6bU] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x6aU] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x69U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x68U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x67U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 7U) 
                                                            | __Vtemp_39[3U])))))));
    __Vtemp_53[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x74U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x73U] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x72U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x71U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x70U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x6fU] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x6eU] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_46[3U])))))));
    __Vtemp_60[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x7bU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x7aU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x79U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x78U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x77U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x76U] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x75U] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_53[3U])))))));
    __Vtemp_71[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x86U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 6U) | (((IData)((0U != (vlSelf->__PVT__in_mux
                                                  [0x85U] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->__PVT__in_mux
                                                       [0x84U] 
                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0x83U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x82U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x81U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (vlSelf->__PVT__in_mux
                                                         [0x80U] 
                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))));
    __Vtemp_78[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x8dU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (vlSelf->__PVT__in_mux
                                              [0x8cU] 
                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x8bU] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x8aU] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x89U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x88U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x87U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 7U) 
                                                            | __Vtemp_71[4U])))))));
    __Vtemp_85[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x94U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x93U] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x92U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x91U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x90U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x8fU] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x8eU] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_78[4U])))))));
    __Vtemp_92[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x9bU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x9aU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x99U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x98U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x97U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x96U] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x95U] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_85[4U])))))));
    __Vtemp_103[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xa6U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0xa5U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0xa4U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0xa3U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xa2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xa1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0xa0U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))));
    __Vtemp_110[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xadU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0xacU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0xabU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0xaaU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0xa9U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0xa8U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0xa7U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                              << 7U) 
                                                             | __Vtemp_103[5U])))))));
    __Vtemp_117[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xb4U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xb3U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xb2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xb1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xb0U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xafU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xaeU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_110[5U])))))));
    __Vtemp_124[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xbbU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0x1bU) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xbaU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                      << 0x1aU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xb9U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xb8U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xb7U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xb6U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xb5U] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                << 0x15U) 
                                                               | __Vtemp_117[5U])))))));
    __Vtemp_135[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xc6U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0xc5U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0xc4U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0xc3U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xc2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xc1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0xc0U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))));
    __Vtemp_142[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xcdU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0xccU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0xcbU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0xcaU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0xc9U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0xc8U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0xc7U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                              << 7U) 
                                                             | __Vtemp_135[6U])))))));
    __Vtemp_149[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xd4U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xd3U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xd2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xd1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xd0U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xcfU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xceU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_142[6U])))))));
    __Vtemp_156[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xdbU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0x1bU) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xdaU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                      << 0x1aU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xd9U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xd8U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xd7U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xd6U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xd5U] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                << 0x15U) 
                                                               | __Vtemp_149[6U])))))));
    __Vtemp_167[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xe6U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0xe5U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0xe4U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0xe3U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xe2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xe1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0xe0U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))));
    __Vtemp_174[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xedU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0xecU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0xebU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0xeaU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0xe9U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0xe8U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0xe7U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                              << 7U) 
                                                             | __Vtemp_167[7U])))))));
    __Vtemp_181[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xf4U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xf3U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xf2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xf1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xf0U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xefU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xeeU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_174[7U])))))));
    __Vtemp_188[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xfbU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0x1bU) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xfaU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                      << 0x1aU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xf9U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xf8U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xf7U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xf6U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xf5U] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                << 0x15U) 
                                                               | __Vtemp_181[7U])))))));
    __Vtemp_199[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x106U] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0x105U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0x104U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x103U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x102U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x101U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0x100U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))));
    __Vtemp_206[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x10dU] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x10cU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0x10bU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0x10aU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0x109U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0x108U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0x107U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                              << 7U) 
                                                             | __Vtemp_199[8U])))))));
    __Vtemp_213[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x114U] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0x113U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x112U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x111U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x110U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x10fU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0x10eU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_206[8U])))))));
    __Vtemp_220[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x11bU] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0x1bU) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0x11aU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                      << 0x1aU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x119U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x118U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x117U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x116U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0x115U] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                << 0x15U) 
                                                               | __Vtemp_213[8U])))))));
    __Vtemp_231[9U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x126U] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0x125U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0x124U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x123U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x122U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x121U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0x120U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))))))));
    __Vtemp_238[9U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x12dU] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x12cU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0x12bU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0x12aU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0x129U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0x128U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0x127U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                              << 7U) 
                                                             | __Vtemp_231[9U])))))));
    __Vtemp_245[9U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x134U] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0x133U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x132U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x131U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x130U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x12fU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0x12eU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_238[9U])))))));
    vlSelf->out_o[0U] = __Vtemp_1[0U];
    vlSelf->out_o[1U] = __Vtemp_1[1U];
    vlSelf->out_o[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x5fU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x5eU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x5dU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x5cU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_28[2U]))));
    vlSelf->out_o[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x7fU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x7eU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x7dU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x7cU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_60[3U]))));
    vlSelf->out_o[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x9fU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x9eU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x9dU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x9cU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_92[4U]))));
    vlSelf->out_o[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0xbfU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0xbeU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0xbdU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0xbcU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_124[5U]))));
    vlSelf->out_o[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0xdfU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0xdeU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0xddU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0xdcU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_156[6U]))));
    vlSelf->out_o[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0xffU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0xfeU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0xfdU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0xfcU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_188[7U]))));
    vlSelf->out_o[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x11fU] 
                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x11eU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x11dU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x11cU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_220[8U]))));
    vlSelf->out_o[9U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x137U] 
                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                          << 0x17U) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x136U] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                        << 0x16U) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x135U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]))) 
                                         << 0x15U) 
                                        | __Vtemp_245[9U])));
}

VL_INLINE_OPT void Vimem_test_prim_onehot_mux__W138_I20___nba_comb__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b__0(Vimem_test_prim_onehot_mux__W138_I20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vimem_test_prim_onehot_mux__W138_I20___nba_comb__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<5>/*159:0*/ __Vtemp_71;
    VlWide<5>/*159:0*/ __Vtemp_78;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_92;
    VlWide<6>/*191:0*/ __Vtemp_103;
    VlWide<6>/*191:0*/ __Vtemp_110;
    VlWide<6>/*191:0*/ __Vtemp_117;
    VlWide<6>/*191:0*/ __Vtemp_124;
    VlWide<7>/*223:0*/ __Vtemp_135;
    VlWide<7>/*223:0*/ __Vtemp_142;
    VlWide<7>/*223:0*/ __Vtemp_149;
    VlWide<7>/*223:0*/ __Vtemp_156;
    VlWide<8>/*255:0*/ __Vtemp_167;
    VlWide<8>/*255:0*/ __Vtemp_174;
    VlWide<8>/*255:0*/ __Vtemp_181;
    VlWide<8>/*255:0*/ __Vtemp_188;
    VlWide<9>/*287:0*/ __Vtemp_199;
    VlWide<9>/*287:0*/ __Vtemp_206;
    VlWide<9>/*287:0*/ __Vtemp_213;
    VlWide<9>/*287:0*/ __Vtemp_220;
    VlWide<10>/*319:0*/ __Vtemp_231;
    VlWide<10>/*319:0*/ __Vtemp_238;
    VlWide<10>/*319:0*/ __Vtemp_245;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0x3fU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x3eU] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x3dU] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x3cU] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x3bU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0x3aU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (vlSelf->__PVT__in_mux
                                                                             [0x39U] 
                                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (vlSelf->__PVT__in_mux
                                                                                [0x38U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x37U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x36U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x35U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x34U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x33U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x32U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x31U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x30U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2fU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2eU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2dU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2cU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2bU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2aU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x29U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x28U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x27U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x26U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x25U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x24U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x23U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x22U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x21U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x20U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1fU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1eU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1dU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1cU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1bU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1aU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x19U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x18U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x17U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x16U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x15U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x14U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x13U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x12U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x11U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x10U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xfU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xeU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xdU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xcU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xbU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xaU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [9U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [8U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [7U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [6U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [5U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [4U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [3U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [2U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [1U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0U 
                                                != 
                                                (vlSelf->__PVT__in_mux
                                                 [0x3fU] 
                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0x3eU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0x3dU] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0x3cU] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0x3bU] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (vlSelf->__PVT__in_mux
                                                                           [0x3aU] 
                                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (vlSelf->__PVT__in_mux
                                                                              [0x39U] 
                                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x38U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x37U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x36U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x35U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x34U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x33U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x32U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x31U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x30U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2fU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2eU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2dU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2cU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2bU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x2aU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x29U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x28U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x27U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x26U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x25U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x24U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x23U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x22U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x21U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x20U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1fU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1eU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1dU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1cU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1bU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x1aU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x19U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x18U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x17U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x16U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x15U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x14U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x13U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x12U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x11U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0x10U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xfU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xeU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xdU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xcU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xbU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0xaU] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [9U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [8U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [7U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [6U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [5U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [4U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [3U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [2U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [1U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (vlSelf->__PVT__in_mux
                                                                                [0U] 
                                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_7[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                      [0x46U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                      << 6U) | (((IData)((0U != (vlSelf->__PVT__in_mux
                                                 [0x45U] 
                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                 << 5U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x44U] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (vlSelf->__PVT__in_mux
                                                         [0x43U] 
                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0x42U] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0x41U] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                     << 1U) 
                                                    | (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0x40U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))));
    __Vtemp_14[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x4dU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (vlSelf->__PVT__in_mux
                                              [0x4cU] 
                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x4bU] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x4aU] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x49U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x48U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x47U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 7U) 
                                                            | __Vtemp_7[2U])))))));
    __Vtemp_21[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x54U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x53U] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x52U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x51U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x50U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x4fU] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x4eU] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_14[2U])))))));
    __Vtemp_28[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x5bU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x5aU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x59U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x58U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x57U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x56U] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x55U] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_21[2U])))))));
    __Vtemp_39[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x66U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 6U) | (((IData)((0U != (vlSelf->__PVT__in_mux
                                                  [0x65U] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->__PVT__in_mux
                                                       [0x64U] 
                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0x63U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x62U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x61U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (vlSelf->__PVT__in_mux
                                                         [0x60U] 
                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))));
    __Vtemp_46[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x6dU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (vlSelf->__PVT__in_mux
                                              [0x6cU] 
                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x6bU] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x6aU] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x69U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x68U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x67U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 7U) 
                                                            | __Vtemp_39[3U])))))));
    __Vtemp_53[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x74U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x73U] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x72U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x71U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x70U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x6fU] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x6eU] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_46[3U])))))));
    __Vtemp_60[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x7bU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x7aU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x79U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x78U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x77U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x76U] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x75U] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_53[3U])))))));
    __Vtemp_71[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x86U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 6U) | (((IData)((0U != (vlSelf->__PVT__in_mux
                                                  [0x85U] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->__PVT__in_mux
                                                       [0x84U] 
                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0x83U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x82U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x81U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (vlSelf->__PVT__in_mux
                                                         [0x80U] 
                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))));
    __Vtemp_78[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x8dU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (vlSelf->__PVT__in_mux
                                              [0x8cU] 
                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x8bU] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x8aU] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x89U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x88U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x87U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 7U) 
                                                            | __Vtemp_71[4U])))))));
    __Vtemp_85[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x94U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x93U] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x92U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x91U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x90U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x8fU] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x8eU] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_78[4U])))))));
    __Vtemp_92[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                       [0x9bU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x9aU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->__PVT__in_mux
                                                             [0x99U] 
                                                             & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->__PVT__in_mux
                                                                [0x98U] 
                                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->__PVT__in_mux
                                                                   [0x97U] 
                                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->__PVT__in_mux
                                                                      [0x96U] 
                                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->__PVT__in_mux
                                                                         [0x95U] 
                                                                         & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_85[4U])))))));
    __Vtemp_103[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xa6U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0xa5U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0xa4U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0xa3U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xa2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xa1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0xa0U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))));
    __Vtemp_110[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xadU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0xacU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0xabU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0xaaU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0xa9U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0xa8U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0xa7U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                              << 7U) 
                                                             | __Vtemp_103[5U])))))));
    __Vtemp_117[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xb4U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xb3U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xb2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xb1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xb0U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xafU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xaeU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_110[5U])))))));
    __Vtemp_124[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xbbU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0x1bU) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xbaU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                      << 0x1aU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xb9U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xb8U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xb7U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xb6U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xb5U] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                << 0x15U) 
                                                               | __Vtemp_117[5U])))))));
    __Vtemp_135[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xc6U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0xc5U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0xc4U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0xc3U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xc2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xc1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0xc0U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))));
    __Vtemp_142[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xcdU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0xccU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0xcbU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0xcaU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0xc9U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0xc8U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0xc7U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                              << 7U) 
                                                             | __Vtemp_135[6U])))))));
    __Vtemp_149[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xd4U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xd3U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xd2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xd1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xd0U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xcfU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xceU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_142[6U])))))));
    __Vtemp_156[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xdbU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0x1bU) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xdaU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                      << 0x1aU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xd9U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xd8U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xd7U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xd6U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xd5U] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                << 0x15U) 
                                                               | __Vtemp_149[6U])))))));
    __Vtemp_167[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xe6U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0xe5U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0xe4U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0xe3U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xe2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xe1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0xe0U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))));
    __Vtemp_174[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xedU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0xecU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0xebU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0xeaU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0xe9U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0xe8U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0xe7U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                              << 7U) 
                                                             | __Vtemp_167[7U])))))));
    __Vtemp_181[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xf4U] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xf3U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xf2U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xf1U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xf0U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xefU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xeeU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_174[7U])))))));
    __Vtemp_188[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0xfbU] & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0x1bU) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0xfaU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                      << 0x1aU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0xf9U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0xf8U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0xf7U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0xf6U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0xf5U] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                << 0x15U) 
                                                               | __Vtemp_181[7U])))))));
    __Vtemp_199[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x106U] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0x105U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0x104U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x103U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x102U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x101U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0x100U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))));
    __Vtemp_206[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x10dU] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x10cU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0x10bU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0x10aU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0x109U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0x108U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0x107U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                              << 7U) 
                                                             | __Vtemp_199[8U])))))));
    __Vtemp_213[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x114U] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0x113U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x112U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x111U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x110U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x10fU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0x10eU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_206[8U])))))));
    __Vtemp_220[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x11bU] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0x1bU) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0x11aU] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                      << 0x1aU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x119U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x118U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x117U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x116U] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0x115U] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                << 0x15U) 
                                                               | __Vtemp_213[8U])))))));
    __Vtemp_231[9U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x126U] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 6U) | (((IData)((0U != (
                                                   vlSelf->__PVT__in_mux
                                                   [0x125U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                   << 5U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->__PVT__in_mux
                                                        [0x124U] 
                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->__PVT__in_mux
                                                           [0x123U] 
                                                           & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x122U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x121U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (vlSelf->__PVT__in_mux
                                                          [0x120U] 
                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))))))));
    __Vtemp_238[9U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x12dU] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0xdU) | (((IData)((0U != 
                                              (vlSelf->__PVT__in_mux
                                               [0x12cU] 
                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                     << 0xcU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->__PVT__in_mux
                                                            [0x12bU] 
                                                            & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                  << 0xbU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->__PVT__in_mux
                                                               [0x12aU] 
                                                               & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                     << 0xaU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->__PVT__in_mux
                                                                  [0x129U] 
                                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                        << 9U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->__PVT__in_mux
                                                                     [0x128U] 
                                                                     & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                           << 8U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->__PVT__in_mux
                                                                        [0x127U] 
                                                                        & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                              << 7U) 
                                                             | __Vtemp_231[9U])))))));
    __Vtemp_245[9U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                        [0x134U] & 
                                        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                        << 0x14U) | (((IData)((0U != 
                                               (vlSelf->__PVT__in_mux
                                                [0x133U] 
                                                & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                      << 0x13U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->__PVT__in_mux
                                                              [0x132U] 
                                                              & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->__PVT__in_mux
                                                                 [0x131U] 
                                                                 & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                       << 0x11U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->__PVT__in_mux
                                                                    [0x130U] 
                                                                    & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                          << 0x10U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->__PVT__in_mux
                                                                       [0x12fU] 
                                                                       & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                             << 0xfU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->__PVT__in_mux
                                                                          [0x12eU] 
                                                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                                                << 0xeU) 
                                                               | __Vtemp_238[9U])))))));
    vlSelf->out_o[0U] = __Vtemp_1[0U];
    vlSelf->out_o[1U] = __Vtemp_1[1U];
    vlSelf->out_o[2U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x5fU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x5eU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x5dU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x5cU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_28[2U]))));
    vlSelf->out_o[3U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x7fU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x7eU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x7dU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x7cU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_60[3U]))));
    vlSelf->out_o[4U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x9fU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x9eU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x9dU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x9cU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_92[4U]))));
    vlSelf->out_o[5U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0xbfU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0xbeU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0xbdU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0xbcU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_124[5U]))));
    vlSelf->out_o[6U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0xdfU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0xdeU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0xddU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0xdcU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_156[6U]))));
    vlSelf->out_o[7U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0xffU] & 
                                          vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0xfeU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0xfdU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0xfcU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_188[7U]))));
    vlSelf->out_o[8U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x11fU] 
                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                          << 0x1fU) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x11eU] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                        << 0x1eU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x11dU] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                         << 0x1dU) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->__PVT__in_mux
                                                      [0x11cU] 
                                                      & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                            << 0x1cU) 
                                           | __Vtemp_220[8U]))));
    vlSelf->out_o[9U] = (((IData)((0U != (vlSelf->__PVT__in_mux
                                          [0x137U] 
                                          & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                          << 0x17U) | (((IData)((0U 
                                                 != 
                                                 (vlSelf->__PVT__in_mux
                                                  [0x136U] 
                                                  & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                        << 0x16U) | 
                                       (((IData)((0U 
                                                  != 
                                                  (vlSelf->__PVT__in_mux
                                                   [0x135U] 
                                                   & vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]))) 
                                         << 0x15U) 
                                        | __Vtemp_245[9U])));
}
