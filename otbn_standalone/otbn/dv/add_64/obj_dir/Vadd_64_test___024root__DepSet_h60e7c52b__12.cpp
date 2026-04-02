// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_64_test.h for the primary calling header

#include "Vadd_64_test__pch.h"
#include "Vadd_64_test___024root.h"

VL_INLINE_OPT void Vadd_64_test___024root___nba_comb__TOP__18(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw 
        = (((IData)((0U != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                     [0x1fU])) << 0x1fU) | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                      [0x1eU])) 
                                             << 0x1eU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                         [0x1dU])) 
                                                << 0x1dU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                            [0x1cU])) 
                                                   << 0x1cU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                               [0x1bU])) 
                                                      << 0x1bU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                  [0x1aU])) 
                                                         << 0x1aU) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                     [0x19U])) 
                                                            << 0x19U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                        [0x18U])) 
                                                               << 0x18U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                           [0x17U])) 
                                                                  << 0x17U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                              [0x16U])) 
                                                                     << 0x16U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x15U])) 
                                                                        << 0x15U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x14U])) 
                                                                           << 0x14U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x13U])) 
                                                                              << 0x13U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x12U])) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x11U])) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x10U])) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xfU])) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xeU])) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xdU])) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xcU])) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xbU])) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xaU])) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [9U])) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [8U])) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [7U])) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [6U])) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [5U])) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [4U])) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [3U])) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [2U])) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [1U])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0U]))))))))))))))))))))))))))))))));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U];
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
            = (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o);
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 7U) | (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
                                  >> 0x20U)));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0xeU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
                             >> 0x19U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 7U)));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x15U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0x12U) | ((IData)(
                                                   (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xeU)));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x1cU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0xbU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
                >> 4U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 3U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
                                   >> 0x20U)) >> 4U));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0xaU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
                             >> 0x1dU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 3U)));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x11U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0x16U) | ((IData)(
                                                   (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xaU)));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
                >> 0xfU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
                                     >> 0x20U)) << 0x11U));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[0U] 
        = (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[1U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
            << 7U) | (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
                              >> 0x20U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[2U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
            << 0xeU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
                         >> 0x19U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[3U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
            << 0x15U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
                          >> 0x12U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[4U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
            << 0x1cU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
                          >> 0xbU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[5U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
            >> 4U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) << 0x1cU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[6U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
            << 3U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) >> 4U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[7U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
            << 0xaU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
                         >> 0x1dU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[8U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
            << 0x11U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
                          >> 0x16U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[9U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
            >> 0xfU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
                                 >> 0x20U)) << 0x11U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[0U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[0U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[1U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[2U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[3U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[4U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[5U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[6U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[7U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[8U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U] 
        = (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[9U] 
           & (- (IData)((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result;
    if ((0x7c0U == (0xfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata 
            = (0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw);
    } else if ((0x7c1U == (0xfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata 
            = (0xfU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw 
                       >> 4U));
    } else if ((0x7d8U == (0xfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata = 0U;
    }
    if ((0x8000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])) {
        if ((1U & (~ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                      >> 0xeU)))) {
            if ((1U & (~ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                          >> 0xdU)))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl 
                    = ((0x40U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                        ? (0x3fU & ((IData)(1U) + (0x1fU 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))))
                        : ((0x10U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                            ? (0x3fU & ((IData)(1U) 
                                        + (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))))
                            : ((0x80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                                ? (0x3fU & ((IData)(1U) 
                                            + (0x1fU 
                                               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))))
                                : ((0x20U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                                    ? (((IData)(1U) 
                                        + (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                   >> 5U))) 
                                       << 5U) : (0x3fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))))))));
            }
        }
    } else if ((0x4000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])) {
        if ((0x2000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata;
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl 
            = ((0x2000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])
                ? (0x3fffU & ((IData)(4U) + (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q)))
                : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result);
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata_raw 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rs_insn)
            ? (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata 
               | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))
            : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata_raw;
    if ((0x7c0U == (0xfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata 
            = ((0xf0U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw) 
               | (0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata_raw));
    } else if ((0x7c1U == (0xfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata 
            = ((0xf0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata_raw 
                         << 4U)) | (0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_update_flags[0U] 
        = (0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_update_flags[1U] 
        = (0xfU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata 
                   >> 4U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in[0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_update_flags
        [0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in[0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_update_flags
        [1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[1U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[2U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [2U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[3U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [3U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[4U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [4U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[1U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[2U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [2U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[3U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [3U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[4U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [4U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1eU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                     [0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1dU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1bU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [2U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x17U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1eU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1dU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (2U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                     [1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1bU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x17U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1eU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1dU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1bU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (4U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                     [2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x17U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1eU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1dU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1bU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x17U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                     [3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1eU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                     [0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1dU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1bU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [2U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x17U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1eU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1dU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (2U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                     [1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1bU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x17U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1eU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1dU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1bU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (4U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                     [2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x17U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1eU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1dU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1bU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x17U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                     [3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0xfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_d[0U] 
        = (((IData)((0U != (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
                            [3U] & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel)))) 
            << 3U) | (((IData)((0U != (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
                                       [2U] & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel)))) 
                       << 2U) | (((IData)((0U != (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
                                                  [1U] 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel)))) 
                                  << 1U) | (0U != (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
                                                   [0U] 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_d[1U] 
        = (((IData)((0U != (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
                            [3U] & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel)))) 
            << 3U) | (((IData)((0U != (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
                                       [2U] & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel)))) 
                       << 2U) | (((IData)((0U != (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
                                                  [1U] 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel)))) 
                                  << 1U) | (0U != (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
                                                   [0U] 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel))))));
}

extern const VlWide<8>/*255:0*/ Vadd_64_test__ConstPool__CONST_h954211c2_0;

VL_INLINE_OPT void Vadd_64_test___024root___nba_comb__TOP__19(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___nba_comb__TOP__19\n"); );
    // Init
    CData/*3:0*/ add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0 = 0;
    CData/*0:0*/ add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 = 0;
    CData/*0:0*/ add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 = 0;
    CData/*0:0*/ add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 = 0;
    CData/*3:0*/ add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0 = 0;
    CData/*0:0*/ add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 = 0;
    CData/*0:0*/ add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 = 0;
    CData/*0:0*/ add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__73__Vfuncout;
    __Vfunc_mubi4_and_hi__73__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__73__a;
    __Vfunc_mubi4_and_hi__73__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__73__b;
    __Vfunc_mubi4_and_hi__73__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__74__Vfuncout;
    __Vfunc_mubi4_and_hi__74__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__74__a;
    __Vfunc_mubi4_and_hi__74__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__74__b;
    __Vfunc_mubi4_and_hi__74__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__75__Vfuncout;
    __Vfunc_mubi4_or_hi__75__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__75__a;
    __Vfunc_mubi4_or_hi__75__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__75__b;
    __Vfunc_mubi4_or_hi__75__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__76__Vfuncout;
    __Vfunc_mubi4_or__76__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__76__a;
    __Vfunc_mubi4_or__76__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__76__b;
    __Vfunc_mubi4_or__76__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__76__a_in;
    __Vfunc_mubi4_or__76__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__76__b_in;
    __Vfunc_mubi4_or__76__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__77__Vfuncout;
    __Vfunc_mubi4_and__77__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__77__a;
    __Vfunc_mubi4_and__77__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__77__b;
    __Vfunc_mubi4_and__77__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__77__a_in;
    __Vfunc_mubi4_and__77__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__77__b_in;
    __Vfunc_mubi4_and__77__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__78__Vfuncout;
    __Vfunc_mubi4_and__78__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__78__a;
    __Vfunc_mubi4_and__78__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__78__b;
    __Vfunc_mubi4_and__78__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__78__a_in;
    __Vfunc_mubi4_and__78__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__78__b_in;
    __Vfunc_mubi4_and__78__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__483__Vfuncout;
    __Vfunc_mubi4_or_hi__483__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__483__a;
    __Vfunc_mubi4_or_hi__483__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__483__b;
    __Vfunc_mubi4_or_hi__483__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__484__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__484__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__484__val;
    __Vfunc_mubi4_bool_to_mubi__484__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__485__Vfuncout;
    __Vfunc_mubi4_or__485__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__485__a;
    __Vfunc_mubi4_or__485__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__485__b;
    __Vfunc_mubi4_or__485__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__485__a_in;
    __Vfunc_mubi4_or__485__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__485__b_in;
    __Vfunc_mubi4_or__485__b_in = 0;
    QData/*63:0*/ __Vtemp_4;
    QData/*63:0*/ __Vtemp_5;
    // Body
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__state_reset = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_cnt_clear_int = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_d = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base_urnd = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_ack = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_q;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_prim_mubi4_sender_rma_ack__DOT__mubi_int;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_q;
    if ((0x40U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    } else if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    } else if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__state_reset = 1U;
                        if (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request)) 
                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop))) {
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                        } else if (((IData)(vlSelf->add_64_test__DOT__dut__DOT__start_q) 
                                    | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request))) {
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init = 1U;
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_cnt_clear_int = 1U;
                            if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request) {
                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 6U;
                            } else {
                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req = 1U;
                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 6U;
                            }
                        }
                    } else {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    }
                } else {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                }
            } else if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                        }
                    } else {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    }
                } else {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                }
            } else {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else if ((0x10U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req = 1U;
                    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 6U;
                    } else if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                    }
                } else {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                }
            } else {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                }
            }
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        }
    } else if ((0x20U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                } else if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
                    if (([&]() {
                                vlSelf->__Vfunc_mubi4_test_false_strict__493__val 
                                    = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                vlSelf->__Vfunc_mubi4_test_false_strict__493__Vfuncout 
                                    = (9U == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__493__val));
                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__493__Vfuncout))) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 6U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 6U;
                    } else {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0xbU;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 0U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_ack = 1U;
                    }
                } else {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                }
            } else {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                } else if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                } else {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_d = 1U;
                    if ((0x20U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc = 0U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d = 0U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_d = 0U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x10U;
                    }
                }
            } else {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        }
    } else if ((0x10U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd 
                = (0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q));
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd 
                = (1U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q));
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base 
                = (1U < (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q));
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base_urnd 
                = (1U < (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q));
            if ((0x1fU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x35U;
            }
        }
    } else if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d 
                    = vlSelf->add_64_test__DOT__dut__DOT__mubi_rma_req;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d 
                    = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__should_lock_d)
                        ? 0x6fU : 0x79U);
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 9U;
            } else {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        }
    } else if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req = 1U;
                if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) {
                    if (([&]() {
                                vlSelf->__Vfunc_mubi4_test_false_strict__494__val 
                                    = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                vlSelf->__Vfunc_mubi4_test_false_strict__494__Vfuncout 
                                    = (9U == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__494__val));
                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__494__Vfuncout))) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    } else {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) {
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                        }
                    }
                } else if (([&]() {
                            vlSelf->__Vfunc_mubi4_test_false_strict__495__val 
                                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                            vlSelf->__Vfunc_mubi4_test_false_strict__495__Vfuncout 
                                = (9U == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__495__val));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__495__Vfuncout))) {
                    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x48U;
                    }
                } else {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) {
                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                    }
                }
            }
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    if (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) 
         & (~ ((0x53U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)) 
               | (6U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    if (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__496__val 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__start_stop_escalate_en;
                vlSelf->__Vfunc_mubi4_test_invalid__496__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__496__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__496__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__496__Vfuncout))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d = 1U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    if (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__497__val 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                vlSelf->__Vfunc_mubi4_test_invalid__497__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__497__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__497__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__497__Vfuncout))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 9U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d = 1U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    if (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__498__val 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_prim_mubi4_sender_rma_ack__DOT__mubi_int;
                vlSelf->__Vfunc_mubi4_test_invalid__498__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__498__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__498__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__498__Vfuncout))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d = 1U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_d 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc)
            ? (0x3fU & ((IData)(1U) + (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q)))
            : 0U);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_urnd_req_d 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__xoshiro_seed_en)) 
           & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_urnd_req_q) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__req_sec_wipe_urnd_keys_q) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__spurious_secure_wipe_ack_d 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__spurious_secure_wipe_ack_q) 
           | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_ack) 
              & ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_q)) 
                 & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_wr_sec_wipe_onehot 
        = ((((0x1fU == (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
            << 0x1fU) | ((((0x1eU == (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                          << 0x1eU) | ((((0x1dU == 
                                          (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == 
                                           (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                      & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                            & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_sec_wipe_err 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__state_reset));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__start_stop_fatal_error 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_err) 
           | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d) 
              | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_q) 
                 | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_error_q))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel 
        = ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base))) 
           && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel_ctrl));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr 
        = (0x1fU & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base)
                     ? (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q)
                     : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en_ctrl) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__xoshiro_seed_en) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[1U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[2U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[3U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[4U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[5U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[6U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[7U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U];
    } else if (((~ (IData)((0U != (((((((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U] 
                                         | vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U]) 
                                        | vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U]) 
                                       | vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U]) 
                                      | vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U]) 
                                     | vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U]) 
                                    | vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U]) 
                                   | vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U])))) 
                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[0U] 
            = Vadd_64_test__ConstPool__CONST_h954211c2_0[0U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[1U] 
            = Vadd_64_test__ConstPool__CONST_h954211c2_0[1U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[2U] 
            = Vadd_64_test__ConstPool__CONST_h954211c2_0[2U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[3U] 
            = Vadd_64_test__ConstPool__CONST_h954211c2_0[3U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[4U] 
            = Vadd_64_test__ConstPool__CONST_h954211c2_0[4U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[5U] 
            = Vadd_64_test__ConstPool__CONST_h954211c2_0[5U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[6U] 
            = Vadd_64_test__ConstPool__CONST_h954211c2_0[6U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[7U] 
            = Vadd_64_test__ConstPool__CONST_h954211c2_0[7U];
    } else if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][0U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[1U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][1U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[2U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][2U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[3U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][3U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[4U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][4U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[5U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][5U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[6U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][6U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[7U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][7U];
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[1U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[2U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[3U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[4U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[5U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[6U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[7U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U];
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__sec_wipe_err_d 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__sec_wipe_err_q) 
           | ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base)) 
               | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_sec_wipe_err) 
                  | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                      & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q)) 
                     | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)) 
                        | ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd)))))) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_sec_wipe_err)));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_3 = 0xfU;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__next_stack_wr_ptr = 0U;
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_3 
            = (0xfU & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2) 
                        & (((~ (IData)((0xfU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))) 
                            & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read)) 
                           | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                              & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))
                        ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                            & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                               >> 4U)) ? 0U : (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
                                                & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                                   >> 4U))
                                                ? 0xfU
                                                : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)))
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__next_stack_wr_ptr 
            = vlSelf->__VdfgRegularize_hd87f99a1_2_22;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__next_loop_addr_info 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write)
            ? vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT____Vcellinp__loop_info_stack__push_data_i
            : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage
           [(7U & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)
                     ? 0U : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_22)) 
                   - (IData)(1U)))]);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)) 
           & ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn)));
    __Vfunc_mubi4_bool_to_mubi__484__val = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__start_stop_fatal_error) 
                                            | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_all_zero) 
                                               | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__predec_error) 
                                                  | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_spurious_we_err) 
                                                     | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_rdata_err) 
                                                        | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_err) 
                                                           | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__non_controller_reg_intg_violation) 
                                                              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_addr_err))))))));
    __Vfunc_mubi4_bool_to_mubi__484__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__484__val)
                                                  ? 6U
                                                  : 9U);
    __Vfunc_mubi4_or_hi__483__b = __Vfunc_mubi4_bool_to_mubi__484__Vfuncout;
    __Vfunc_mubi4_or_hi__483__a = vlSelf->add_64_test__DOT__dut__DOT__core_escalate_en;
    __Vfunc_mubi4_or__485__b = __Vfunc_mubi4_or_hi__483__b;
    __Vfunc_mubi4_or__485__a = __Vfunc_mubi4_or_hi__483__a;
    __Vfunc_mubi4_or__485__a_in = __Vfunc_mubi4_or__485__a;
    __Vfunc_mubi4_or__485__b_in = __Vfunc_mubi4_or__485__b;
    vlSelf->__Vfunc_mubi4_or__485__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__485__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_or__485__a_in) 
                                               | (IData)(__Vfunc_mubi4_or__485__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_or__485__a_in) 
                                                   & (IData)(__Vfunc_mubi4_or__485__b_in)))));
    vlSelf->__Vfunc_mubi4_or__485__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__485__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_or__485__a_in) 
                                               & (IData)(__Vfunc_mubi4_or__485__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_or__485__a_in) 
                                                   | (IData)(__Vfunc_mubi4_or__485__b_in)))));
    __Vfunc_mubi4_or__485__Vfuncout = vlSelf->__Vfunc_mubi4_or__485__out;
    __Vfunc_mubi4_or_hi__483__Vfuncout = __Vfunc_mubi4_or__485__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__controller_fatal_escalate_en 
        = __Vfunc_mubi4_or_hi__483__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack_reqd 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en) 
           & (1U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (0U == (7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (1U == (7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (2U == (7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (3U == (7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (4U == (7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (5U == (7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (6U == (7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (7U == (7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->add_64_test__DOT__dut__DOT__imem_addr_core 
        = (0x1fffU & ((IData)(4U) + (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_kill_d = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) {
        if (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) 
             & ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final)) 
                | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____VdfgRegularize_h1abe2abd_0_0)))) {
            vlSelf->add_64_test__DOT__dut__DOT__imem_addr_core 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr;
        } else {
            if (((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr) 
                   == (0x3fffU & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__next_loop_addr_info 
                                          >> 7U)))) 
                  & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__next_stack_wr_ptr))) 
                 & (1U < ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop)
                           ? vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                          [(7U & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                   - (IData)(1U)) - (IData)(1U)))]
                           : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec)
                               ? (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                                  [(7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                          - (IData)(1U)))] 
                                  - (IData)(1U)) : 
                              ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write)
                                ? vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations
                                : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                               [(7U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                       - (IData)(1U)))])))))) {
                vlSelf->add_64_test__DOT__dut__DOT__imem_addr_core 
                    = (0x1fffU & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__next_loop_addr_info 
                                          >> 0x15U)));
            }
            if (([&]() {
                        vlSelf->__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__501__insn_data 
                            = (IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_rdata);
                        vlSelf->__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__501__Vfuncout 
                            = (((0x63U == (0x7fU & vlSelf->__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__501__insn_data)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__501__insn_data))) 
                               | (0x67U == (0x7fU & vlSelf->__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__501__insn_data)));
                    }(), (IData)(vlSelf->__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__501__Vfuncout))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_kill_d = 1U;
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch = 0U;
            }
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__imem_addr_core 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_a_err) 
           | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_b_err) 
              | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack_reqd) 
                 & ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_reqd)) 
                    & (8U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec))));
    vlSelf->add_64_test__DOT__dut__DOT__imem_index 
        = (0x7ffU & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_access_core)
                      ? ((IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_addr_core) 
                         >> 2U) : (IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_index_bus)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_internal_state_err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error_d) 
           | (((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_d)) 
               | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_cnt_err) 
                  | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                     & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_intg_err))))) 
              | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_hw_err) 
                 | (((~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum) 
                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err))) 
                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_spurious_we_err)) 
                    | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__spurious_secure_wipe_ack_q) 
                       | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_q) 
                          | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__sec_wipe_err_q)))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_data_addr_err 
        = ((~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err) 
               & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_11) 
                   | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_14)) 
                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_28)))) 
           & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
              & ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn))
                   ? (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall)
                   : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw) 
                      | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_store_req_raw))) 
                 & ((0U != (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
                            >> 0xcU)) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                                          & (0U != 
                                             (0x1fU 
                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked)))) 
                                         | ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                                            & (0U != 
                                               (3U 
                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked)))))))));
    vlSelf->__VdfgRegularize_hd87f99a1_2_635 = ((0U 
                                                 != 
                                                 (0x7ffffffU 
                                                  & (IData)(
                                                            (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                             >> 5U)))) 
                                                & ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err)) 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_b)));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = (0x7ffU & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_index) 
                     ^ (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                                >> 0x35U))));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7f0U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                                                      >> 4U)), 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x70fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0) 
              << 4U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x3ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 0xaU));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x5ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 9U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x6ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 8U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x77fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 7U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7bfU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 6U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7dfU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 5U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7efU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 4U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 7U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7f7U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 3U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 8U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7fbU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 2U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 9U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7fdU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 1U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 0xaU));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7feU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | (IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7feU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7dfU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 5U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7fdU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0) 
              << 1U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7bfU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 6U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7fbU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0) 
              << 2U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x77fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 7U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 6U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7f7U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0) 
              << 3U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 7U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x6ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 8U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 8U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7efU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0) 
              << 4U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 9U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x5ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 9U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__21__03a11__KET__ 
        = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                     << 0xbU) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_index))) 
                   ^ vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)(((((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                      << 0xbU) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_index))) 
                    ^ vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0) 
                   >> 0x20U));
    __Vtemp_4 = ((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                 ^ (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)(((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                   ^ (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_4 >> 0x20U));
    __Vtemp_5 = (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U])));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_5 >> 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_static) 
           | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
              & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum) 
                  & ((0U != (0x7ffffffU & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                   >> 5U)))) 
                     & ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err)) 
                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_a)))) 
                 | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum) 
                     | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum)) 
                    & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_635)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = (0x7ffU & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__21__03a11__KET__) 
                     ^ (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                                >> 0x35U))));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7f0U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                                                      >> 4U)), 2U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x70fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0) 
              << 4U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x3ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 0xaU));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x5ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 9U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x6ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 8U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x77fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 7U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7bfU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 6U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7dfU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 5U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7efU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 4U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 7U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7f7U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 3U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 8U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7fbU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 2U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 9U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7fdU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 1U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 0xaU));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7feU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | (IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped;
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7feU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7dfU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 5U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7fdU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0) 
              << 1U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7bfU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 6U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7fbU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0) 
              << 2U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x77fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 7U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 6U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7f7U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0) 
              << 3U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 7U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x6ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 8U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 8U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7efU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0) 
              << 4U));
    add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 9U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x5ffU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 9U));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__32__03a22__KET__ 
        = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__non_insn_addr_software_err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid_err) 
           | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_sw_err) 
              | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_err) 
                 | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err) 
                    | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_data_addr_err)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__addr_scr 
        = (0x7ffU & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__32__03a22__KET__) 
                     ^ (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                                >> 0x35U))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_insn_addr_err 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__non_insn_addr_software_err)) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__imem_addr_err));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__addr_mux 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__93__val 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__read_en;
                vlSelf->__Vfunc_mubi4_test_true_loose__93__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__93__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__93__Vfuncout))
            ? (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__addr_scr)
            : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__waddr_scr_q));
    __Vfunc_mubi4_and_hi__73__b = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__addr_scr) 
                                    == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__waddr_scr_q))
                                    ? 6U : 9U);
    __Vfunc_mubi4_and_hi__74__b = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_or_hi__75__b = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__write_pending_q;
    __Vfunc_mubi4_or_hi__75__a = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
    __Vfunc_mubi4_or__76__b = __Vfunc_mubi4_or_hi__75__b;
    __Vfunc_mubi4_or__76__a = __Vfunc_mubi4_or_hi__75__a;
    __Vfunc_mubi4_or__76__a_in = __Vfunc_mubi4_or__76__a;
    __Vfunc_mubi4_or__76__b_in = __Vfunc_mubi4_or__76__b;
    vlSelf->__Vfunc_mubi4_or__76__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__76__out)) 
                                         | ((2U & ((IData)(__Vfunc_mubi4_or__76__a_in) 
                                                   | (IData)(__Vfunc_mubi4_or__76__b_in))) 
                                            | (1U & 
                                               ((IData)(__Vfunc_mubi4_or__76__a_in) 
                                                & (IData)(__Vfunc_mubi4_or__76__b_in)))));
    vlSelf->__Vfunc_mubi4_or__76__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__76__out)) 
                                         | ((8U & ((IData)(__Vfunc_mubi4_or__76__a_in) 
                                                   & (IData)(__Vfunc_mubi4_or__76__b_in))) 
                                            | (4U & 
                                               ((IData)(__Vfunc_mubi4_or__76__a_in) 
                                                | (IData)(__Vfunc_mubi4_or__76__b_in)))));
    __Vfunc_mubi4_or__76__Vfuncout = vlSelf->__Vfunc_mubi4_or__76__out;
    __Vfunc_mubi4_or_hi__75__Vfuncout = __Vfunc_mubi4_or__76__Vfuncout;
    __Vfunc_mubi4_and_hi__74__a = __Vfunc_mubi4_or_hi__75__Vfuncout;
    __Vfunc_mubi4_and__77__b = __Vfunc_mubi4_and_hi__74__b;
    __Vfunc_mubi4_and__77__a = __Vfunc_mubi4_and_hi__74__a;
    __Vfunc_mubi4_and__77__a_in = __Vfunc_mubi4_and__77__a;
    __Vfunc_mubi4_and__77__b_in = __Vfunc_mubi4_and__77__b;
    vlSelf->__Vfunc_mubi4_and__77__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__77__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_and__77__a_in) 
                                               & (IData)(__Vfunc_mubi4_and__77__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_and__77__a_in) 
                                                   | (IData)(__Vfunc_mubi4_and__77__b_in)))));
    vlSelf->__Vfunc_mubi4_and__77__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__77__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_and__77__a_in) 
                                               | (IData)(__Vfunc_mubi4_and__77__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_and__77__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__77__b_in)))));
    __Vfunc_mubi4_and__77__Vfuncout = vlSelf->__Vfunc_mubi4_and__77__out;
    __Vfunc_mubi4_and_hi__74__Vfuncout = __Vfunc_mubi4_and__77__Vfuncout;
    __Vfunc_mubi4_and_hi__73__a = __Vfunc_mubi4_and_hi__74__Vfuncout;
    __Vfunc_mubi4_and__78__b = __Vfunc_mubi4_and_hi__73__b;
    __Vfunc_mubi4_and__78__a = __Vfunc_mubi4_and_hi__73__a;
    __Vfunc_mubi4_and__78__a_in = __Vfunc_mubi4_and__78__a;
    __Vfunc_mubi4_and__78__b_in = __Vfunc_mubi4_and__78__b;
    vlSelf->__Vfunc_mubi4_and__78__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__78__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_and__78__a_in) 
                                               & (IData)(__Vfunc_mubi4_and__78__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_and__78__a_in) 
                                                   | (IData)(__Vfunc_mubi4_and__78__b_in)))));
    vlSelf->__Vfunc_mubi4_and__78__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__78__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_and__78__a_in) 
                                               | (IData)(__Vfunc_mubi4_and__78__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_and__78__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__78__b_in)))));
    __Vfunc_mubi4_and__78__Vfuncout = vlSelf->__Vfunc_mubi4_and__78__out;
    __Vfunc_mubi4_and_hi__73__Vfuncout = __Vfunc_mubi4_and__78__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__addr_collision_d 
        = __Vfunc_mubi4_and_hi__73__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__non_insn_addr_software_err) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_insn_addr_err));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_software_err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__software_errs_fatal_q));
}

extern const VlUnpacked<CData/*2:0*/, 512> Vadd_64_test__ConstPool__TABLE_h8c982ba2_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vadd_64_test__ConstPool__TABLE_hcf85fe49_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vadd_64_test__ConstPool__TABLE_ha9c8f8f8_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vadd_64_test__ConstPool__TABLE_he1094e9d_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vadd_64_test__ConstPool__TABLE_hf8b658e0_0;
extern const VlWide<8>/*255:0*/ Vadd_64_test__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vadd_64_test___024root___nba_comb__TOP__20(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___nba_comb__TOP__20\n"); );
    // Init
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30 = 0;
    CData/*1:0*/ add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31;
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31 = 0;
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_2_626;
    __VdfgRegularize_hd87f99a1_2_626 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__103__Vfuncout;
    __Vfunc_mubi4_test_true_loose__103__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__103__val;
    __Vfunc_mubi4_test_true_loose__103__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__109__Vfuncout;
    __Vfunc_mubi4_and_hi__109__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__109__a;
    __Vfunc_mubi4_and_hi__109__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__109__b;
    __Vfunc_mubi4_and_hi__109__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__110__Vfuncout;
    __Vfunc_mubi4_and__110__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__110__a;
    __Vfunc_mubi4_and__110__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__110__b;
    __Vfunc_mubi4_and__110__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__110__a_in;
    __Vfunc_mubi4_and__110__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__110__b_in;
    __Vfunc_mubi4_and__110__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__111__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__111__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__111__val;
    __Vfunc_mubi4_bool_to_mubi__111__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__266__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__266__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__266__val;
    __Vfunc_mubi4_bool_to_mubi__266__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__267__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__267__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__267__val;
    __Vfunc_mubi4_bool_to_mubi__267__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__268__Vfuncout;
    __Vfunc_mubi4_and_hi__268__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__268__a;
    __Vfunc_mubi4_and_hi__268__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__268__b;
    __Vfunc_mubi4_and_hi__268__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__269__Vfuncout;
    __Vfunc_mubi4_and_hi__269__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__269__a;
    __Vfunc_mubi4_and_hi__269__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__269__b;
    __Vfunc_mubi4_and_hi__269__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__270__Vfuncout;
    __Vfunc_mubi4_or_hi__270__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__270__a;
    __Vfunc_mubi4_or_hi__270__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__270__b;
    __Vfunc_mubi4_or_hi__270__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__271__Vfuncout;
    __Vfunc_mubi4_or__271__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__271__a;
    __Vfunc_mubi4_or__271__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__271__b;
    __Vfunc_mubi4_or__271__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__271__a_in;
    __Vfunc_mubi4_or__271__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__271__b_in;
    __Vfunc_mubi4_or__271__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__272__Vfuncout;
    __Vfunc_mubi4_and__272__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__272__a;
    __Vfunc_mubi4_and__272__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__272__b;
    __Vfunc_mubi4_and__272__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__272__a_in;
    __Vfunc_mubi4_and__272__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__272__b_in;
    __Vfunc_mubi4_and__272__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__273__Vfuncout;
    __Vfunc_mubi4_and__273__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__273__a;
    __Vfunc_mubi4_and__273__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__273__b;
    __Vfunc_mubi4_and__273__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__273__a_in;
    __Vfunc_mubi4_and__273__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__273__b_in;
    __Vfunc_mubi4_and__273__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__283__Vfuncout;
    __Vfunc_mubi4_test_true_loose__283__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__283__val;
    __Vfunc_mubi4_test_true_loose__283__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__284__Vfuncout;
    __Vfunc_mubi4_and_hi__284__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__284__a;
    __Vfunc_mubi4_and_hi__284__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__284__b;
    __Vfunc_mubi4_and_hi__284__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__285__Vfuncout;
    __Vfunc_mubi4_and__285__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__285__a;
    __Vfunc_mubi4_and__285__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__285__b;
    __Vfunc_mubi4_and__285__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__285__a_in;
    __Vfunc_mubi4_and__285__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__285__b_in;
    __Vfunc_mubi4_and__285__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__296__Vfuncout;
    __Vfunc_mubi4_test_true_loose__296__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__296__val;
    __Vfunc_mubi4_test_true_loose__296__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__297__Vfuncout;
    __Vfunc_mubi4_test_true_loose__297__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__297__val;
    __Vfunc_mubi4_test_true_loose__297__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__298__Vfuncout;
    __Vfunc_mubi4_test_true_loose__298__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__298__val;
    __Vfunc_mubi4_test_true_loose__298__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__299__Vfuncout;
    __Vfunc_mubi4_test_true_loose__299__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__299__val;
    __Vfunc_mubi4_test_true_loose__299__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__304__Vfuncout;
    __Vfunc_mubi4_and_hi__304__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__304__a;
    __Vfunc_mubi4_and_hi__304__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__304__b;
    __Vfunc_mubi4_and_hi__304__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__305__Vfuncout;
    __Vfunc_mubi4_and__305__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__305__a;
    __Vfunc_mubi4_and__305__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__305__b;
    __Vfunc_mubi4_and__305__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__305__a_in;
    __Vfunc_mubi4_and__305__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__305__b_in;
    __Vfunc_mubi4_and__305__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__306__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__306__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__306__val;
    __Vfunc_mubi4_bool_to_mubi__306__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__307__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__307__val;
    __Vfunc_mubi4_bool_to_mubi__307__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__486__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__486__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__486__val;
    __Vfunc_mubi4_bool_to_mubi__486__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__504__Vfuncout;
    __Vfunc_mubi4_test_true_loose__504__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__504__val;
    __Vfunc_mubi4_test_true_loose__504__val = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[0U] = 0U;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U];
    }
    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[0U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[1U] = 0U;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[1U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U];
    }
    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[1U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[2U] = 0U;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[2U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U];
    }
    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[2U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[3U] = 0U;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[3U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U];
    }
    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[3U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[4U] = 0U;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[4U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U];
    }
    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((0x10U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[4U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[5U] = 0U;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[5U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U];
    }
    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((0x20U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[5U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[6U] = 0U;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[6U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U];
    }
    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((0x40U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[6U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[7U] = 0U;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[7U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U];
    }
    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((0x80U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[7U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base)
            ? ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base_urnd)
                ? vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U]
                : 0U) : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__reg_intg_violation_err 
        = (((~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_3) 
                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err))) 
            & ((((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                 | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                    | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                       | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                          | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                             | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                   | (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_a_intg_dec__err_o))))))))) 
                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
               | (((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                   | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                      | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                         | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                            | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                               | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                  | ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                     | (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_b_intg_dec__err_o))))))))) 
                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)))) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
               & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                  & ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid)) 
                     & (0x7d8U != (0xfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))))) 
              & (0U != (((3U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_bignum))
                          ? 0xffU : (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                                      & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn))
                                      ? (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_sel_base)
                                      : 0U)) & (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__err_o))) 
                                                 << 7U) 
                                                | (((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__err_o))) 
                                                    << 6U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__err_o))) 
                                                       << 5U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__4__KET____DOT__i_secded_dec__err_o))) 
                                                          << 4U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__3__KET____DOT__i_secded_dec__err_o))) 
                                                             << 3U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__2__KET____DOT__i_secded_dec__err_o))) 
                                                                << 2U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__1__KET____DOT__i_secded_dec__err_o))) 
                                                                   << 1U) 
                                                                  | (0U 
                                                                     != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__0__KET____DOT__i_secded_dec__err_o)))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[5U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[6U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[7U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__internal_fatal_err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_software_err) 
           | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_internal_state_err) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__reg_intg_violation_err)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U] 
        = (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
            << 7U) | (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
                              >> 0x20U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
            << 0xeU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
                         >> 0x19U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
            << 0x15U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
                          >> 0x12U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
            << 0x1cU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
                          >> 0xbU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
            >> 4U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) << 0x1cU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
            << 3U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) >> 4U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
            << 0xaU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
                         >> 0x1dU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
            << 0x11U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
                          >> 0x16U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
            >> 0xfU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
                                 >> 0x20U)) << 0x11U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel)
            ? vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg
            : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__internal_fatal_err) 
           | (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__505__val 
                        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__controller_fatal_escalate_en;
                    vlSelf->__Vfunc_mubi4_test_true_loose__505__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__505__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__505__Vfuncout)) 
              | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_strict__506__val 
                        = vlSelf->add_64_test__DOT__dut__DOT__mubi_rma_req;
                    vlSelf->__Vfunc_mubi4_test_true_strict__506__Vfuncout 
                        = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__506__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__506__Vfuncout))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[0U] 
        = (IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                       ? (((QData)((IData)(
                                                           vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U])))
                                       : (((QData)((IData)(
                                                           vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[0U]))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
        = ((0xffffff80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]) 
           | (IData)(((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U])))
                                           : (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[0U]))))) 
                      >> 0x20U)));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[0U] = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
            = (0x2aU | (0xffffff80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]));
    } else if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[0U] 
            = (IData)((0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U])))));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
            = ((0xffffff80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]) 
               | (IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U])))) 
                          >> 0x20U)));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
        = ((0x7fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                    >> 7U)))
                                           : (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                                    >> 7U)))))) 
              << 7U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
        = ((0xffffc000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                     >> 7U)))
                                            : (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                                     >> 7U)))))) 
               >> 0x19U) | ((IData)(((0x7fffffffffULL 
                                      & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                          ? (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                              << 0x39U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                 << 0x19U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                   >> 7U)))
                                          : (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                              << 0x39U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                 << 0x19U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                                   >> 7U))))) 
                                     >> 0x20U)) << 7U)));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
            = (0x7fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]);
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
            = (0x1500U | (0xffffc000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]));
    } else if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
            = ((0x7fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                 >> 7U)))) 
                  << 7U));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
            = ((0xffffc000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                  >> 7U)))) 
                   >> 0x19U) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                >> 7U))) 
                                         >> 0x20U)) 
                                << 7U)));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
        = ((0x3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                    >> 0xeU)))
                                           : (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                    >> 0xeU)))))) 
              << 0xeU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
        = ((0xffe00000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                   << 0x12U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                     >> 0xeU)))
                                            : (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                   << 0x12U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                     >> 0xeU)))))) 
               >> 0x12U) | ((IData)(((0x7fffffffffULL 
                                      & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                          ? (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                   >> 0xeU)))
                                          : (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                   >> 0xeU))))) 
                                     >> 0x20U)) << 0xeU)));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
            = (0x3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]);
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
            = (0xa8000U | (0xffe00000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]));
    } else if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
            = ((0x3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                 >> 0xeU)))) 
                  << 0xeU));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
            = ((0xffe00000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                << 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                  >> 0xeU)))) 
                   >> 0x12U) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                              << 0x12U) 
                                             | ((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                >> 0xeU))) 
                                         >> 0x20U)) 
                                << 0xeU)));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
        = ((0x1fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                    >> 0x15U)))
                                           : (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                    >> 0x15U)))))) 
              << 0x15U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
        = ((0xf0000000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                   << 0xbU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                     >> 0x15U)))
                                            : (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                   << 0xbU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                     >> 0x15U)))))) 
               >> 0xbU) | ((IData)(((0x7fffffffffULL 
                                     & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                         ? (((QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                             << 0x2bU) 
                                            | (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                  >> 0x15U)))
                                         : (((QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                             << 0x2bU) 
                                            | (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                  >> 0x15U))))) 
                                    >> 0x20U)) << 0x15U)));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
            = (0x1fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]);
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
            = (0x5400000U | (0xf0000000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]));
    } else if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
            = ((0x1fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                 >> 0x15U)))) 
                  << 0x15U));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
            = ((0xf0000000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                  >> 0x15U)))) 
                   >> 0xbU) | ((IData)(((0x7fffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                             << 0xbU) 
                                            | ((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                               >> 0x15U))) 
                                        >> 0x20U)) 
                               << 0x15U)));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
        = ((0xfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                    >> 0x1cU)))
                                           : (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                    >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U] 
        = (((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                         ? (((QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                  >> 0x1cU)))
                                         : (((QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                  >> 0x1cU)))))) 
            >> 4U) | ((IData)(((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                          >> 0x1cU)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                          >> 0x1cU))))) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
        = ((0xfffffff8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]) 
           | ((IData)(((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                     >> 0x1cU)))
                                            : (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                     >> 0x1cU))))) 
                       >> 0x20U)) >> 4U));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
            = (0xfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]);
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U] = 0xa0000000U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
            = (2U | (0xfffffff8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]));
    } else if ((0x10U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
            = ((0xfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                    >> 0x1cU))))) 
                  << 0x1cU));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U] 
            = (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                  >> 0x1cU))))) 
                >> 4U) | ((IData)(((0x7fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                   >> 0x1cU)))) 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
            = ((0xfffffff8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]) 
               | ((IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                     >> 0x1cU)))) 
                           >> 0x20U)) >> 4U));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
        = ((7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                    >> 3U)))
                                           : (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                    >> 3U)))))) 
              << 3U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
        = ((0xfffffc00U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                     >> 3U)))
                                            : (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                     >> 3U)))))) 
               >> 0x1dU) | ((IData)(((0x7fffffffffULL 
                                      & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                          ? (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                   >> 3U)))
                                          : (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                   >> 3U))))) 
                                     >> 0x20U)) << 3U)));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
            = (7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]);
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
            = (0x150U | (0xfffffc00U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]));
    } else if ((0x20U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
            = ((7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                 >> 3U)))) 
                  << 3U));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
            = ((0xfffffc00U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                  >> 3U)))) 
                   >> 0x1dU) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                >> 3U))) 
                                         >> 0x20U)) 
                                << 3U)));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
        = ((0x3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                    >> 0xaU)))
                                           : (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                    >> 0xaU)))))) 
              << 0xaU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
        = ((0xfffe0000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                     >> 0xaU)))
                                            : (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                     >> 0xaU)))))) 
               >> 0x16U) | ((IData)(((0x7fffffffffULL 
                                      & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                          ? (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                   >> 0xaU)))
                                          : (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                   >> 0xaU))))) 
                                     >> 0x20U)) << 0xaU)));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
            = (0x3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]);
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
            = (0xa800U | (0xfffe0000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]));
    } else if ((0x40U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
            = ((0x3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                 >> 0xaU)))) 
                  << 0xaU));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
            = ((0xfffe0000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                  >> 0xaU)))) 
                   >> 0x16U) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                              << 0x16U) 
                                             | ((QData)((IData)(
                                                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                >> 0xaU))) 
                                         >> 0x20U)) 
                                << 0xaU)));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
        = ((0x1ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                    >> 0x11U)))
                                           : (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                    >> 0x11U)))))) 
              << 0x11U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[9U] 
        = (0xffffffU & (((IData)((0x7fffffffffULL & 
                                  ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                    ? (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                        << 0x2fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                         << 0xfU) | 
                                        ((QData)((IData)(
                                                         vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                         >> 0x11U)))
                                    : (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                        << 0x2fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                         << 0xfU) | 
                                        ((QData)((IData)(
                                                         vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                         >> 0x11U)))))) 
                         >> 0xfU) | ((IData)(((0x7fffffffffULL 
                                               & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                                       << 0xfU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                         >> 0x11U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                                       << 0xfU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                         >> 0x11U))))) 
                                              >> 0x20U)) 
                                     << 0x11U)));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
            = (0x1ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]);
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[9U] = 0x540000U;
    } else if ((0x80U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
            = ((0x1ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                 >> 0x11U)))) 
                  << 0x11U));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[9U] 
            = (0xffffffU & (((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                          << 0xfU) 
                                         | ((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                            >> 0x11U)))) 
                             >> 0xfU) | ((IData)(((0x7fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                                       << 0xfU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                         >> 0x11U))) 
                                                  >> 0x20U)) 
                                         << 0x11U)));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_req 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rnd_req_raw) 
           & ((~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
                  | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_err))) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_complete 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_req) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_d 
        = ((~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__controller_start) 
               | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_complete))) 
           & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_en) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_rep_err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_complete) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_err_q));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_fips_err 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_fips_q)) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_complete));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__err_bits_d 
        = ((0x1000U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q) 
                       << 4U)) | ((0x800U & ((0xfffff800U 
                                              & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q) 
                                                 << 4U)) 
                                             | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__start_stop_fatal_error) 
                                                 | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_all_zero) 
                                                    | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__predec_error) 
                                                       | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_addr_err) 
                                                          | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mubi_err) 
                                                             | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_spurious_we_err)))))) 
                                                << 0xbU))) 
                                  | ((0x400U & ((0xfffffc00U 
                                                 & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q) 
                                                    << 4U)) 
                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__non_controller_reg_intg_violation) 
                                                   << 0xaU))) 
                                     | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_rdata_err) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_err) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_fips_err) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_rep_err) 
                                                          << 6U) 
                                                         | (0x3fU 
                                                            & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q)))))))));
    __Vfunc_mubi4_bool_to_mubi__486__val = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_rep_err) 
                                            | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_fips_err));
    __Vfunc_mubi4_bool_to_mubi__486__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__486__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__controller_recov_escalate_en 
        = __Vfunc_mubi4_bool_to_mubi__486__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__core_err_bits 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__err_bits_q) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__err_bits_d));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_d 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__502__val 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__controller_fatal_escalate_en;
                vlSelf->__Vfunc_mubi4_test_invalid__502__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__502__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__502__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__502__Vfuncout)) 
           | (([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__503__val 
                        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__controller_recov_escalate_en;
                    vlSelf->__Vfunc_mubi4_test_invalid__503__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__503__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__503__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__503__Vfuncout)) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_q)));
    __Vfunc_mubi4_test_true_loose__504__val = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__controller_recov_escalate_en;
    __Vfunc_mubi4_test_true_loose__504__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__504__val));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__recoverable_err 
        = __Vfunc_mubi4_test_true_loose__504__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__wr_en 
        = (1U & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__core_err_bits) 
                  >> 0xbU) | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__non_core_err_bits_d) 
                              >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT____VdfgRegularize_hab8adb3c_3_11 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__recoverable_err) 
            | ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__software_errs_fatal_q)) 
               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err))) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__recoverable_err_q));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
           | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_err) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__recoverable_err)));
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req 
        = (1U & (IData)((((0U != (0x1700U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__core_err_bits))) 
                          | (0U != (0xdU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__non_core_err_bits_d)))) 
                         | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__wr_en))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear = 1U;
    if ((0x10U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall) {
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear = 0U;
                        }
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)))) {
                    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) {
                        if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__done_complete)))) {
                            if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall) {
                                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_valid 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err)) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__start_secure_wipe 
        = (((0xaU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)) 
            | (0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) 
           & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__done_complete) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw;
    if ((0x10U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d 
            = ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))
                ? 0x1dU : ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))
                            ? 0x1dU : ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))
                                        ? ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))
                                            ? ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)
                                                ? 0x13U
                                                : 0xaU)
                                            : 0x1dU)
                                        : 0x1dU)));
    } else if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
        } else if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
            } else if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) {
                if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__done_complete) {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 4U;
                } else if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall) {
                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x13U;
                }
            }
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
        }
    } else if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
        } else if ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
        } else if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__controller_start) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0xaU;
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
    }
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear = 1U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d 
            = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_err)
                ? 0x1dU : 4U);
    }
    if ((0x1dU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err)) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid));
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_valid) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_d 
            = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final) 
               & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr) 
                  == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr)));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final;
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_d 
            = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear)) 
               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_q));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en = 0U;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_d 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__start_secure_wipe) 
           | ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_ack)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_q)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__start_secure_wipe) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_q));
    vlSelf->add_64_test__DOT__dut__DOT__mems_sec_wipe 
        = ((0x1dU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d)) 
           & (0x1dU != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_d 
        = (((0x1dU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)) 
            | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we) 
                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__is_not_running_q)) 
               | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_cnt_clear_int)))
            ? 0U : ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
                      & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall))) 
                     & (0xffffffffU != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q))
                     ? ((IData)(1U) + vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q)
                     : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_start 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q)) 
           & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
               & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn) 
                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_24))) 
              | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_req) 
                 | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_queued_q))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_commit 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_reqd));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req)
            ? (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing)
            : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_load_req 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_store_req 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_store_req_raw));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q)
             ? 3U : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf)) 
           & (- (IData)((((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf)) 
                          & ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing))) 
                         | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q)))));
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_d 
            = vlSelf->add_64_test__DOT__dut__DOT__imem_rdata;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_d 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__mac_bignum_predec_d 
            = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_op_en) 
                << 1U) | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_acc_rd_en));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_d 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_insn;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ispr_bignum_predec_d 
            = (((((8U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                 << 0x11U) | ((((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                               << 0x10U) | ((((6U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                             << 0xfU) 
                                            | ((((5U 
                                                  == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                 & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                << 0xeU) 
                                               | ((((4U 
                                                     == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                    & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                   << 0xdU) 
                                                  | ((((3U 
                                                        == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                       & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                      << 0xcU) 
                                                     | ((((2U 
                                                           == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                         << 0xbU) 
                                                        | ((((1U 
                                                              == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                            << 0xaU) 
                                                           | (((0U 
                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                              << 9U))))))))) 
               | ((((8U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                    & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                   << 8U) | ((((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                              << 7U) | ((((6U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                         << 6U) | (
                                                   (((5U 
                                                      == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                    << 5U) 
                                                   | ((((4U 
                                                         == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                       << 4U) 
                                                      | ((((3U 
                                                            == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                          << 3U) 
                                                         | ((((2U 
                                                               == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                             << 2U) 
                                                            | ((((1U 
                                                                  == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                                 & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                                << 1U) 
                                                               | ((0U 
                                                                   == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)))))))))));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_predec_d 
            = (((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base) 
                  & (0x8000ULL == (0xf8000ULL & vlSelf->add_64_test__DOT__dut__DOT__imem_rdata))) 
                 | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_base) 
                    & (0x100000ULL == (0x1f00000ULL 
                                       & vlSelf->add_64_test__DOT__dut__DOT__imem_rdata)))) 
                << 5U) | (((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_a_base) 
                             & (0x8000ULL == (0xf8000ULL 
                                              & vlSelf->add_64_test__DOT__dut__DOT__imem_rdata))) 
                            | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_b_base) 
                                & (0x100000ULL == (0x1f00000ULL 
                                                   & vlSelf->add_64_test__DOT__dut__DOT__imem_rdata))) 
                               | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base) 
                                  & (0x80ULL == (0xf80ULL 
                                                 & vlSelf->add_64_test__DOT__dut__DOT__imem_rdata))))) 
                           << 4U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__branch_insn) 
                                      << 3U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__jump_insn) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__loop_insn) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__sel_insn))))));
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_d 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_d 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__mac_bignum_predec_d 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_d 
            = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear)) 
               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q));
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ispr_bignum_predec_d = 0U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_predec_d = 0U;
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ispr_bignum_predec_d 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_predec_d 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_d 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
            | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero))
            ? vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_zero_flags
            : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en)
                ? vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_insn
                : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT____VdfgRegularize_h36e82705_1_0) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req));
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf 
        = ((0x1dU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d)) 
           & ((~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q) 
                  | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req))) 
              | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_d) 
                 | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_err))));
    vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__imem_sec_wipe = 0U;
    if ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__status_q))) {
        if ((0x10U & vlSelf->add_64_test__DOT__dut__DOT__reg2hw[3U])) {
            if ((0xd8U != (0xffU & (vlSelf->add_64_test__DOT__dut__DOT__reg2hw[3U] 
                                    >> 5U)))) {
                if ((0xc3U == (0xffU & (vlSelf->add_64_test__DOT__dut__DOT__reg2hw[3U] 
                                        >> 5U)))) {
                    vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe = 1U;
                }
                if ((0xc3U != (0xffU & (vlSelf->add_64_test__DOT__dut__DOT__reg2hw[3U] 
                                        >> 5U)))) {
                    if ((0x1eU == (0xffU & (vlSelf->add_64_test__DOT__dut__DOT__reg2hw[3U] 
                                            >> 5U)))) {
                        vlSelf->add_64_test__DOT__dut__DOT__imem_sec_wipe = 1U;
                    }
                }
            }
        }
    } else if (vlSelf->add_64_test__DOT__dut__DOT__busy_execute_q) {
        if (vlSelf->add_64_test__DOT__dut__DOT__mems_sec_wipe) {
            vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe = 1U;
            vlSelf->add_64_test__DOT__dut__DOT__imem_sec_wipe = 1U;
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_d 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_complete)) 
           & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_q) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_start)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_queued_d 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req)) 
           & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_data_ignore_q)
               ? (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_start)
               : ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_start)) 
                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_queued_q))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_a_indirect_onehot 
        = ((((0x1fU == (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
            << 0x1fU) | ((((0x1eU == (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                          << 0x1eU) | ((((0x1dU == 
                                          (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == 
                                           (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                      & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                            & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_b_indirect_onehot 
        = ((((0x1fU == (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
            << 0x1fU) | ((((0x1eU == (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                          << 0x1eU) | ((((0x1dU == 
                                          (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == 
                                           (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                      & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                            & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_indirect_onehot 
        = ((((0x1fU == (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
            << 0x1fU) | ((((0x1eU == (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                          << 0x1eU) | ((((0x1dU == 
                                          (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == 
                                           (0x1fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                      & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                            & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_commit) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack_reqd));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read 
        = ((0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_wr_ptr_commit 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((1U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((2U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((3U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((4U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((5U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((6U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_1 
        = ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 7U) | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_2 
        = ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 6U) | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_3 
        = ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 5U) | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_4 
        = ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 4U) | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_5 
        = ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 3U) | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_6 
        = ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 2U) | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_7 
        = ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 1U) | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_8 
        = ((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
               | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_acc_wr_en 
        = (((2U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
            & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en) 
               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit))) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init));
    vlSelf->add_64_test__DOT__dut__DOT__dmem_req_core 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_load_req) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_store_req));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((1U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((2U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((3U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((4U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((5U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((6U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((8U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((9U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xaU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xcU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xfU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x10U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x11U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x12U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x14U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x17U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x18U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1bU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1dU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1eU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1fU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    __Vtableidx2 = ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                      | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint)) 
                     << 8U) | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger)
                                  ? 1U : 3U) << 5U) 
                               | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger) 
                                    | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)) 
                                   << 4U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d) 
                                              << 3U) 
                                             | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))));
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = Vadd_64_test__ConstPool__TABLE_h8c982ba2_0
        [__Vtableidx2];
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd 
        = Vadd_64_test__ConstPool__TABLE_hcf85fe49_0
        [__Vtableidx2];
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd 
        = Vadd_64_test__ConstPool__TABLE_ha9c8f8f8_0
        [__Vtableidx2];
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr 
        = Vadd_64_test__ConstPool__TABLE_he1094e9d_0
        [__Vtableidx2];
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr 
        = Vadd_64_test__ConstPool__TABLE_hf8b658e0_0
        [__Vtableidx2];
    vlSelf->add_64_test__DOT__dut__DOT__dmem_write 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__busy_execute_q)
            ? (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_store_req)
            : (IData)(vlSelf->add_64_test__DOT__dut__DOT__dmem_write_bus));
    if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))) {
                                if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) {
                                    if (([&]() {
                                                vlSelf->__Vfunc_mubi4_test_false_strict__494__val 
                                                    = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                                vlSelf->__Vfunc_mubi4_test_false_strict__494__Vfuncout 
                                                    = 
                                                    (9U 
                                                     == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__494__val));
                                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__494__Vfuncout))) {
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))) {
                                if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop)))) {
                                    if (([&]() {
                                                vlSelf->__Vfunc_mubi4_test_false_strict__495__val 
                                                    = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                                vlSelf->__Vfunc_mubi4_test_false_strict__495__Vfuncout 
                                                    = 
                                                    (9U 
                                                     == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__495__val));
                                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__495__Vfuncout))) {
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))) {
                                if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop)))) {
                                    if (([&]() {
                                                vlSelf->__Vfunc_mubi4_test_false_strict__495__val 
                                                    = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                                vlSelf->__Vfunc_mubi4_test_false_strict__495__Vfuncout 
                                                    = 
                                                    (9U 
                                                     == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__495__val));
                                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__495__Vfuncout))) {
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__done_core = 
        (((((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)) 
            & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_q)) 
           | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) 
               & (6U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) 
              & ([&]() {
                            vlSelf->__Vfunc_mubi4_test_false_strict__500__val 
                                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                            vlSelf->__Vfunc_mubi4_test_false_strict__500__Vfuncout 
                                = (9U == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__500__val));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__500__Vfuncout)))) 
          | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__spurious_urnd_ack_error) 
              & (~ ((0x79U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)) 
                    | (0x6fU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))))) 
             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_q))) 
         | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d) 
            & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_q))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__macro_req 
        = (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__intg_error_w_q)) 
            & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf))) 
           & ([&]() {
                vlSelf->__Vfunc_mubi4_or_hi__80__b 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__write_pending_q;
                vlSelf->__Vfunc_mubi4_or_hi__81__b 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
                vlSelf->__Vfunc_mubi4_or_hi__81__a 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__read_en;
                vlSelf->__Vfunc_mubi4_or__82__b = vlSelf->__Vfunc_mubi4_or_hi__81__b;
                vlSelf->__Vfunc_mubi4_or__82__a = vlSelf->__Vfunc_mubi4_or_hi__81__a;
                vlSelf->__Vfunc_mubi4_or__82__a_in 
                    = vlSelf->__Vfunc_mubi4_or__82__a;
                vlSelf->__Vfunc_mubi4_or__82__b_in 
                    = vlSelf->__Vfunc_mubi4_or__82__b;
                vlSelf->__Vfunc_mubi4_or__82__out = 
                    ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__82__out)) 
                     | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__82__a_in) 
                               | (IData)(vlSelf->__Vfunc_mubi4_or__82__b_in))) 
                        | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__82__a_in) 
                                 & (IData)(vlSelf->__Vfunc_mubi4_or__82__b_in)))));
                vlSelf->__Vfunc_mubi4_or__82__out = 
                    ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__82__out)) 
                     | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__82__a_in) 
                               & (IData)(vlSelf->__Vfunc_mubi4_or__82__b_in))) 
                        | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__82__a_in) 
                                 | (IData)(vlSelf->__Vfunc_mubi4_or__82__b_in)))));
                vlSelf->__Vfunc_mubi4_or__82__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__82__out;
                vlSelf->__Vfunc_mubi4_or_hi__81__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__82__Vfuncout;
                vlSelf->__Vfunc_mubi4_or_hi__80__a 
                    = vlSelf->__Vfunc_mubi4_or_hi__81__Vfuncout;
                vlSelf->__Vfunc_mubi4_or__83__b = vlSelf->__Vfunc_mubi4_or_hi__80__b;
                vlSelf->__Vfunc_mubi4_or__83__a = vlSelf->__Vfunc_mubi4_or_hi__80__a;
                vlSelf->__Vfunc_mubi4_or__83__a_in 
                    = vlSelf->__Vfunc_mubi4_or__83__a;
                vlSelf->__Vfunc_mubi4_or__83__b_in 
                    = vlSelf->__Vfunc_mubi4_or__83__b;
                vlSelf->__Vfunc_mubi4_or__83__out = 
                    ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__83__out)) 
                     | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__83__a_in) 
                               | (IData)(vlSelf->__Vfunc_mubi4_or__83__b_in))) 
                        | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__83__a_in) 
                                 & (IData)(vlSelf->__Vfunc_mubi4_or__83__b_in)))));
                vlSelf->__Vfunc_mubi4_or__83__out = 
                    ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__83__out)) 
                     | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__83__a_in) 
                               & (IData)(vlSelf->__Vfunc_mubi4_or__83__b_in))) 
                        | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__83__a_in) 
                                 | (IData)(vlSelf->__Vfunc_mubi4_or__83__b_in)))));
                vlSelf->__Vfunc_mubi4_or__83__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__83__out;
                vlSelf->__Vfunc_mubi4_or_hi__80__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__83__Vfuncout;
                vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                    = vlSelf->__Vfunc_mubi4_or_hi__80__Vfuncout;
                vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout)));
    vlSelf->add_64_test__DOT__dut__DOT__dmem_req = 
        ((IData)(vlSelf->add_64_test__DOT__dut__DOT__busy_execute_q)
          ? (IData)(vlSelf->add_64_test__DOT__dut__DOT__dmem_req_core)
          : (IData)(vlSelf->add_64_test__DOT__dut__DOT__dmem_req_bus));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_en = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_sel_otp = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q;
    if (((IData)(vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe) 
         & (0x1eU != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_en = 1U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_sel_otp = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_d = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_q;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d = 1U;
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_q;
    }
    if ((0x10U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack) {
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_en = 1U;
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_sel_otp = 1U;
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_d = 1U;
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_en = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_sel_otp = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q;
    if (((IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_sec_wipe) 
         & (8U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_en = 1U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_sel_otp = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_d = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_q;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d = 1U;
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_q;
    }
    if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack) {
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_en = 1U;
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_sel_otp = 1U;
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_d = 1U;
                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d = 0U;
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_wr_sec_wipe_onehot;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] = 0U;
    } else if (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall))) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_indirect_onehot;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] 
            = (IData)((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_a_indirect_onehot)) 
                        << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_b_indirect_onehot))));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] 
            = (IData)(((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_a_indirect_onehot)) 
                         << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_b_indirect_onehot))) 
                       >> 0x20U));
    } else if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_we_bignum_onehot_enc__out_o;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] 
            = (IData)((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_a_bignum_onehot_enc__out_o)) 
                        << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_b_bignum_onehot_enc__out_o))));
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] 
            = (IData)(((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_a_bignum_onehot_enc__out_o)) 
                         << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_b_bignum_onehot_enc__out_o))) 
                       >> 0x20U));
    } else if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] = 0U;
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U];
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en) 
           & ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack)) 
              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_commit)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack) 
           & ((8U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack)));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_wr_ptr_commit) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_3;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__d_i 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__next_stack_wr_ptr;
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__d_i 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en 
        = ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
             | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_1) 
                | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
            << 7U) | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                        | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_2) 
                           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                       << 6U) | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                   | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_3) 
                                      | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                  << 5U) | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                              | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_4) 
                                                 | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                                 | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_5) 
                                                    | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                                    | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_6) 
                                                       | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                                       | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_7) 
                                                          | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                                        | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_8) 
                                                           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U] 
        = Vadd_64_test__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U] 
        = Vadd_64_test__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U] 
        = Vadd_64_test__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U] 
        = Vadd_64_test__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U] 
        = Vadd_64_test__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U] 
        = Vadd_64_test__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U] 
        = Vadd_64_test__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U] 
        = Vadd_64_test__ConstPool__CONST_h9e67c271_0[7U];
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U];
    } else if ((1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_acc_wr_en)))) {
        if ((1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[4U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[5U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[6U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[7U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U] = 0U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U] = 0U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U] = 0U;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U] = 0U;
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[0U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[1U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[2U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[3U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[4U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[5U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[6U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[7U];
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[1U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[2U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[3U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[4U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[5U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[6U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[7U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[8U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[9U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xaU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xbU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xcU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xdU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xeU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xfU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x10U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x11U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x12U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x13U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x14U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x15U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x16U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x17U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x18U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x19U] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1aU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1bU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1cU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1dU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1eU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1fU] 
        = add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31;
    __VdfgRegularize_hd87f99a1_2_626 = (((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31) 
                                         << 0x1fU) 
                                        | ((0x40000000U 
                                            & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0)))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT____VdfgRegularize_hab8adb3c_3_11) 
           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__done_core));
    vlSelf->add_64_test__DOT__dut__DOT__busy_execute_d 
        = ((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__done_core)) 
           & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__busy_execute_q) 
              | (IData)(vlSelf->add_64_test__DOT__dut__DOT__start_d)));
    __Vfunc_mubi4_bool_to_mubi__111__val = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__macro_req;
    __Vfunc_mubi4_bool_to_mubi__111__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__111__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__111__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__otbn_dmem_scramble_key_req_busy 
        = ((0x1eU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__state_d)) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d));
    vlSelf->add_64_test__DOT__dut__DOT__otbn_imem_scramble_key_req_busy 
        = ((8U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__state_d)) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
        = ((((0x1fU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
            << 0x1fU) | ((((0x1eU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                          << 0x1eU) | ((((0x1dU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                          & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                             & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                      & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                            & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                               & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                  & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                     & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                        & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                           & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                              & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1fU & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write)
                     ? ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                        - (IData)(1U)) : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1fU & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read)
                     ? ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                        - (IData)(1U)) : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read) 
           ^ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__dmem_gnt = 
        ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q) 
         & (IData)(vlSelf->add_64_test__DOT__dut__DOT__dmem_req));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot_unbuf 
        = (((QData)((IData)((1U & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31) 
                                   >> 1U)))) << 0x3fU) 
           | (((QData)((IData)((1U & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30) 
                                      >> 1U)))) << 0x3eU) 
              | (((QData)((IData)((1U & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29) 
                                         >> 1U)))) 
                  << 0x3dU) | (((QData)((IData)((1U 
                                                 & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28) 
                                                    >> 1U)))) 
                                << 0x3cU) | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27) 
                                                                  >> 1U)))) 
                                              << 0x3bU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26) 
                                                                     >> 1U)))) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25) 
                                                                        >> 1U)))) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24) 
                                                                           >> 1U)))) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23) 
                                                                              >> 1U)))) 
                                                          << 0x37U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22) 
                                                                                >> 1U)))) 
                                                             << 0x36U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21) 
                                                                                >> 1U)))) 
                                                                << 0x35U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20) 
                                                                                >> 1U)))) 
                                                                   << 0x34U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19) 
                                                                                >> 1U)))) 
                                                                      << 0x33U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18) 
                                                                                >> 1U)))) 
                                                                         << 0x32U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17) 
                                                                                >> 1U)))) 
                                                                            << 0x31U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16) 
                                                                                >> 1U)))) 
                                                                               << 0x30U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(__VdfgRegularize_hd87f99a1_2_626))))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
        = (__VdfgRegularize_hd87f99a1_2_626 | ((0x80000000U 
                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31) 
                                                   << 0x1eU)) 
                                               | ((0x40000000U 
                                                   & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30) 
                                                      << 0x1dU)) 
                                                  | ((0x20000000U 
                                                      & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29) 
                                                         << 0x1cU)) 
                                                     | ((0x10000000U 
                                                         & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28) 
                                                            << 0x1bU)) 
                                                        | ((0x8000000U 
                                                            & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27) 
                                                               << 0x1aU)) 
                                                           | ((0x4000000U 
                                                               & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26) 
                                                                  << 0x19U)) 
                                                              | ((0x2000000U 
                                                                  & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25) 
                                                                     << 0x18U)) 
                                                                 | ((0x1000000U 
                                                                     & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24) 
                                                                        << 0x17U)) 
                                                                    | ((0x800000U 
                                                                        & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23) 
                                                                           << 0x16U)) 
                                                                       | ((0x400000U 
                                                                           & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22) 
                                                                              << 0x15U)) 
                                                                          | ((0x200000U 
                                                                              & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21) 
                                                                                << 0x14U)) 
                                                                             | ((0x100000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1)) 
                                                                                | (1U 
                                                                                & ((IData)(add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0) 
                                                                                >> 1U))))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    vlSelf->add_64_test__DOT__dut__DOT____VdfgRegularize_hab8adb3c_3_1 
        = (1U & (~ ((IData)(vlSelf->add_64_test__DOT__dut__DOT__busy_execute_d) 
                    | (IData)(vlSelf->add_64_test__DOT__dut__DOT__start_d))));
    __Vfunc_mubi4_test_true_loose__103__val = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__103__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__103__val));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__103__Vfuncout;
    __Vfunc_mubi4_and_hi__109__b = (0xfU & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d)));
    __Vfunc_mubi4_and_hi__109__a = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_and__110__b = __Vfunc_mubi4_and_hi__109__b;
    __Vfunc_mubi4_and__110__a = __Vfunc_mubi4_and_hi__109__a;
    __Vfunc_mubi4_and__110__a_in = __Vfunc_mubi4_and__110__a;
    __Vfunc_mubi4_and__110__b_in = __Vfunc_mubi4_and__110__b;
    vlSelf->__Vfunc_mubi4_and__110__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__110__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__110__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__110__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__110__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__110__b_in)))));
    vlSelf->__Vfunc_mubi4_and__110__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__110__out)) 
                                           | ((8U & 
                                               ((IData)(__Vfunc_mubi4_and__110__a_in) 
                                                | (IData)(__Vfunc_mubi4_and__110__b_in))) 
                                              | (4U 
                                                 & ((IData)(__Vfunc_mubi4_and__110__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__110__b_in)))));
    __Vfunc_mubi4_and__110__Vfuncout = vlSelf->__Vfunc_mubi4_and__110__out;
    __Vfunc_mubi4_and_hi__109__Vfuncout = __Vfunc_mubi4_and__110__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__109__Vfuncout;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
    } else {
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_set) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_set) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_set) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_set) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_set) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_set) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_set) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_set) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__ram_alert 
        = (((([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__114__val 
                            = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_d;
                        vlSelf->__Vfunc_mubi4_test_invalid__114__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__114__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__114__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__114__Vfuncout)) 
             | ([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__115__val 
                            = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d;
                        vlSelf->__Vfunc_mubi4_test_invalid__115__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__115__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__115__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__115__Vfuncout))) 
            | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__116__val 
                        = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                    vlSelf->__Vfunc_mubi4_test_invalid__116__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__116__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__116__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__116__Vfuncout))) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__117__val 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                vlSelf->__Vfunc_mubi4_test_invalid__117__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__117__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__117__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__117__Vfuncout)));
    vlSelf->add_64_test__DOT__dut__DOT__status_d = 
        ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf)
          ? 0xffU : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)
                      ? 4U : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__busy_execute_d)
                               ? 1U : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__otbn_dmem_scramble_key_req_busy)
                                        ? 2U : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__otbn_imem_scramble_key_req_busy)
                                                 ? 3U
                                                 : 0U)))));
    vlSelf->__VdfgRegularize_hd87f99a1_2_56 = (0xfU 
                                               & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2) 
                                                   & (((~ (IData)(
                                                                  (0xfU 
                                                                   == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))) 
                                                       & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write)) 
                                                      | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read) 
                                                         & (0U 
                                                            != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                                   ? 
                                                  (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read) 
                                                    & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                                       >> 4U))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write) 
                                                     & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                                        >> 4U))
                                                     ? 0xfU
                                                     : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)))
                                                   : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[0U] 
        = (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[1U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
            << 7U) | (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
                              >> 0x20U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[2U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
            << 0xeU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
                         >> 0x19U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[3U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
            << 0x15U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
                          >> 0x12U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[4U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
            << 0x1cU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
                          >> 0xbU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[5U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
            >> 4U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) << 0x1cU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[6U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
            << 3U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) >> 4U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[7U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
            << 0xaU) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
                         >> 0x1dU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[8U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
            << 0x11U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
                          >> 0x16U) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[9U] 
        = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
            >> 0xfU) | ((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
                                 >> 0x20U)) << 0x11U));
    __Vfunc_mubi4_bool_to_mubi__267__val = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__dmem_gnt) 
                                            & (IData)(vlSelf->add_64_test__DOT__dut__DOT__dmem_write));
    __Vfunc_mubi4_bool_to_mubi__267__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__267__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_en_d 
        = __Vfunc_mubi4_bool_to_mubi__267__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__266__val = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__dmem_gnt) 
                                            & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__dmem_write)));
    __Vfunc_mubi4_bool_to_mubi__266__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__266__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__read_en 
        = __Vfunc_mubi4_bool_to_mubi__266__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_trigger 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)
            ? 0xfU : (0xfU & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2) 
                               & (((~ (IData)((0xfU 
                                               == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))) 
                                   & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read)) 
                                  | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write) 
                                     & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))
                               ? (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write) 
                                   & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0U : 
                                  (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read) 
                                    & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                       >> 4U)) ? 0xfU
                                    : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)))
                               : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__alert_o 
        = ((((([&]() {
                            vlSelf->__Vfunc_mubi4_test_invalid__97__val 
                                = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
                            vlSelf->__Vfunc_mubi4_test_invalid__97__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__97__val)) 
                                            | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__97__val)))));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__97__Vfuncout)) 
              | ([&]() {
                            vlSelf->__Vfunc_mubi4_test_invalid__98__val 
                                = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__addr_collision_q;
                            vlSelf->__Vfunc_mubi4_test_invalid__98__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__98__val)) 
                                            | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__98__val)))));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__98__Vfuncout))) 
             | ([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__99__val 
                            = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__write_pending_q;
                        vlSelf->__Vfunc_mubi4_test_invalid__99__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__99__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__99__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__99__Vfuncout))) 
            | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__100__val 
                        = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_invalid__100__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__100__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__100__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__100__Vfuncout))) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__ram_alert));
    vlSelf->add_64_test__DOT__dut__DOT__done = ((([&]() {
                    vlSelf->__Vfunc_is_busy_status__66__status 
                        = vlSelf->add_64_test__DOT__dut__DOT__status_q;
                    vlSelf->__Vfunc_is_busy_status__66__Vfuncout 
                        = ((((1U == (IData)(vlSelf->__Vfunc_is_busy_status__66__status)) 
                             | (2U == (IData)(vlSelf->__Vfunc_is_busy_status__66__status))) 
                            | (3U == (IData)(vlSelf->__Vfunc_is_busy_status__66__status))) 
                           | (4U == (IData)(vlSelf->__Vfunc_is_busy_status__66__status)));
                }(), (IData)(vlSelf->__Vfunc_is_busy_status__66__Vfuncout)) 
                                                 & (~ 
                                                    ([&]() {
                        vlSelf->__Vfunc_is_busy_status__67__status 
                            = vlSelf->add_64_test__DOT__dut__DOT__status_d;
                        vlSelf->__Vfunc_is_busy_status__67__Vfuncout 
                            = ((((1U == (IData)(vlSelf->__Vfunc_is_busy_status__67__status)) 
                                 | (2U == (IData)(vlSelf->__Vfunc_is_busy_status__67__status))) 
                                | (3U == (IData)(vlSelf->__Vfunc_is_busy_status__67__status))) 
                               | (4U == (IData)(vlSelf->__Vfunc_is_busy_status__67__status)));
                    }(), (IData)(vlSelf->__Vfunc_is_busy_status__67__Vfuncout)))) 
                                                & (IData)(vlSelf->add_64_test__DOT__dut__DOT__init_sec_wipe_done_q));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__next_stack_wr_ptr 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)
            ? 0U : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_56));
    __Vfunc_mubi4_test_true_loose__297__val = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_en_d;
    __Vfunc_mubi4_test_true_loose__297__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__297__val));
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_en_b 
        = __Vfunc_mubi4_test_true_loose__297__Vfuncout;
    __Vfunc_mubi4_test_true_loose__296__val = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__read_en;
    __Vfunc_mubi4_test_true_loose__296__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__296__val));
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__read_en_b 
        = __Vfunc_mubi4_test_true_loose__296__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__addr_mux 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__288__val 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__read_en;
                vlSelf->__Vfunc_mubi4_test_true_loose__288__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__288__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__288__Vfuncout))
            ? (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__addr_scr)
            : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__waddr_scr_q));
    __Vfunc_mubi4_and_hi__284__b = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__read_en;
    __Vfunc_mubi4_and_hi__284__a = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
    __Vfunc_mubi4_and__285__b = __Vfunc_mubi4_and_hi__284__b;
    __Vfunc_mubi4_and__285__a = __Vfunc_mubi4_and_hi__284__a;
    __Vfunc_mubi4_and__285__a_in = __Vfunc_mubi4_and__285__a;
    __Vfunc_mubi4_and__285__b_in = __Vfunc_mubi4_and__285__b;
    vlSelf->__Vfunc_mubi4_and__285__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__285__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__285__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__285__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__285__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__285__b_in)))));
    vlSelf->__Vfunc_mubi4_and__285__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__285__out)) 
                                           | ((8U & 
                                               ((IData)(__Vfunc_mubi4_and__285__a_in) 
                                                | (IData)(__Vfunc_mubi4_and__285__b_in))) 
                                              | (4U 
                                                 & ((IData)(__Vfunc_mubi4_and__285__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__285__b_in)))));
    __Vfunc_mubi4_and__285__Vfuncout = vlSelf->__Vfunc_mubi4_and__285__out;
    __Vfunc_mubi4_and_hi__284__Vfuncout = __Vfunc_mubi4_and__285__Vfuncout;
    __Vfunc_mubi4_test_true_loose__283__val = __Vfunc_mubi4_and_hi__284__Vfuncout;
    __Vfunc_mubi4_test_true_loose__283__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__283__val));
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__rw_collision 
        = __Vfunc_mubi4_test_true_loose__283__Vfuncout;
    __Vfunc_mubi4_and_hi__268__b = (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__addr_scr) 
                                     == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__waddr_scr_q))
                                     ? 6U : 9U);
    __Vfunc_mubi4_and_hi__269__b = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__read_en;
    __Vfunc_mubi4_or_hi__270__b = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q;
    __Vfunc_mubi4_or_hi__270__a = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
    __Vfunc_mubi4_or__271__b = __Vfunc_mubi4_or_hi__270__b;
    __Vfunc_mubi4_or__271__a = __Vfunc_mubi4_or_hi__270__a;
    __Vfunc_mubi4_or__271__a_in = __Vfunc_mubi4_or__271__a;
    __Vfunc_mubi4_or__271__b_in = __Vfunc_mubi4_or__271__b;
    vlSelf->__Vfunc_mubi4_or__271__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__271__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_or__271__a_in) 
                                               | (IData)(__Vfunc_mubi4_or__271__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_or__271__a_in) 
                                                   & (IData)(__Vfunc_mubi4_or__271__b_in)))));
    vlSelf->__Vfunc_mubi4_or__271__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__271__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_or__271__a_in) 
                                               & (IData)(__Vfunc_mubi4_or__271__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_or__271__a_in) 
                                                   | (IData)(__Vfunc_mubi4_or__271__b_in)))));
    __Vfunc_mubi4_or__271__Vfuncout = vlSelf->__Vfunc_mubi4_or__271__out;
    __Vfunc_mubi4_or_hi__270__Vfuncout = __Vfunc_mubi4_or__271__Vfuncout;
    __Vfunc_mubi4_and_hi__269__a = __Vfunc_mubi4_or_hi__270__Vfuncout;
    __Vfunc_mubi4_and__272__b = __Vfunc_mubi4_and_hi__269__b;
    __Vfunc_mubi4_and__272__a = __Vfunc_mubi4_and_hi__269__a;
    __Vfunc_mubi4_and__272__a_in = __Vfunc_mubi4_and__272__a;
    __Vfunc_mubi4_and__272__b_in = __Vfunc_mubi4_and__272__b;
    vlSelf->__Vfunc_mubi4_and__272__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__272__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__272__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__272__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__272__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__272__b_in)))));
    vlSelf->__Vfunc_mubi4_and__272__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__272__out)) 
                                           | ((8U & 
                                               ((IData)(__Vfunc_mubi4_and__272__a_in) 
                                                | (IData)(__Vfunc_mubi4_and__272__b_in))) 
                                              | (4U 
                                                 & ((IData)(__Vfunc_mubi4_and__272__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__272__b_in)))));
    __Vfunc_mubi4_and__272__Vfuncout = vlSelf->__Vfunc_mubi4_and__272__out;
    __Vfunc_mubi4_and_hi__269__Vfuncout = __Vfunc_mubi4_and__272__Vfuncout;
    __Vfunc_mubi4_and_hi__268__a = __Vfunc_mubi4_and_hi__269__Vfuncout;
    __Vfunc_mubi4_and__273__b = __Vfunc_mubi4_and_hi__268__b;
    __Vfunc_mubi4_and__273__a = __Vfunc_mubi4_and_hi__268__a;
    __Vfunc_mubi4_and__273__a_in = __Vfunc_mubi4_and__273__a;
    __Vfunc_mubi4_and__273__b_in = __Vfunc_mubi4_and__273__b;
    vlSelf->__Vfunc_mubi4_and__273__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__273__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__273__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__273__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__273__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__273__b_in)))));
    vlSelf->__Vfunc_mubi4_and__273__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__273__out)) 
                                           | ((8U & 
                                               ((IData)(__Vfunc_mubi4_and__273__a_in) 
                                                | (IData)(__Vfunc_mubi4_and__273__b_in))) 
                                              | (4U 
                                                 & ((IData)(__Vfunc_mubi4_and__273__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__273__b_in)))));
    __Vfunc_mubi4_and__273__Vfuncout = vlSelf->__Vfunc_mubi4_and__273__out;
    __Vfunc_mubi4_and_hi__268__Vfuncout = __Vfunc_mubi4_and__273__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__addr_collision_d 
        = __Vfunc_mubi4_and_hi__268__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__macro_write 
        = ((([&]() {
                    vlSelf->__Vfunc_mubi4_or_hi__280__b 
                        = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q;
                    vlSelf->__Vfunc_mubi4_or_hi__280__a 
                        = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
                    vlSelf->__Vfunc_mubi4_or__281__b 
                        = vlSelf->__Vfunc_mubi4_or_hi__280__b;
                    vlSelf->__Vfunc_mubi4_or__281__a 
                        = vlSelf->__Vfunc_mubi4_or_hi__280__a;
                    vlSelf->__Vfunc_mubi4_or__281__a_in 
                        = vlSelf->__Vfunc_mubi4_or__281__a;
                    vlSelf->__Vfunc_mubi4_or__281__b_in 
                        = vlSelf->__Vfunc_mubi4_or__281__b;
                    vlSelf->__Vfunc_mubi4_or__281__out 
                        = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__281__out)) 
                           | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__281__a_in) 
                                     | (IData)(vlSelf->__Vfunc_mubi4_or__281__b_in))) 
                              | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__281__a_in) 
                                       & (IData)(vlSelf->__Vfunc_mubi4_or__281__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__281__out 
                        = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__281__out)) 
                           | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__281__a_in) 
                                     & (IData)(vlSelf->__Vfunc_mubi4_or__281__b_in))) 
                              | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__281__a_in) 
                                       | (IData)(vlSelf->__Vfunc_mubi4_or__281__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__281__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__281__out;
                    vlSelf->__Vfunc_mubi4_or_hi__280__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__281__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__279__val 
                        = vlSelf->__Vfunc_mubi4_or_hi__280__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__279__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__279__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__279__Vfuncout)) 
            & (~ ([&]() {
                        vlSelf->__Vfunc_mubi4_test_true_loose__282__val 
                            = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__read_en;
                        vlSelf->__Vfunc_mubi4_test_true_loose__282__Vfuncout 
                            = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__282__val));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__282__Vfuncout)))) 
           & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__intg_error_w_q)));
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__macro_req 
        = (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__intg_error_w_q)) 
            & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf))) 
           & ([&]() {
                vlSelf->__Vfunc_mubi4_or_hi__275__b 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q;
                vlSelf->__Vfunc_mubi4_or_hi__276__b 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
                vlSelf->__Vfunc_mubi4_or_hi__276__a 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__read_en;
                vlSelf->__Vfunc_mubi4_or__277__b = vlSelf->__Vfunc_mubi4_or_hi__276__b;
                vlSelf->__Vfunc_mubi4_or__277__a = vlSelf->__Vfunc_mubi4_or_hi__276__a;
                vlSelf->__Vfunc_mubi4_or__277__a_in 
                    = vlSelf->__Vfunc_mubi4_or__277__a;
                vlSelf->__Vfunc_mubi4_or__277__b_in 
                    = vlSelf->__Vfunc_mubi4_or__277__b;
                vlSelf->__Vfunc_mubi4_or__277__out 
                    = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__277__out)) 
                       | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__277__a_in) 
                                 | (IData)(vlSelf->__Vfunc_mubi4_or__277__b_in))) 
                          | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__277__a_in) 
                                   & (IData)(vlSelf->__Vfunc_mubi4_or__277__b_in)))));
                vlSelf->__Vfunc_mubi4_or__277__out 
                    = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__277__out)) 
                       | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__277__a_in) 
                                 & (IData)(vlSelf->__Vfunc_mubi4_or__277__b_in))) 
                          | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__277__a_in) 
                                   | (IData)(vlSelf->__Vfunc_mubi4_or__277__b_in)))));
                vlSelf->__Vfunc_mubi4_or__277__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__277__out;
                vlSelf->__Vfunc_mubi4_or_hi__276__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__277__Vfuncout;
                vlSelf->__Vfunc_mubi4_or_hi__275__a 
                    = vlSelf->__Vfunc_mubi4_or_hi__276__Vfuncout;
                vlSelf->__Vfunc_mubi4_or__278__b = vlSelf->__Vfunc_mubi4_or_hi__275__b;
                vlSelf->__Vfunc_mubi4_or__278__a = vlSelf->__Vfunc_mubi4_or_hi__275__a;
                vlSelf->__Vfunc_mubi4_or__278__a_in 
                    = vlSelf->__Vfunc_mubi4_or__278__a;
                vlSelf->__Vfunc_mubi4_or__278__b_in 
                    = vlSelf->__Vfunc_mubi4_or__278__b;
                vlSelf->__Vfunc_mubi4_or__278__out 
                    = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__278__out)) 
                       | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__278__a_in) 
                                 | (IData)(vlSelf->__Vfunc_mubi4_or__278__b_in))) 
                          | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__278__a_in) 
                                   & (IData)(vlSelf->__Vfunc_mubi4_or__278__b_in)))));
                vlSelf->__Vfunc_mubi4_or__278__out 
                    = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__278__out)) 
                       | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__278__a_in) 
                                 & (IData)(vlSelf->__Vfunc_mubi4_or__278__b_in))) 
                          | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__278__a_in) 
                                   | (IData)(vlSelf->__Vfunc_mubi4_or__278__b_in)))));
                vlSelf->__Vfunc_mubi4_or__278__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__278__out;
                vlSelf->__Vfunc_mubi4_or_hi__275__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__278__Vfuncout;
                vlSelf->__Vfunc_mubi4_test_true_loose__274__val 
                    = vlSelf->__Vfunc_mubi4_or_hi__275__Vfuncout;
                vlSelf->__Vfunc_mubi4_test_true_loose__274__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__274__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__274__Vfuncout)));
    __Vtableidx5 = ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                      | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint)) 
                     << 8U) | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_trigger)
                                  ? 1U : 3U) << 5U) 
                               | ((((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_trigger) 
                                    | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)) 
                                   << 4U) | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d) 
                                              << 3U) 
                                             | (IData)(vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q)))));
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = Vadd_64_test__ConstPool__TABLE_h8c982ba2_0
        [__Vtableidx5];
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_pd 
        = Vadd_64_test__ConstPool__TABLE_hcf85fe49_0
        [__Vtableidx5];
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_nd 
        = Vadd_64_test__ConstPool__TABLE_ha9c8f8f8_0
        [__Vtableidx5];
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_clr 
        = Vadd_64_test__ConstPool__TABLE_he1094e9d_0
        [__Vtableidx5];
    vlSelf->add_64_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr 
        = Vadd_64_test__ConstPool__TABLE_hf8b658e0_0
        [__Vtableidx5];
    vlSelf->add_64_test__DOT__dut__DOT__u_intr_hw_done__DOT__g_intr_event__DOT__new_event 
        = (((vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
             [2U][0U] >> 0x18U) & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__intr_test_we)) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__done));
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_scr_pending_d 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__macro_write)
            ? 9U : ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__rw_collision)
                     ? 6U : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q)));
    vlSelf->add_64_test__DOT__dut__DOT__dmem_wpending 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__macro_write) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__286__val 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_en_d;
                vlSelf->__Vfunc_mubi4_test_true_loose__286__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__286__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__286__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__307__val = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__307__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__307__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__307__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__306__val = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__macro_req;
    __Vfunc_mubi4_bool_to_mubi__306__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__306__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__306__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_intr_state__DOT__wr_en 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_intr_hw_done__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__intr_state_we));
    vlSelf->add_64_test__DOT__dut__DOT____Vcellout__u_intr_hw_done__hw2reg_intr_state_d_o 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_intr_hw_done__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state__q));
    __Vfunc_mubi4_test_true_loose__299__val = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__299__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__299__val));
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__299__Vfuncout;
    __Vfunc_mubi4_test_true_loose__298__val = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__298__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__298__val));
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__298__Vfuncout;
    __Vfunc_mubi4_and_hi__304__b = (0xfU & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_d)));
    __Vfunc_mubi4_and_hi__304__a = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_and__305__b = __Vfunc_mubi4_and_hi__304__b;
    __Vfunc_mubi4_and__305__a = __Vfunc_mubi4_and_hi__304__a;
    __Vfunc_mubi4_and__305__a_in = __Vfunc_mubi4_and__305__a;
    __Vfunc_mubi4_and__305__b_in = __Vfunc_mubi4_and__305__b;
    vlSelf->__Vfunc_mubi4_and__305__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__305__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__305__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__305__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__305__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__305__b_in)))));
    vlSelf->__Vfunc_mubi4_and__305__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__305__out)) 
                                           | ((8U & 
                                               ((IData)(__Vfunc_mubi4_and__305__a_in) 
                                                | (IData)(__Vfunc_mubi4_and__305__b_in))) 
                                              | (4U 
                                                 & ((IData)(__Vfunc_mubi4_and__305__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__305__b_in)))));
    __Vfunc_mubi4_and__305__Vfuncout = vlSelf->__Vfunc_mubi4_and__305__out;
    __Vfunc_mubi4_and_hi__304__Vfuncout = __Vfunc_mubi4_and__305__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__304__Vfuncout;
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__ram_alert 
        = (((([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__309__val 
                            = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_d;
                        vlSelf->__Vfunc_mubi4_test_invalid__309__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__309__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__309__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__309__Vfuncout)) 
             | ([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__310__val 
                            = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_d;
                        vlSelf->__Vfunc_mubi4_test_invalid__310__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__310__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__310__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__310__Vfuncout))) 
            | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__311__val 
                        = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                    vlSelf->__Vfunc_mubi4_test_invalid__311__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__311__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__311__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__311__Vfuncout))) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__312__val 
                    = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                vlSelf->__Vfunc_mubi4_test_invalid__312__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__312__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__312__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__312__Vfuncout)));
    vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_intr_state__DOT__wr_data 
        = ((~ ((vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                [2U][0U] >> 0x18U) & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_intr_hw_done__DOT__g_intr_event__DOT__new_event)
               ? (IData)(vlSelf->add_64_test__DOT__dut__DOT____Vcellout__u_intr_hw_done__hw2reg_intr_state_d_o)
               : (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state__q)));
    vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__alert_o 
        = ((((([&]() {
                            vlSelf->__Vfunc_mubi4_test_invalid__292__val 
                                = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
                            vlSelf->__Vfunc_mubi4_test_invalid__292__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__292__val)) 
                                            | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__292__val)))));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__292__Vfuncout)) 
              | ([&]() {
                            vlSelf->__Vfunc_mubi4_test_invalid__293__val 
                                = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__addr_collision_q;
                            vlSelf->__Vfunc_mubi4_test_invalid__293__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__293__val)) 
                                            | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__293__val)))));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__293__Vfuncout))) 
             | ([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__294__val 
                            = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q;
                        vlSelf->__Vfunc_mubi4_test_invalid__294__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__294__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__294__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__294__Vfuncout))) 
            | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__295__val 
                        = vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_invalid__295__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__295__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__295__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__295__Vfuncout))) 
           | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_dmem__DOT__ram_alert));
}
