// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdmem_test.h for the primary calling header

#include "Vdmem_test__pch.h"
#include "Vdmem_test___024root.h"

VL_INLINE_OPT void Vdmem_test___024root___nba_comb__TOP__18(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw 
        = (((IData)((0U != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                     [0x1fU])) << 0x1fU) | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                      [0x1eU])) 
                                             << 0x1eU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                         [0x1dU])) 
                                                << 0x1dU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                            [0x1cU])) 
                                                   << 0x1cU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                               [0x1bU])) 
                                                      << 0x1bU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                  [0x1aU])) 
                                                         << 0x1aU) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                     [0x19U])) 
                                                            << 0x19U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                        [0x18U])) 
                                                               << 0x18U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                           [0x17U])) 
                                                                  << 0x17U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                              [0x16U])) 
                                                                     << 0x16U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x15U])) 
                                                                        << 0x15U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x14U])) 
                                                                           << 0x14U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x13U])) 
                                                                              << 0x13U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x12U])) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x11U])) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0x10U])) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xfU])) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xeU])) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xdU])) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xcU])) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xbU])) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0xaU])) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [9U])) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [8U])) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [7U])) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [6U])) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [5U])) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [4U])) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [3U])) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [2U])) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [1U])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_mux
                                                                                [0U]))))))))))))))))))))))))))))))));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U];
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
            = (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o);
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 7U) | (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
                                  >> 0x20U)));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0xeU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
                             >> 0x19U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 7U)));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x15U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0x12U) | ((IData)(
                                                   (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xeU)));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x1cU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0xbU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
                >> 4U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 3U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
                                   >> 0x20U)) >> 4U));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0xaU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
                             >> 0x1dU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 3U)));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x11U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0x16U) | ((IData)(
                                                   (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xaU)));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
                >> 0xfU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
                                     >> 0x20U)) << 0x11U));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[0U] 
        = (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[1U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
            << 7U) | (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
                              >> 0x20U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[2U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
            << 0xeU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
                         >> 0x19U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[3U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
            << 0x15U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
                          >> 0x12U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[4U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
            << 0x1cU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
                          >> 0xbU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[5U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
            >> 4U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) << 0x1cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[6U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
            << 3U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[7U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
            << 0xaU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
                         >> 0x1dU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[8U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
            << 0x11U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
                          >> 0x16U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[9U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
            >> 0xfU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
                                 >> 0x20U)) << 0x11U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[0U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[0U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[1U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[2U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[3U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[4U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[5U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[6U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[7U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[8U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U] 
        = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[9U] 
           & (- (IData)((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result;
    if ((0x7c0U == (0xfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata 
            = (0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw);
    } else if ((0x7c1U == (0xfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata 
            = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw 
                       >> 4U));
    } else if ((0x7d8U == (0xfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata = 0U;
    }
    if ((0x8000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])) {
        if ((1U & (~ (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                      >> 0xeU)))) {
            if ((1U & (~ (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                          >> 0xdU)))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl 
                    = ((0x40U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                        ? (0x3fU & ((IData)(1U) + (0x1fU 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))))
                        : ((0x10U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                            ? (0x3fU & ((IData)(1U) 
                                        + (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))))
                            : ((0x80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                                ? (0x3fU & ((IData)(1U) 
                                            + (0x1fU 
                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))))
                                : ((0x20U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                                    ? (((IData)(1U) 
                                        + (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                   >> 5U))) 
                                       << 5U) : (0x3fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))))))));
            }
        }
    } else if ((0x4000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])) {
        if ((0x2000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata;
        }
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl 
            = ((0x2000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])
                ? (0x3fffU & ((IData)(4U) + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q)))
                : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result);
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata_raw 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rs_insn)
            ? (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata 
               | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))
            : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata_raw;
    if ((0x7c0U == (0xfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata 
            = ((0xf0U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw) 
               | (0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata_raw));
    } else if ((0x7c1U == (0xfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata 
            = ((0xf0U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata_raw 
                         << 4U)) | (0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_rdata_raw));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_update_flags[0U] 
        = (0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_update_flags[1U] 
        = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata 
                   >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_update_flags
        [0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_update_flags
        [1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i[4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in
        [4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i[4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in
        [4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1eU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                     [0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1dU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1bU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [2U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x17U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1eU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1dU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                     [1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1bU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x17U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1eU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1dU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1bU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (4U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                     [2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x17U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1eU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1dU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1bU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                           [2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x17U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                     [3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1eU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                     [0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1dU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x1bU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [2U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0x17U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[0U] 
        = ((0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [0U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1eU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1dU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                     [1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x1bU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0x17U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[1U] 
        = ((0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [1U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1eU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1dU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x1bU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (4U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                     [2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0x17U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[2U] 
        = ((0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [2U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1eU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1dU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x1bU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                           [2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0x17U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                     [3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux[3U] 
        = ((0xfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
            [3U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__in_i
                              [4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_d[0U] 
        = (((IData)((0U != (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
                            [3U] & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel)))) 
            << 3U) | (((IData)((0U != (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
                                       [2U] & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel)))) 
                       << 2U) | (((IData)((0U != (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
                                                  [1U] 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel)))) 
                                  << 1U) | (0U != (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__u_flags_d_mux__DOT__in_mux
                                                   [0U] 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_d[1U] 
        = (((IData)((0U != (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
                            [3U] & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel)))) 
            << 3U) | (((IData)((0U != (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
                                       [2U] & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel)))) 
                       << 2U) | (((IData)((0U != (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
                                                  [1U] 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel)))) 
                                  << 1U) | (0U != (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__u_flags_d_mux__DOT__in_mux
                                                   [0U] 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel))))));
}

extern const VlWide<8>/*255:0*/ Vdmem_test__ConstPool__CONST_h954211c2_0;

VL_INLINE_OPT void Vdmem_test___024root___nba_comb__TOP__19(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___nba_comb__TOP__19\n"); );
    // Init
    CData/*3:0*/ dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 = 0;
    CData/*3:0*/ dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__59__Vfuncout;
    __Vfunc_mubi4_and_hi__59__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__59__a;
    __Vfunc_mubi4_and_hi__59__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__59__b;
    __Vfunc_mubi4_and_hi__59__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__60__Vfuncout;
    __Vfunc_mubi4_and_hi__60__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__60__a;
    __Vfunc_mubi4_and_hi__60__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__60__b;
    __Vfunc_mubi4_and_hi__60__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__61__Vfuncout;
    __Vfunc_mubi4_or_hi__61__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__61__a;
    __Vfunc_mubi4_or_hi__61__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__61__b;
    __Vfunc_mubi4_or_hi__61__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__62__Vfuncout;
    __Vfunc_mubi4_or__62__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__62__a;
    __Vfunc_mubi4_or__62__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__62__b;
    __Vfunc_mubi4_or__62__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__62__a_in;
    __Vfunc_mubi4_or__62__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__62__b_in;
    __Vfunc_mubi4_or__62__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__63__Vfuncout;
    __Vfunc_mubi4_and__63__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__63__a;
    __Vfunc_mubi4_and__63__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__63__b;
    __Vfunc_mubi4_and__63__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__63__a_in;
    __Vfunc_mubi4_and__63__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__63__b_in;
    __Vfunc_mubi4_and__63__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__64__Vfuncout;
    __Vfunc_mubi4_and__64__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__64__a;
    __Vfunc_mubi4_and__64__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__64__b;
    __Vfunc_mubi4_and__64__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__64__a_in;
    __Vfunc_mubi4_and__64__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__64__b_in;
    __Vfunc_mubi4_and__64__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__469__Vfuncout;
    __Vfunc_mubi4_or_hi__469__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__469__a;
    __Vfunc_mubi4_or_hi__469__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__469__b;
    __Vfunc_mubi4_or_hi__469__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__470__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__470__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__470__val;
    __Vfunc_mubi4_bool_to_mubi__470__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__471__Vfuncout;
    __Vfunc_mubi4_or__471__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__471__a;
    __Vfunc_mubi4_or__471__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__471__b;
    __Vfunc_mubi4_or__471__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__471__a_in;
    __Vfunc_mubi4_or__471__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__471__b_in;
    __Vfunc_mubi4_or__471__b_in = 0;
    QData/*63:0*/ __Vtemp_4;
    QData/*63:0*/ __Vtemp_5;
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__state_reset = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_cnt_clear_int = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_d = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base_urnd = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_ack = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_q;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_prim_mubi4_sender_rma_ack__DOT__mubi_int;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_q;
    if ((0x40U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    } else if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    } else if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__state_reset = 1U;
                        if (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request)) 
                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop))) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                        } else if (((IData)(vlSelf->dmem_test__DOT__dut__DOT__start_q) 
                                    | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request))) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init = 1U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_cnt_clear_int = 1U;
                            if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request) {
                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 6U;
                            } else {
                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req = 1U;
                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 6U;
                            }
                        }
                    } else {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    }
                } else {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                }
            } else if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                        }
                    } else {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    }
                } else {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                }
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req = 1U;
                    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 6U;
                    } else if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                    }
                } else {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                }
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                }
            }
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        }
    } else if ((0x20U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                } else if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
                    if (([&]() {
                                vlSelf->__Vfunc_mubi4_test_false_strict__479__val 
                                    = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                vlSelf->__Vfunc_mubi4_test_false_strict__479__Vfuncout 
                                    = (9U == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__479__val));
                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__479__Vfuncout))) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 6U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 6U;
                    } else {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0xbU;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 0U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_ack = 1U;
                    }
                } else {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                }
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                } else if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                } else {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_d = 1U;
                    if ((0x20U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc = 0U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d = 0U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_d = 0U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x10U;
                    }
                }
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        }
    } else if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd 
                = (0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q));
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd 
                = (1U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q));
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base 
                = (1U < (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q));
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base_urnd 
                = (1U < (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q));
            if ((0x1fU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x35U;
            }
        }
    } else if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        } else if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d 
                    = vlSelf->dmem_test__DOT__dut__DOT__mubi_rma_req;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d 
                    = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__should_lock_d)
                        ? 0x6fU : 0x79U);
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 9U;
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            }
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        }
    } else if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req = 1U;
                if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) {
                    if (([&]() {
                                vlSelf->__Vfunc_mubi4_test_false_strict__480__val 
                                    = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                vlSelf->__Vfunc_mubi4_test_false_strict__480__Vfuncout 
                                    = (9U == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__480__val));
                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__480__Vfuncout))) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
                    } else {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                        }
                    }
                } else if (([&]() {
                            vlSelf->__Vfunc_mubi4_test_false_strict__481__val 
                                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                            vlSelf->__Vfunc_mubi4_test_false_strict__481__Vfuncout 
                                = (9U == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__481__val));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__481__Vfuncout))) {
                    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x48U;
                    }
                } else {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d = 1U;
                    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x2cU;
                    }
                }
            }
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
        }
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d = 1U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    if (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) 
         & (~ ((0x53U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)) 
               | (6U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    if (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__482__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__start_stop_escalate_en;
                vlSelf->__Vfunc_mubi4_test_invalid__482__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__482__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__482__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__482__Vfuncout))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d = 1U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    if (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__483__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                vlSelf->__Vfunc_mubi4_test_invalid__483__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__483__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__483__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__483__Vfuncout))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d = 9U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d = 1U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    if (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__484__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_prim_mubi4_sender_rma_ack__DOT__mubi_int;
                vlSelf->__Vfunc_mubi4_test_invalid__484__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__484__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__484__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__484__Vfuncout))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d = 9U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d = 1U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d = 0x6fU;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_inc)
            ? (0x3fU & ((IData)(1U) + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q)))
            : 0U);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_urnd_req_d 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__xoshiro_seed_en)) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_urnd_req_q) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_req)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__req_sec_wipe_urnd_keys_q) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance_start_stop_control));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__spurious_secure_wipe_ack_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__spurious_secure_wipe_ack_q) 
           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_ack) 
              & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_q)) 
                 & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_wr_sec_wipe_onehot 
        = ((((0x1fU == (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
            << 0x1fU) | ((((0x1eU == (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                          << 0x1eU) | ((((0x1dU == 
                                          (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == 
                                           (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d)))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_sec_wipe_err 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__state_reset));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__start_stop_fatal_error 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_err) 
           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d) 
              | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_q) 
                 | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_error_q))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel 
        = ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base))) 
           && (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel_ctrl));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr 
        = (0x1fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base)
                     ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q)
                     : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en_ctrl) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__xoshiro_seed_en) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[1U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[2U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[3U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[4U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[5U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[6U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[7U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U];
    } else if (((~ (IData)((0U != (((((((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U] 
                                         | vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U]) 
                                        | vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U]) 
                                       | vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U]) 
                                      | vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U]) 
                                     | vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U]) 
                                    | vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U]) 
                                   | vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U])))) 
                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[0U] 
            = Vdmem_test__ConstPool__CONST_h954211c2_0[0U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[1U] 
            = Vdmem_test__ConstPool__CONST_h954211c2_0[1U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[2U] 
            = Vdmem_test__ConstPool__CONST_h954211c2_0[2U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[3U] 
            = Vdmem_test__ConstPool__CONST_h954211c2_0[3U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[4U] 
            = Vdmem_test__ConstPool__CONST_h954211c2_0[4U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[5U] 
            = Vdmem_test__ConstPool__CONST_h954211c2_0[5U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[6U] 
            = Vdmem_test__ConstPool__CONST_h954211c2_0[6U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[7U] 
            = Vdmem_test__ConstPool__CONST_h954211c2_0[7U];
    } else if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][0U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[1U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][1U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[2U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][2U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[3U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][3U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[4U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][4U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[5U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][5U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[6U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][6U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[7U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][7U];
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[1U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[2U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[3U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[4U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[5U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[6U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[7U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U];
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__sec_wipe_err_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__sec_wipe_err_q) 
           | ((((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base)) 
               | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_sec_wipe_err) 
                  | (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q)) 
                     | (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)) 
                        | ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd)))))) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_sec_wipe_err)));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_3 = 0xfU;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__next_stack_wr_ptr = 0U;
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_3 
            = (0xfU & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2) 
                        & (((~ (IData)((0xfU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))) 
                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read)) 
                           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                              & (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))
                        ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                            & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                               >> 4U)) ? 0U : (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
                                                & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                                   >> 4U))
                                                ? 0xfU
                                                : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)))
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__next_stack_wr_ptr 
            = vlSelf->__VdfgRegularize_hd87f99a1_2_22;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__next_loop_addr_info 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write)
            ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT____Vcellinp__loop_info_stack__push_data_i
            : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage
           [(7U & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)
                     ? 0U : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_22)) 
                   - (IData)(1U)))]);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)) 
           & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn)));
    __Vfunc_mubi4_bool_to_mubi__470__val = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__start_stop_fatal_error) 
                                            | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_all_zero) 
                                               | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__predec_error) 
                                                  | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_spurious_we_err) 
                                                     | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_rdata_err) 
                                                        | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_err) 
                                                           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__non_controller_reg_intg_violation) 
                                                              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_addr_err))))))));
    __Vfunc_mubi4_bool_to_mubi__470__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__470__val)
                                                  ? 6U
                                                  : 9U);
    __Vfunc_mubi4_or_hi__469__b = __Vfunc_mubi4_bool_to_mubi__470__Vfuncout;
    __Vfunc_mubi4_or_hi__469__a = vlSelf->dmem_test__DOT__dut__DOT__core_escalate_en;
    __Vfunc_mubi4_or__471__b = __Vfunc_mubi4_or_hi__469__b;
    __Vfunc_mubi4_or__471__a = __Vfunc_mubi4_or_hi__469__a;
    __Vfunc_mubi4_or__471__a_in = __Vfunc_mubi4_or__471__a;
    __Vfunc_mubi4_or__471__b_in = __Vfunc_mubi4_or__471__b;
    vlSelf->__Vfunc_mubi4_or__471__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__471__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_or__471__a_in) 
                                               | (IData)(__Vfunc_mubi4_or__471__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_or__471__a_in) 
                                                   & (IData)(__Vfunc_mubi4_or__471__b_in)))));
    vlSelf->__Vfunc_mubi4_or__471__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__471__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_or__471__a_in) 
                                               & (IData)(__Vfunc_mubi4_or__471__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_or__471__a_in) 
                                                   | (IData)(__Vfunc_mubi4_or__471__b_in)))));
    __Vfunc_mubi4_or__471__Vfuncout = vlSelf->__Vfunc_mubi4_or__471__out;
    __Vfunc_mubi4_or_hi__469__Vfuncout = __Vfunc_mubi4_or__471__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_fatal_escalate_en 
        = __Vfunc_mubi4_or_hi__469__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack_reqd 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en) 
           & (1U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (0U == (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (1U == (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (2U == (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (3U == (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (4U == (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (5U == (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (6U == (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec) 
           & (7U == (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                           - (IData)(1U)))));
    vlSelf->dmem_test__DOT__dut__DOT__imem_addr_core 
        = (0x1fffU & ((IData)(4U) + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_kill_d = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) {
        if (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) 
             & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final)) 
                | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____VdfgRegularize_h1abe2abd_0_0)))) {
            vlSelf->dmem_test__DOT__dut__DOT__imem_addr_core 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr;
        } else {
            if (((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr) 
                   == (0x3fffU & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__next_loop_addr_info 
                                          >> 7U)))) 
                  & (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__next_stack_wr_ptr))) 
                 & (1U < ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop)
                           ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                          [(7U & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                   - (IData)(1U)) - (IData)(1U)))]
                           : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec)
                               ? (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                                  [(7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                          - (IData)(1U)))] 
                                  - (IData)(1U)) : 
                              ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write)
                                ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations
                                : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                               [(7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                       - (IData)(1U)))])))))) {
                vlSelf->dmem_test__DOT__dut__DOT__imem_addr_core 
                    = (0x1fffU & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__next_loop_addr_info 
                                          >> 0x15U)));
            }
            if (([&]() {
                        vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__487__insn_data 
                            = (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_rdata);
                        vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__487__Vfuncout 
                            = (((0x63U == (0x7fU & vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__487__insn_data)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__487__insn_data))) 
                               | (0x67U == (0x7fU & vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__487__insn_data)));
                    }(), (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_is_branch__487__Vfuncout))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_kill_d = 1U;
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch = 0U;
            }
        }
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__imem_addr_core 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_a_err) 
           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_b_err) 
              | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack_reqd) 
                 & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_reqd)) 
                    & (8U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                             - (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                             + (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec))));
    vlSelf->dmem_test__DOT__dut__DOT__imem_index = 
        (0x7ffU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_access_core)
                    ? ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_addr_core) 
                       >> 2U) : (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_index_bus)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_internal_state_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error_d) 
           | (((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_d)) 
               | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_cnt_err) 
                  | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                     & (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_intg_err))))) 
              | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_hw_err) 
                 | (((~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum) 
                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err))) 
                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_spurious_we_err)) 
                    | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__spurious_secure_wipe_ack_q) 
                       | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_q) 
                          | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__sec_wipe_err_q)))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_data_addr_err 
        = ((~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err) 
               & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_11) 
                   | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_14)) 
                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_28)))) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
              & ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn))
                   ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall)
                   : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw) 
                      | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_store_req_raw))) 
                 & ((0U != (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
                            >> 0xcU)) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                                          & (0U != 
                                             (0x1fU 
                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked)))) 
                                         | ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                                            & (0U != 
                                               (3U 
                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked)))))))));
    vlSelf->__VdfgRegularize_hd87f99a1_2_635 = ((0U 
                                                 != 
                                                 (0x7ffffffU 
                                                  & (IData)(
                                                            (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                             >> 5U)))) 
                                                & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err)) 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_b)));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = (0x7ffU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_index) 
                     ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                                >> 0x35U))));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7f0U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                                                      >> 4U)), 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x70fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h38627d62__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x3ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 0xaU));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x5ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 9U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x6ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 8U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x77fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 7U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7bfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 6U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7dfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 5U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7efU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 7U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7f7U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 3U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7fbU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 2U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 9U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7fdU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0) 
              << 1U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 0xaU));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7feU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h990a24ad__0));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7feU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7dfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 5U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7fdU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0) 
              << 1U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7bfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 6U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7fbU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0) 
              << 2U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x77fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 7U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 6U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7f7U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0) 
              << 3U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 7U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x6ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 8U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7efU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h7abdf94e__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 9U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x5ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hca2d7e01__0) 
              << 9U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__21__03a11__KET__ 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                     << 0xbU) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_index))) 
                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)(((((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                      << 0xbU) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_index))) 
                    ^ vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0) 
                   >> 0x20U));
    __Vtemp_4 = ((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                 ^ (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)(((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                   ^ (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U])))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_4 >> 0x20U));
    __Vtemp_5 = (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U])));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_5 >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_static) 
           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
              & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum) 
                  & ((0U != (0x7ffffffU & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                   >> 5U)))) 
                     & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err)) 
                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_a)))) 
                 | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum) 
                     | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum)) 
                    & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_635)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = (0x7ffU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__21__03a11__KET__) 
                     ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                                >> 0x35U))));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7f0U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                                                      >> 4U)), 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x70fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h51574d8c__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x3ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 0xaU));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x5ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 9U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x6ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 8U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x77fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 7U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7bfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 6U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7dfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 5U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7efU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 7U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7f7U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 3U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7fbU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 2U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 9U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7fdU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0) 
              << 1U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 0xaU));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7feU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h3e634934__0));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped;
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7feU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7dfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 5U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7fdU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0) 
              << 1U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7bfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 6U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7fbU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0) 
              << 2U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x77fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 7U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 6U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7f7U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0) 
              << 3U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 7U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x6ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 8U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7efU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h97a336fd__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 9U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x5ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb7f31f54__0) 
              << 9U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__32__03a22__KET__ 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__non_insn_addr_software_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid_err) 
           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_sw_err) 
              | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_err) 
                 | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err) 
                    | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_data_addr_err)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__addr_scr 
        = (0x7ffU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__32__03a22__KET__) 
                     ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                                >> 0x35U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_insn_addr_err 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__non_insn_addr_software_err)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__imem_addr_err));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__addr_mux 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en;
                vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))
            ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__addr_scr)
            : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__waddr_scr_q));
    __Vfunc_mubi4_and_hi__59__b = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__addr_scr) 
                                    == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__waddr_scr_q))
                                    ? 6U : 9U);
    __Vfunc_mubi4_and_hi__60__b = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_or_hi__61__b = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_pending_q;
    __Vfunc_mubi4_or_hi__61__a = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
    __Vfunc_mubi4_or__62__b = __Vfunc_mubi4_or_hi__61__b;
    __Vfunc_mubi4_or__62__a = __Vfunc_mubi4_or_hi__61__a;
    __Vfunc_mubi4_or__62__a_in = __Vfunc_mubi4_or__62__a;
    __Vfunc_mubi4_or__62__b_in = __Vfunc_mubi4_or__62__b;
    vlSelf->__Vfunc_mubi4_or__62__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__62__out)) 
                                         | ((2U & ((IData)(__Vfunc_mubi4_or__62__a_in) 
                                                   | (IData)(__Vfunc_mubi4_or__62__b_in))) 
                                            | (1U & 
                                               ((IData)(__Vfunc_mubi4_or__62__a_in) 
                                                & (IData)(__Vfunc_mubi4_or__62__b_in)))));
    vlSelf->__Vfunc_mubi4_or__62__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__62__out)) 
                                         | ((8U & ((IData)(__Vfunc_mubi4_or__62__a_in) 
                                                   & (IData)(__Vfunc_mubi4_or__62__b_in))) 
                                            | (4U & 
                                               ((IData)(__Vfunc_mubi4_or__62__a_in) 
                                                | (IData)(__Vfunc_mubi4_or__62__b_in)))));
    __Vfunc_mubi4_or__62__Vfuncout = vlSelf->__Vfunc_mubi4_or__62__out;
    __Vfunc_mubi4_or_hi__61__Vfuncout = __Vfunc_mubi4_or__62__Vfuncout;
    __Vfunc_mubi4_and_hi__60__a = __Vfunc_mubi4_or_hi__61__Vfuncout;
    __Vfunc_mubi4_and__63__b = __Vfunc_mubi4_and_hi__60__b;
    __Vfunc_mubi4_and__63__a = __Vfunc_mubi4_and_hi__60__a;
    __Vfunc_mubi4_and__63__a_in = __Vfunc_mubi4_and__63__a;
    __Vfunc_mubi4_and__63__b_in = __Vfunc_mubi4_and__63__b;
    vlSelf->__Vfunc_mubi4_and__63__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__63__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_and__63__a_in) 
                                               & (IData)(__Vfunc_mubi4_and__63__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_and__63__a_in) 
                                                   | (IData)(__Vfunc_mubi4_and__63__b_in)))));
    vlSelf->__Vfunc_mubi4_and__63__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__63__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_and__63__a_in) 
                                               | (IData)(__Vfunc_mubi4_and__63__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_and__63__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__63__b_in)))));
    __Vfunc_mubi4_and__63__Vfuncout = vlSelf->__Vfunc_mubi4_and__63__out;
    __Vfunc_mubi4_and_hi__60__Vfuncout = __Vfunc_mubi4_and__63__Vfuncout;
    __Vfunc_mubi4_and_hi__59__a = __Vfunc_mubi4_and_hi__60__Vfuncout;
    __Vfunc_mubi4_and__64__b = __Vfunc_mubi4_and_hi__59__b;
    __Vfunc_mubi4_and__64__a = __Vfunc_mubi4_and_hi__59__a;
    __Vfunc_mubi4_and__64__a_in = __Vfunc_mubi4_and__64__a;
    __Vfunc_mubi4_and__64__b_in = __Vfunc_mubi4_and__64__b;
    vlSelf->__Vfunc_mubi4_and__64__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__64__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_and__64__a_in) 
                                               & (IData)(__Vfunc_mubi4_and__64__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_and__64__a_in) 
                                                   | (IData)(__Vfunc_mubi4_and__64__b_in)))));
    vlSelf->__Vfunc_mubi4_and__64__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__64__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_and__64__a_in) 
                                               | (IData)(__Vfunc_mubi4_and__64__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_and__64__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__64__b_in)))));
    __Vfunc_mubi4_and__64__Vfuncout = vlSelf->__Vfunc_mubi4_and__64__out;
    __Vfunc_mubi4_and_hi__59__Vfuncout = __Vfunc_mubi4_and__64__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__addr_collision_d 
        = __Vfunc_mubi4_and_hi__59__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__non_insn_addr_software_err) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_insn_addr_err));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_software_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__software_errs_fatal_q));
}

extern const VlUnpacked<CData/*2:0*/, 512> Vdmem_test__ConstPool__TABLE_h8c982ba2_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vdmem_test__ConstPool__TABLE_hcf85fe49_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vdmem_test__ConstPool__TABLE_ha9c8f8f8_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vdmem_test__ConstPool__TABLE_he1094e9d_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vdmem_test__ConstPool__TABLE_hf8b658e0_0;
extern const VlWide<8>/*255:0*/ Vdmem_test__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vdmem_test___024root___nba_comb__TOP__20(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___nba_comb__TOP__20\n"); );
    // Init
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30 = 0;
    CData/*1:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31 = 0;
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_2_626;
    __VdfgRegularize_hd87f99a1_2_626 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__89__Vfuncout;
    __Vfunc_mubi4_test_true_loose__89__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__89__val;
    __Vfunc_mubi4_test_true_loose__89__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__95__Vfuncout;
    __Vfunc_mubi4_and_hi__95__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__95__a;
    __Vfunc_mubi4_and_hi__95__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__95__b;
    __Vfunc_mubi4_and_hi__95__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__96__Vfuncout;
    __Vfunc_mubi4_and__96__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__96__a;
    __Vfunc_mubi4_and__96__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__96__b;
    __Vfunc_mubi4_and__96__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__96__a_in;
    __Vfunc_mubi4_and__96__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__96__b_in;
    __Vfunc_mubi4_and__96__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__97__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__97__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__97__val;
    __Vfunc_mubi4_bool_to_mubi__97__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__252__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__252__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__252__val;
    __Vfunc_mubi4_bool_to_mubi__252__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__253__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__253__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__253__val;
    __Vfunc_mubi4_bool_to_mubi__253__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__254__Vfuncout;
    __Vfunc_mubi4_and_hi__254__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__254__a;
    __Vfunc_mubi4_and_hi__254__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__254__b;
    __Vfunc_mubi4_and_hi__254__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__255__Vfuncout;
    __Vfunc_mubi4_and_hi__255__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__255__a;
    __Vfunc_mubi4_and_hi__255__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__255__b;
    __Vfunc_mubi4_and_hi__255__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__256__Vfuncout;
    __Vfunc_mubi4_or_hi__256__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__256__a;
    __Vfunc_mubi4_or_hi__256__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__256__b;
    __Vfunc_mubi4_or_hi__256__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__257__Vfuncout;
    __Vfunc_mubi4_or__257__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__257__a;
    __Vfunc_mubi4_or__257__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__257__b;
    __Vfunc_mubi4_or__257__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__257__a_in;
    __Vfunc_mubi4_or__257__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__257__b_in;
    __Vfunc_mubi4_or__257__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__258__Vfuncout;
    __Vfunc_mubi4_and__258__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__258__a;
    __Vfunc_mubi4_and__258__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__258__b;
    __Vfunc_mubi4_and__258__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__258__a_in;
    __Vfunc_mubi4_and__258__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__258__b_in;
    __Vfunc_mubi4_and__258__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__259__Vfuncout;
    __Vfunc_mubi4_and__259__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__259__a;
    __Vfunc_mubi4_and__259__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__259__b;
    __Vfunc_mubi4_and__259__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__259__a_in;
    __Vfunc_mubi4_and__259__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__259__b_in;
    __Vfunc_mubi4_and__259__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__269__Vfuncout;
    __Vfunc_mubi4_test_true_loose__269__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__269__val;
    __Vfunc_mubi4_test_true_loose__269__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__270__Vfuncout;
    __Vfunc_mubi4_and_hi__270__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__270__a;
    __Vfunc_mubi4_and_hi__270__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__270__b;
    __Vfunc_mubi4_and_hi__270__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__271__Vfuncout;
    __Vfunc_mubi4_and__271__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__271__a;
    __Vfunc_mubi4_and__271__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__271__b;
    __Vfunc_mubi4_and__271__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__271__a_in;
    __Vfunc_mubi4_and__271__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__271__b_in;
    __Vfunc_mubi4_and__271__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__282__Vfuncout;
    __Vfunc_mubi4_test_true_loose__282__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__282__val;
    __Vfunc_mubi4_test_true_loose__282__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__283__Vfuncout;
    __Vfunc_mubi4_test_true_loose__283__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__283__val;
    __Vfunc_mubi4_test_true_loose__283__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__284__Vfuncout;
    __Vfunc_mubi4_test_true_loose__284__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__284__val;
    __Vfunc_mubi4_test_true_loose__284__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__285__Vfuncout;
    __Vfunc_mubi4_test_true_loose__285__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__285__val;
    __Vfunc_mubi4_test_true_loose__285__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__290__Vfuncout;
    __Vfunc_mubi4_and_hi__290__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__290__a;
    __Vfunc_mubi4_and_hi__290__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__290__b;
    __Vfunc_mubi4_and_hi__290__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__291__Vfuncout;
    __Vfunc_mubi4_and__291__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__291__a;
    __Vfunc_mubi4_and__291__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__291__b;
    __Vfunc_mubi4_and__291__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__291__a_in;
    __Vfunc_mubi4_and__291__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__291__b_in;
    __Vfunc_mubi4_and__291__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__292__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__292__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__292__val;
    __Vfunc_mubi4_bool_to_mubi__292__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__293__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__293__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__293__val;
    __Vfunc_mubi4_bool_to_mubi__293__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__472__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__472__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__472__val;
    __Vfunc_mubi4_bool_to_mubi__472__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__490__Vfuncout;
    __Vfunc_mubi4_test_true_loose__490__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__490__val;
    __Vfunc_mubi4_test_true_loose__490__val = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[0U] = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U];
    }
    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[0U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[1U] = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[1U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U];
    }
    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[1U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[2U] = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[2U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U];
    }
    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[2U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[3U] = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[3U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U];
    }
    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[3U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[4U] = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[4U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U];
    }
    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[4U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[5U] = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[5U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U];
    }
    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((0x20U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[5U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[6U] = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[6U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U];
    }
    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((0x40U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[6U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[7U] = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[7U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U];
    }
    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init)))) {
        if ((0x80U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[7U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_wdata;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base)
            ? ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base_urnd)
                ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U]
                : 0U) : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg_ctrl);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__reg_intg_violation_err 
        = (((~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_3) 
                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err))) 
            & ((((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                 | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                    | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                       | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                          | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                             | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                   | (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_a_intg_dec__err_o))))))))) 
                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
               | (((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                   | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                      | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                         | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                            | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                               | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                  | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                     | (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_b_intg_dec__err_o))))))))) 
                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)))) 
           | (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
               & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                  & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid)) 
                     & (0x7d8U != (0xfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))))) 
              & (0U != (((3U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_bignum))
                          ? 0xffU : (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn))
                                      ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_sel_base)
                                      : 0U)) & (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__err_o))) 
                                                 << 7U) 
                                                | (((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__err_o))) 
                                                    << 6U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__err_o))) 
                                                       << 5U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__4__KET____DOT__i_secded_dec__err_o))) 
                                                          << 4U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__3__KET____DOT__i_secded_dec__err_o))) 
                                                             << 3U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__2__KET____DOT__i_secded_dec__err_o))) 
                                                                << 2U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__1__KET____DOT__i_secded_dec__err_o))) 
                                                                   << 1U) 
                                                                  | (0U 
                                                                     != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_rdata_dec__BRA__0__KET____DOT__i_secded_dec__err_o)))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[6U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_no_intg_d[7U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_no_intg));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__internal_fatal_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_software_err) 
           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_internal_state_err) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__reg_intg_violation_err)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U] 
        = (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
            << 7U) | (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_enc__data_o 
                              >> 0x20U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
            << 0xeU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
                         >> 0x19U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
            << 0x15U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
                          >> 0x12U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
            << 0x1cU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
                          >> 0xbU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
            >> 4U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) << 0x1cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
            << 3U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
            << 0xaU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
                         >> 0x1dU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
            << 0x11U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
                          >> 0x16U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
            >> 0xfU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_enc__data_o 
                                 >> 0x20U)) << 0x11U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel)
            ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg
            : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__internal_fatal_err) 
           | (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__491__val 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_fatal_escalate_en;
                    vlSelf->__Vfunc_mubi4_test_true_loose__491__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__491__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__491__Vfuncout)) 
              | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_strict__492__val 
                        = vlSelf->dmem_test__DOT__dut__DOT__mubi_rma_req;
                    vlSelf->__Vfunc_mubi4_test_true_strict__492__Vfuncout 
                        = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__492__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__492__Vfuncout))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[0U] 
        = (IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                       ? (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U])))
                                       : (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[0U]))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
        = ((0xffffff80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]) 
           | (IData)(((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U])))
                                           : (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[0U]))))) 
                      >> 0x20U)));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[0U] = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
            = (0x2aU | (0xffffff80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]));
    } else if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[0U] 
            = (IData)((0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U])))));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
            = ((0xffffff80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]) 
               | (IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[0U])))) 
                          >> 0x20U)));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
        = ((0x7fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                    >> 7U)))
                                           : (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                                    >> 7U)))))) 
              << 7U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
        = ((0xffffc000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                     >> 7U)))
                                            : (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                                     >> 7U)))))) 
               >> 0x19U) | ((IData)(((0x7fffffffffULL 
                                      & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                          ? (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                              << 0x39U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                 << 0x19U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                   >> 7U)))
                                          : (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                              << 0x39U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                 << 0x19U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[1U])) 
                                                   >> 7U))))) 
                                     >> 0x20U)) << 7U)));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
            = (0x7fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]);
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
            = (0x1500U | (0xffffc000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]));
    } else if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U] 
            = ((0x7fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                 >> 7U)))) 
                  << 7U));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
            = ((0xffffc000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                  >> 7U)))) 
                   >> 0x19U) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[1U])) 
                                                >> 7U))) 
                                         >> 0x20U)) 
                                << 7U)));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
        = ((0x3fffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                    >> 0xeU)))
                                           : (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                    >> 0xeU)))))) 
              << 0xeU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
        = ((0xffe00000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                   << 0x12U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                     >> 0xeU)))
                                            : (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                   << 0x12U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                     >> 0xeU)))))) 
               >> 0x12U) | ((IData)(((0x7fffffffffULL 
                                      & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                          ? (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                   >> 0xeU)))
                                          : (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[2U])) 
                                                   >> 0xeU))))) 
                                     >> 0x20U)) << 0xeU)));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
            = (0x3fffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]);
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
            = (0xa8000U | (0xffe00000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]));
    } else if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U] 
            = ((0x3fffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                 >> 0xeU)))) 
                  << 0xeU));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
            = ((0xffe00000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                << 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                  >> 0xeU)))) 
                   >> 0x12U) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                              << 0x12U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[2U])) 
                                                >> 0xeU))) 
                                         >> 0x20U)) 
                                << 0xeU)));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
        = ((0x1fffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                    >> 0x15U)))
                                           : (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                    >> 0x15U)))))) 
              << 0x15U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
        = ((0xf0000000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                   << 0xbU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                     >> 0x15U)))
                                            : (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                   << 0xbU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                     >> 0x15U)))))) 
               >> 0xbU) | ((IData)(((0x7fffffffffULL 
                                     & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                         ? (((QData)((IData)(
                                                             vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                             << 0x2bU) 
                                            | (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                  >> 0x15U)))
                                         : (((QData)((IData)(
                                                             vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                             << 0x2bU) 
                                            | (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[3U])) 
                                                  >> 0x15U))))) 
                                    >> 0x20U)) << 0x15U)));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
            = (0x1fffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]);
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
            = (0x5400000U | (0xf0000000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]));
    } else if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U] 
            = ((0x1fffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                 >> 0x15U)))) 
                  << 0x15U));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
            = ((0xf0000000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                                  >> 0x15U)))) 
                   >> 0xbU) | ((IData)(((0x7fffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                             << 0xbU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[3U])) 
                                               >> 0x15U))) 
                                        >> 0x20U)) 
                               << 0x15U)));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
        = ((0xfffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                    >> 0x1cU)))
                                           : (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                    >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U] 
        = (((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                         ? (((QData)((IData)(
                                                             vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                  >> 0x1cU)))
                                         : (((QData)((IData)(
                                                             vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                  >> 0x1cU)))))) 
            >> 4U) | ((IData)(((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                          >> 0x1cU)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                          >> 0x1cU))))) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
        = ((0xfffffff8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]) 
           | ((IData)(((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                     >> 0x1cU)))
                                            : (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[5U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[4U])) 
                                                     >> 0x1cU))))) 
                       >> 0x20U)) >> 4U));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
            = (0xfffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]);
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U] = 0xa0000000U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
            = (2U | (0xfffffff8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]));
    } else if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U] 
            = ((0xfffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                    >> 0x1cU))))) 
                  << 0x1cU));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U] 
            = (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                             vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                  >> 0x1cU))))) 
                >> 4U) | ((IData)(((0x7fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                   >> 0x1cU)))) 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
            = ((0xfffffff8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]) 
               | ((IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[5U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[4U])) 
                                                     >> 0x1cU)))) 
                           >> 0x20U)) >> 4U));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
        = ((7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                    >> 3U)))
                                           : (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                    >> 3U)))))) 
              << 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
        = ((0xfffffc00U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                     >> 3U)))
                                            : (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                     >> 3U)))))) 
               >> 0x1dU) | ((IData)(((0x7fffffffffULL 
                                      & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                          ? (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                   >> 3U)))
                                          : (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[6U])) 
                                                   >> 3U))))) 
                                     >> 0x20U)) << 3U)));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
            = (7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]);
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
            = (0x150U | (0xfffffc00U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]));
    } else if ((0x20U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U] 
            = ((7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                 >> 3U)))) 
                  << 3U));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
            = ((0xfffffc00U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                  >> 3U)))) 
                   >> 0x1dU) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[6U])) 
                                                >> 3U))) 
                                         >> 0x20U)) 
                                << 3U)));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
        = ((0x3ffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                    >> 0xaU)))
                                           : (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                    >> 0xaU)))))) 
              << 0xaU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
        = ((0xfffe0000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]) 
           | (((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                            ? (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                     >> 0xaU)))
                                            : (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                     >> 0xaU)))))) 
               >> 0x16U) | ((IData)(((0x7fffffffffULL 
                                      & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                          ? (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                   >> 0xaU)))
                                          : (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[7U])) 
                                                   >> 0xaU))))) 
                                     >> 0x20U)) << 0xaU)));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
            = (0x3ffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]);
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
            = (0xa800U | (0xfffe0000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]));
    } else if ((0x40U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U] 
            = ((0x3ffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                 >> 0xaU)))) 
                  << 0xaU));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
            = ((0xfffe0000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                  >> 0xaU)))) 
                   >> 0x16U) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                              << 0x16U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[7U])) 
                                                >> 0xaU))) 
                                         >> 0x20U)) 
                                << 0xaU)));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
        = ((0x1ffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]) 
           | ((IData)((0x7fffffffffULL & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                           ? (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                    >> 0x11U)))
                                           : (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                    >> 0x11U)))))) 
              << 0x11U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[9U] 
        = (0xffffffU & (((IData)((0x7fffffffffULL & 
                                  ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                    ? (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                        << 0x2fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                         << 0xfU) | 
                                        ((QData)((IData)(
                                                         vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                         >> 0x11U)))
                                    : (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                        << 0x2fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                         << 0xfU) | 
                                        ((QData)((IData)(
                                                         vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                         >> 0x11U)))))) 
                         >> 0xfU) | ((IData)(((0x7fffffffffULL 
                                               & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                                       << 0xfU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                         >> 0x11U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[9U])) 
                                                       << 0xfU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_mod_bignum_wdata_intg_blanked[8U])) 
                                                         >> 0x11U))))) 
                                              >> 0x20U)) 
                                     << 0x11U)));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
            = (0x1ffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]);
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[9U] = 0x540000U;
    } else if ((0x80U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U] 
            = ((0x1ffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                 >> 0x11U)))) 
                  << 0x11U));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[9U] 
            = (0xffffffU & (((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                          << 0xfU) 
                                         | ((QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                            >> 0x11U)))) 
                             >> 0xfU) | ((IData)(((0x7fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[9U])) 
                                                       << 0xfU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_calc[8U])) 
                                                         >> 0x11U))) 
                                                  >> 0x20U)) 
                                         << 0x11U)));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_req 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rnd_req_raw) 
           & ((~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
                  | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_err))) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_complete 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_req) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_d 
        = ((~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_start) 
               | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_complete))) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_en) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_rep_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_complete) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_err_q));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_fips_err 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_fips_q)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_complete));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__err_bits_d 
        = ((0x1000U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q) 
                       << 4U)) | ((0x800U & ((0xfffff800U 
                                              & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q) 
                                                 << 4U)) 
                                             | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__start_stop_fatal_error) 
                                                 | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_all_zero) 
                                                    | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__predec_error) 
                                                       | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_addr_err) 
                                                          | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mubi_err) 
                                                             | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_spurious_we_err)))))) 
                                                << 0xbU))) 
                                  | ((0x400U & ((0xfffffc00U 
                                                 & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q) 
                                                    << 4U)) 
                                                | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__non_controller_reg_intg_violation) 
                                                   << 0xaU))) 
                                     | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_rdata_err) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_err) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_fips_err) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_rep_err) 
                                                          << 6U) 
                                                         | (0x3fU 
                                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q)))))))));
    __Vfunc_mubi4_bool_to_mubi__472__val = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_rep_err) 
                                            | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_fips_err));
    __Vfunc_mubi4_bool_to_mubi__472__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__472__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_recov_escalate_en 
        = __Vfunc_mubi4_bool_to_mubi__472__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__core_err_bits 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__err_bits_q) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__err_bits_d));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_d 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__488__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_fatal_escalate_en;
                vlSelf->__Vfunc_mubi4_test_invalid__488__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__488__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__488__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__488__Vfuncout)) 
           | (([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__489__val 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_recov_escalate_en;
                    vlSelf->__Vfunc_mubi4_test_invalid__489__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__489__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__489__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__489__Vfuncout)) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_q)));
    __Vfunc_mubi4_test_true_loose__490__val = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_recov_escalate_en;
    __Vfunc_mubi4_test_true_loose__490__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__490__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__recoverable_err 
        = __Vfunc_mubi4_test_true_loose__490__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__wr_en 
        = (1U & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__core_err_bits) 
                  >> 0xbU) | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__non_core_err_bits_d) 
                              >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT____VdfgRegularize_hab8adb3c_3_12 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__recoverable_err) 
            | ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__software_errs_fatal_q)) 
               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err))) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__recoverable_err_q));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_err) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__recoverable_err)));
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req 
        = (1U & (IData)((((0U != (0x1700U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__core_err_bits))) 
                          | (0U != (0xdU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__non_core_err_bits_d)))) 
                         | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__wr_en))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear = 1U;
    if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear = 0U;
                        }
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)))) {
                    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) {
                        if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__done_complete)))) {
                            if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall) {
                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_valid 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__start_secure_wipe 
        = (((0xaU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)) 
            | (0x13U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__done_complete) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw;
    if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d 
            = ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))
                ? 0x1dU : ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))
                            ? 0x1dU : ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))
                                        ? ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))
                                            ? ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)
                                                ? 0x13U
                                                : 0xaU)
                                            : 0x1dU)
                                        : 0x1dU)));
    } else if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
        } else if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
            } else if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) {
                if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__done_complete) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 4U;
                } else if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x13U;
                }
            }
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
        }
    } else if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
        } else if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
        } else if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_start) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0xaU;
        }
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
    }
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear = 1U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d 
            = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_err)
                ? 0x1dU : 4U);
    }
    if ((0x1dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d = 0x1dU;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid));
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_valid) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_d 
            = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final) 
               & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr) 
                  == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr)));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final;
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_d 
            = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear)) 
               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_q));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en = 0U;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__start_secure_wipe) 
           | ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_ack)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_q)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__start_secure_wipe) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_q));
    vlSelf->dmem_test__DOT__dut__DOT__mems_sec_wipe 
        = ((0x1dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d)) 
           & (0x1dU != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_d 
        = (((0x1dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)) 
            | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we) 
                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__is_not_running_q)) 
               | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_cnt_clear_int)))
            ? 0U : ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
                      & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall))) 
                     & (0xffffffffU != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q))
                     ? ((IData)(1U) + vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q)
                     : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_start 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q)) 
           & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
               & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn) 
                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_24))) 
              | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rnd_req) 
                 | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_queued_q))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_commit 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_base));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_reqd));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req)
            ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing)
            : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_load_req 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_store_req 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_store_req_raw));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q)
             ? 3U : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf)) 
           & (- (IData)((((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf)) 
                          & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing))) 
                         | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q)))));
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_d 
            = vlSelf->dmem_test__DOT__dut__DOT__imem_rdata;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_d 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__mac_bignum_predec_d 
            = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_op_en) 
                << 1U) | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_acc_rd_en));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_d 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_insn;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ispr_bignum_predec_d 
            = (((((8U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                 << 0x11U) | ((((7U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                               << 0x10U) | ((((6U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                             << 0xfU) 
                                            | ((((5U 
                                                  == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                 & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                << 0xeU) 
                                               | ((((4U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                   << 0xdU) 
                                                  | ((((3U 
                                                        == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                      << 0xcU) 
                                                     | ((((2U 
                                                           == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                         << 0xbU) 
                                                        | ((((1U 
                                                              == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                            << 0xaU) 
                                                           | (((0U 
                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en)) 
                                                              << 9U))))))))) 
               | ((((8U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                   << 8U) | ((((7U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                              << 7U) | ((((6U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                         << 6U) | (
                                                   (((5U 
                                                      == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                    << 5U) 
                                                   | ((((4U 
                                                         == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                       << 4U) 
                                                      | ((((3U 
                                                            == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                          << 3U) 
                                                         | ((((2U 
                                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                             << 2U) 
                                                            | ((((1U 
                                                                  == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                                 & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)) 
                                                                << 1U) 
                                                               | ((0U 
                                                                   == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr)) 
                                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en)))))))))));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_predec_d 
            = (((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base) 
                  & (0x8000ULL == (0xf8000ULL & vlSelf->dmem_test__DOT__dut__DOT__imem_rdata))) 
                 | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_base) 
                    & (0x100000ULL == (0x1f00000ULL 
                                       & vlSelf->dmem_test__DOT__dut__DOT__imem_rdata)))) 
                << 5U) | (((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_a_base) 
                             & (0x8000ULL == (0xf8000ULL 
                                              & vlSelf->dmem_test__DOT__dut__DOT__imem_rdata))) 
                            | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_b_base) 
                                & (0x100000ULL == (0x1f00000ULL 
                                                   & vlSelf->dmem_test__DOT__dut__DOT__imem_rdata))) 
                               | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base) 
                                  & (0x80ULL == (0xf80ULL 
                                                 & vlSelf->dmem_test__DOT__dut__DOT__imem_rdata))))) 
                           << 4U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__branch_insn) 
                                      << 3U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__jump_insn) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__loop_insn) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__sel_insn))))));
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_d 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_d 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__mac_bignum_predec_d 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_d 
            = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear)) 
               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q));
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ispr_bignum_predec_d = 0U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_predec_d = 0U;
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ispr_bignum_predec_d 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_predec_d 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_d 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
            | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero))
            ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_zero_flags
            : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en)
                ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_insn
                : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT____VdfgRegularize_h36e82705_1_0) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf 
        = ((0x1dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d)) 
           & ((~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q) 
                  | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req))) 
              | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_d) 
                 | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_err))));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__imem_sec_wipe = 0U;
    if ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__status_q))) {
        if ((0x10U & vlSelf->dmem_test__DOT__dut__DOT__reg2hw[3U])) {
            if ((0xd8U != (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__reg2hw[3U] 
                                    >> 5U)))) {
                if ((0xc3U == (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__reg2hw[3U] 
                                        >> 5U)))) {
                    vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe = 1U;
                }
                if ((0xc3U != (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__reg2hw[3U] 
                                        >> 5U)))) {
                    if ((0x1eU == (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__reg2hw[3U] 
                                            >> 5U)))) {
                        vlSelf->dmem_test__DOT__dut__DOT__imem_sec_wipe = 1U;
                    }
                }
            }
        }
    } else if (vlSelf->dmem_test__DOT__dut__DOT__busy_execute_q) {
        if (vlSelf->dmem_test__DOT__dut__DOT__mems_sec_wipe) {
            vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe = 1U;
            vlSelf->dmem_test__DOT__dut__DOT__imem_sec_wipe = 1U;
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_d 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_complete)) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_q) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_start)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_queued_d 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req)) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_data_ignore_q)
               ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_start)
               : ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_start)) 
                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_queued_q))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_a_indirect_onehot 
        = ((((0x1fU == (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
            << 0x1fU) | ((((0x1eU == (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                          << 0x1eU) | ((((0x1dU == 
                                          (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == 
                                           (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_a_indirect_en)))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_b_indirect_onehot 
        = ((((0x1fU == (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
            << 0x1fU) | ((((0x1eU == (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                          << 0x1eU) | ((((0x1dU == 
                                          (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == 
                                           (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_b_indirect_en)))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_indirect_onehot 
        = ((((0x1fU == (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
            << 0x1fU) | ((((0x1eU == (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                          << 0x1eU) | ((((0x1dU == 
                                          (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == 
                                           (0x1fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_indirect_en)))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_commit) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack_reqd));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read 
        = ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_wr_ptr_commit 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((1U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((2U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((3U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((4U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((5U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((6U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_set 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
           & ((7U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_1 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 7U) | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_2 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 6U) | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_3 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 5U) | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_4 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 4U) | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_5 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 3U) | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_6 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 2U) | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_7 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
                >> 1U) | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_8 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
           & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en) 
               | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_acc_wr_en 
        = (((2U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
            & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en) 
               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_wr_commit))) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_req_core 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_load_req) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_store_req));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((1U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((2U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((3U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((4U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((5U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((6U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((7U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((8U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((9U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xaU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xbU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xcU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xdU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xeU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0xfU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x10U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x11U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x12U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x13U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x14U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x15U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x16U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x17U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x18U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x19U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1bU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1eU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal) 
           & (- (IData)((0x1fU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)))));
    __Vtableidx2 = ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                      | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint)) 
                     << 8U) | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger)
                                  ? 1U : 3U) << 5U) 
                               | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger) 
                                    | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)) 
                                   << 4U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d) 
                                              << 3U) 
                                             | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))));
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = Vdmem_test__ConstPool__TABLE_h8c982ba2_0[__Vtableidx2];
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd 
        = Vdmem_test__ConstPool__TABLE_hcf85fe49_0[__Vtableidx2];
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd 
        = Vdmem_test__ConstPool__TABLE_ha9c8f8f8_0[__Vtableidx2];
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr 
        = Vdmem_test__ConstPool__TABLE_he1094e9d_0[__Vtableidx2];
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr 
        = Vdmem_test__ConstPool__TABLE_hf8b658e0_0[__Vtableidx2];
    vlSelf->dmem_test__DOT__dut__DOT__dmem_write = 
        ((IData)(vlSelf->dmem_test__DOT__dut__DOT__busy_execute_q)
          ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_store_req)
          : (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus));
    if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))) {
                                if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) {
                                    if (([&]() {
                                                vlSelf->__Vfunc_mubi4_test_false_strict__480__val 
                                                    = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                                vlSelf->__Vfunc_mubi4_test_false_strict__480__Vfuncout 
                                                    = 
                                                    (9U 
                                                     == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__480__val));
                                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__480__Vfuncout))) {
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))) {
                                if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop)))) {
                                    if (([&]() {
                                                vlSelf->__Vfunc_mubi4_test_false_strict__481__val 
                                                    = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                                vlSelf->__Vfunc_mubi4_test_false_strict__481__Vfuncout 
                                                    = 
                                                    (9U 
                                                     == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__481__val));
                                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__481__Vfuncout))) {
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))) {
                                if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop)))) {
                                    if (([&]() {
                                                vlSelf->__Vfunc_mubi4_test_false_strict__481__val 
                                                    = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                                                vlSelf->__Vfunc_mubi4_test_false_strict__481__Vfuncout 
                                                    = 
                                                    (9U 
                                                     == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__481__val));
                                            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__481__Vfuncout))) {
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__done_core = (
                                                   ((((0xbU 
                                                       == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_q)) 
                                                     | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) 
                                                         & (6U 
                                                            == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))) 
                                                        & ([&]() {
                            vlSelf->__Vfunc_mubi4_test_false_strict__486__val 
                                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                            vlSelf->__Vfunc_mubi4_test_false_strict__486__Vfuncout 
                                = (9U == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__486__val));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__486__Vfuncout)))) 
                                                    | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__spurious_urnd_ack_error) 
                                                        & (~ 
                                                           ((0x79U 
                                                             == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)) 
                                                            | (0x6fU 
                                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw))))) 
                                                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_q))) 
                                                   | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d) 
                                                      & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_q))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__macro_req 
        = (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__intg_error_w_q)) 
            & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf))) 
           & ([&]() {
                vlSelf->__Vfunc_mubi4_or_hi__66__b 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_pending_q;
                vlSelf->__Vfunc_mubi4_or_hi__67__b 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
                vlSelf->__Vfunc_mubi4_or_hi__67__a 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en;
                vlSelf->__Vfunc_mubi4_or__68__b = vlSelf->__Vfunc_mubi4_or_hi__67__b;
                vlSelf->__Vfunc_mubi4_or__68__a = vlSelf->__Vfunc_mubi4_or_hi__67__a;
                vlSelf->__Vfunc_mubi4_or__68__a_in 
                    = vlSelf->__Vfunc_mubi4_or__68__a;
                vlSelf->__Vfunc_mubi4_or__68__b_in 
                    = vlSelf->__Vfunc_mubi4_or__68__b;
                vlSelf->__Vfunc_mubi4_or__68__out = 
                    ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__68__out)) 
                     | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__68__a_in) 
                               | (IData)(vlSelf->__Vfunc_mubi4_or__68__b_in))) 
                        | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__68__a_in) 
                                 & (IData)(vlSelf->__Vfunc_mubi4_or__68__b_in)))));
                vlSelf->__Vfunc_mubi4_or__68__out = 
                    ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__68__out)) 
                     | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__68__a_in) 
                               & (IData)(vlSelf->__Vfunc_mubi4_or__68__b_in))) 
                        | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__68__a_in) 
                                 | (IData)(vlSelf->__Vfunc_mubi4_or__68__b_in)))));
                vlSelf->__Vfunc_mubi4_or__68__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__68__out;
                vlSelf->__Vfunc_mubi4_or_hi__67__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__68__Vfuncout;
                vlSelf->__Vfunc_mubi4_or_hi__66__a 
                    = vlSelf->__Vfunc_mubi4_or_hi__67__Vfuncout;
                vlSelf->__Vfunc_mubi4_or__69__b = vlSelf->__Vfunc_mubi4_or_hi__66__b;
                vlSelf->__Vfunc_mubi4_or__69__a = vlSelf->__Vfunc_mubi4_or_hi__66__a;
                vlSelf->__Vfunc_mubi4_or__69__a_in 
                    = vlSelf->__Vfunc_mubi4_or__69__a;
                vlSelf->__Vfunc_mubi4_or__69__b_in 
                    = vlSelf->__Vfunc_mubi4_or__69__b;
                vlSelf->__Vfunc_mubi4_or__69__out = 
                    ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__69__out)) 
                     | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__69__a_in) 
                               | (IData)(vlSelf->__Vfunc_mubi4_or__69__b_in))) 
                        | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__69__a_in) 
                                 & (IData)(vlSelf->__Vfunc_mubi4_or__69__b_in)))));
                vlSelf->__Vfunc_mubi4_or__69__out = 
                    ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__69__out)) 
                     | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__69__a_in) 
                               & (IData)(vlSelf->__Vfunc_mubi4_or__69__b_in))) 
                        | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__69__a_in) 
                                 | (IData)(vlSelf->__Vfunc_mubi4_or__69__b_in)))));
                vlSelf->__Vfunc_mubi4_or__69__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__69__out;
                vlSelf->__Vfunc_mubi4_or_hi__66__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__69__Vfuncout;
                vlSelf->__Vfunc_mubi4_test_true_loose__65__val 
                    = vlSelf->__Vfunc_mubi4_or_hi__66__Vfuncout;
                vlSelf->__Vfunc_mubi4_test_true_loose__65__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__65__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__65__Vfuncout)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_req = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__busy_execute_q)
                                                   ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_req_core)
                                                   : (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_req_bus));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_en = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_sel_otp = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_d 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q;
    if (((IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe) 
         & (0x1eU != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_en = 1U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_sel_otp = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_d = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_q;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d = 1U;
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_q;
    }
    if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_en = 1U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_sel_otp = 1U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_d = 1U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_en = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_sel_otp = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_d 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q;
    if (((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_sec_wipe) 
         & (8U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_en = 1U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_sel_otp = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_d = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_q;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d = 1U;
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_q;
    }
    if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_en = 1U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_sel_otp = 1U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_d = 1U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d = 0U;
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_wr_sec_wipe_onehot;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] = 0U;
    } else if (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_indirect_onehot;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] 
            = (IData)((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_a_indirect_onehot)) 
                        << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_b_indirect_onehot))));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] 
            = (IData)(((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_a_indirect_onehot)) 
                         << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_b_indirect_onehot))) 
                       >> 0x20U));
    } else if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_we_bignum_onehot_enc__out_o;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] 
            = (IData)((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_a_bignum_onehot_enc__out_o)) 
                        << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_b_bignum_onehot_enc__out_o))));
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] 
            = (IData)(((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_a_bignum_onehot_enc__out_o)) 
                         << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_b_bignum_onehot_enc__out_o))) 
                       >> 0x20U));
    } else if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] = 0U;
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[1U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_predec_d[2U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U];
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en) 
           & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_commit)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__push_stack) 
           & ((8U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack)));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_wr_ptr_commit) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_3;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__d_i 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__next_stack_wr_ptr;
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__d_i 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en 
        = ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
             | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_1) 
                | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
            << 7U) | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                        | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_2) 
                           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                       << 6U) | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                   | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_3) 
                                      | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                  << 5U) | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                              | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_4) 
                                                 | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                                 | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_5) 
                                                    | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                                    | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_6) 
                                                       | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                                       | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_7) 
                                                          | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                                        | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____VdfgRegularize_h2bd6b7b5_2_8) 
                                                           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_mod_urnd))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[7U];
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U];
    } else if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_acc_wr_en)))) {
        if ((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[4U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[5U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[6U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[7U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U] = 0U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U] = 0U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U] = 0U;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U] = 0U;
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[0U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[1U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[2U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[3U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[4U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[5U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[6U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[7U];
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[1U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[2U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[3U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[4U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[5U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[6U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[7U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[8U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[9U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xaU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xbU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xcU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xdU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xeU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0xfU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x10U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x11U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x12U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x13U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x14U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x15U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x16U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x17U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x18U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x19U] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1aU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1bU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1cU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1dU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1eU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot[0x1fU] 
        = dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31;
    __VdfgRegularize_hd87f99a1_2_626 = (((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31) 
                                         << 0x1fU) 
                                        | ((0x40000000U 
                                            & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0)))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT____VdfgRegularize_hab8adb3c_3_12) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__done_core));
    vlSelf->dmem_test__DOT__dut__DOT__busy_execute_d 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__done_core)) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__busy_execute_q) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__start_d)));
    __Vfunc_mubi4_bool_to_mubi__97__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__macro_req;
    __Vfunc_mubi4_bool_to_mubi__97__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__97__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__97__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__otbn_dmem_scramble_key_req_busy 
        = ((0x1eU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__state_d)) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d));
    vlSelf->dmem_test__DOT__dut__DOT__otbn_imem_scramble_key_req_busy 
        = ((8U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__state_d)) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
        = ((((0x1fU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
            << 0x1fU) | ((((0x1eU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                          << 0x1eU) | ((((0x1dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write)
                     ? ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                        - (IData)(1U)) : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read)
                     ? ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                        - (IData)(1U)) : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read) 
           ^ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[6U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_no_intg_d[7U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__dmem_gnt = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q) 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_req));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot_unbuf 
        = (((QData)((IData)((1U & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31) 
                                   >> 1U)))) << 0x3fU) 
           | (((QData)((IData)((1U & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30) 
                                      >> 1U)))) << 0x3eU) 
              | (((QData)((IData)((1U & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29) 
                                         >> 1U)))) 
                  << 0x3dU) | (((QData)((IData)((1U 
                                                 & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28) 
                                                    >> 1U)))) 
                                << 0x3cU) | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27) 
                                                                  >> 1U)))) 
                                              << 0x3bU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26) 
                                                                     >> 1U)))) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25) 
                                                                        >> 1U)))) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24) 
                                                                           >> 1U)))) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23) 
                                                                              >> 1U)))) 
                                                          << 0x37U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22) 
                                                                                >> 1U)))) 
                                                             << 0x36U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21) 
                                                                                >> 1U)))) 
                                                                << 0x35U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20) 
                                                                                >> 1U)))) 
                                                                   << 0x34U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19) 
                                                                                >> 1U)))) 
                                                                      << 0x33U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18) 
                                                                                >> 1U)))) 
                                                                         << 0x32U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17) 
                                                                                >> 1U)))) 
                                                                            << 0x31U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16) 
                                                                                >> 1U)))) 
                                                                               << 0x30U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(__VdfgRegularize_hd87f99a1_2_626))))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
        = (__VdfgRegularize_hd87f99a1_2_626 | ((0x80000000U 
                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_31) 
                                                   << 0x1eU)) 
                                               | ((0x40000000U 
                                                   & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_30) 
                                                      << 0x1dU)) 
                                                  | ((0x20000000U 
                                                      & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_29) 
                                                         << 0x1cU)) 
                                                     | ((0x10000000U 
                                                         & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_28) 
                                                            << 0x1bU)) 
                                                        | ((0x8000000U 
                                                            & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_27) 
                                                               << 0x1aU)) 
                                                           | ((0x4000000U 
                                                               & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_26) 
                                                                  << 0x19U)) 
                                                              | ((0x2000000U 
                                                                  & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_25) 
                                                                     << 0x18U)) 
                                                                 | ((0x1000000U 
                                                                     & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_24) 
                                                                        << 0x17U)) 
                                                                    | ((0x800000U 
                                                                        & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_23) 
                                                                           << 0x16U)) 
                                                                       | ((0x400000U 
                                                                           & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_22) 
                                                                              << 0x15U)) 
                                                                          | ((0x200000U 
                                                                              & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_21) 
                                                                                << 0x14U)) 
                                                                             | ((0x100000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_20) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_19) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_18) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_17) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_16) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_15) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_14) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_13) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_12) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_11) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_10) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_9) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_8) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_7) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_6) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_5) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_4) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_3) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_2) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_1)) 
                                                                                | (1U 
                                                                                & ((IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____VdfgRegularize_ha755fa95_0_0) 
                                                                                >> 1U))))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    vlSelf->dmem_test__DOT__dut__DOT____VdfgRegularize_hab8adb3c_3_2 
        = (1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__busy_execute_d) 
                    | (IData)(vlSelf->dmem_test__DOT__dut__DOT__start_d))));
    __Vfunc_mubi4_test_true_loose__89__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__89__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__89__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__89__Vfuncout;
    __Vfunc_mubi4_and_hi__95__b = (0xfU & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d)));
    __Vfunc_mubi4_and_hi__95__a = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_and__96__b = __Vfunc_mubi4_and_hi__95__b;
    __Vfunc_mubi4_and__96__a = __Vfunc_mubi4_and_hi__95__a;
    __Vfunc_mubi4_and__96__a_in = __Vfunc_mubi4_and__96__a;
    __Vfunc_mubi4_and__96__b_in = __Vfunc_mubi4_and__96__b;
    vlSelf->__Vfunc_mubi4_and__96__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__96__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_and__96__a_in) 
                                               & (IData)(__Vfunc_mubi4_and__96__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_and__96__a_in) 
                                                   | (IData)(__Vfunc_mubi4_and__96__b_in)))));
    vlSelf->__Vfunc_mubi4_and__96__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__96__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_and__96__a_in) 
                                               | (IData)(__Vfunc_mubi4_and__96__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_and__96__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__96__b_in)))));
    __Vfunc_mubi4_and__96__Vfuncout = vlSelf->__Vfunc_mubi4_and__96__out;
    __Vfunc_mubi4_and_hi__95__Vfuncout = __Vfunc_mubi4_and__96__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__95__Vfuncout;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__cnt_after_commit_o = 0xffffffffU;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i = 0U;
    } else {
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_set) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_set) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_set) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_set) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_set) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_set) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_set) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_set) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations;
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = ((IData)(0xffffffffU) - vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations);
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__cnt_after_commit_o 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec) 
                    & (0U != vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0U
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
                = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec) 
                    & (~ (IData)((0xffffffffU == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                    ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__loop_count_dec) 
                        & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                   >> 0x20U))) ? 0xffffffffU
                        : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                    : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__ram_alert 
        = (((([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__100__val 
                            = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_d;
                        vlSelf->__Vfunc_mubi4_test_invalid__100__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__100__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__100__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__100__Vfuncout)) 
             | ([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__101__val 
                            = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d;
                        vlSelf->__Vfunc_mubi4_test_invalid__101__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__101__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__101__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__101__Vfuncout))) 
            | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__102__val 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                    vlSelf->__Vfunc_mubi4_test_invalid__102__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__102__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__102__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__102__Vfuncout))) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__103__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                vlSelf->__Vfunc_mubi4_test_invalid__103__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__103__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__103__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__103__Vfuncout)));
    vlSelf->dmem_test__DOT__dut__DOT__status_d = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf)
                                                   ? 0xffU
                                                   : 
                                                  ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->dmem_test__DOT__dut__DOT__busy_execute_d)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSelf->dmem_test__DOT__dut__DOT__otbn_dmem_scramble_key_req_busy)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->dmem_test__DOT__dut__DOT__otbn_imem_scramble_key_req_busy)
                                                       ? 3U
                                                       : 0U)))));
    vlSelf->__VdfgRegularize_hd87f99a1_2_56 = (0xfU 
                                               & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2) 
                                                   & (((~ (IData)(
                                                                  (0xfU 
                                                                   == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))) 
                                                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write)) 
                                                      | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read) 
                                                         & (0U 
                                                            != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                                   ? 
                                                  (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read) 
                                                    & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                                       >> 4U))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write) 
                                                     & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                                        >> 4U))
                                                     ? 0xfU
                                                     : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)))
                                                   : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[0U] 
        = (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[1U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
            << 7U) | (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_enc__data_o 
                              >> 0x20U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[2U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
            << 0xeU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o) 
                         >> 0x19U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[3U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
            << 0x15U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o) 
                          >> 0x12U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[4U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
            << 0x1cU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o) 
                          >> 0xbU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[5U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o) 
            >> 4U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) << 0x1cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[6U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
            << 3U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[7U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
            << 0xaU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o) 
                         >> 0x1dU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[8U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
            << 0x11U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o) 
                          >> 0x16U) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[9U] 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o) 
            >> 0xfU) | ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_enc__data_o 
                                 >> 0x20U)) << 0x11U));
    __Vfunc_mubi4_bool_to_mubi__253__val = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_gnt) 
                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write));
    __Vfunc_mubi4_bool_to_mubi__253__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__253__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_en_d 
        = __Vfunc_mubi4_bool_to_mubi__253__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__252__val = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_gnt) 
                                            & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write)));
    __Vfunc_mubi4_bool_to_mubi__252__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__252__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__read_en 
        = __Vfunc_mubi4_bool_to_mubi__252__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_trigger 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)
            ? 0xfU : (0xfU & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2) 
                               & (((~ (IData)((0xfU 
                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))) 
                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read)) 
                                  | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write) 
                                     & (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))
                               ? (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write) 
                                   & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0U : 
                                  (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_read) 
                                    & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                       >> 4U)) ? 0xfU
                                    : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)))
                               : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__alert_o 
        = ((((([&]() {
                            vlSelf->__Vfunc_mubi4_test_invalid__83__val 
                                = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
                            vlSelf->__Vfunc_mubi4_test_invalid__83__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__83__val)) 
                                            | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__83__val)))));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__83__Vfuncout)) 
              | ([&]() {
                            vlSelf->__Vfunc_mubi4_test_invalid__84__val 
                                = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__addr_collision_q;
                            vlSelf->__Vfunc_mubi4_test_invalid__84__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__84__val)) 
                                            | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__84__val)))));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__84__Vfuncout))) 
             | ([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__85__val 
                            = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_pending_q;
                        vlSelf->__Vfunc_mubi4_test_invalid__85__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__85__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__85__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__85__Vfuncout))) 
            | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__86__val 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_invalid__86__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__86__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__86__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__86__Vfuncout))) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__ram_alert));
    vlSelf->dmem_test__DOT__dut__DOT__done = ((([&]() {
                    vlSelf->__Vfunc_is_busy_status__52__status 
                        = vlSelf->dmem_test__DOT__dut__DOT__status_q;
                    vlSelf->__Vfunc_is_busy_status__52__Vfuncout 
                        = ((((1U == (IData)(vlSelf->__Vfunc_is_busy_status__52__status)) 
                             | (2U == (IData)(vlSelf->__Vfunc_is_busy_status__52__status))) 
                            | (3U == (IData)(vlSelf->__Vfunc_is_busy_status__52__status))) 
                           | (4U == (IData)(vlSelf->__Vfunc_is_busy_status__52__status)));
                }(), (IData)(vlSelf->__Vfunc_is_busy_status__52__Vfuncout)) 
                                               & (~ 
                                                  ([&]() {
                        vlSelf->__Vfunc_is_busy_status__53__status 
                            = vlSelf->dmem_test__DOT__dut__DOT__status_d;
                        vlSelf->__Vfunc_is_busy_status__53__Vfuncout 
                            = ((((1U == (IData)(vlSelf->__Vfunc_is_busy_status__53__status)) 
                                 | (2U == (IData)(vlSelf->__Vfunc_is_busy_status__53__status))) 
                                | (3U == (IData)(vlSelf->__Vfunc_is_busy_status__53__status))) 
                               | (4U == (IData)(vlSelf->__Vfunc_is_busy_status__53__status)));
                    }(), (IData)(vlSelf->__Vfunc_is_busy_status__53__Vfuncout)))) 
                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__init_sec_wipe_done_q));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__next_stack_wr_ptr 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)
            ? 0U : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_56));
    __Vfunc_mubi4_test_true_loose__283__val = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_en_d;
    __Vfunc_mubi4_test_true_loose__283__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__283__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_en_b 
        = __Vfunc_mubi4_test_true_loose__283__Vfuncout;
    __Vfunc_mubi4_test_true_loose__282__val = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__read_en;
    __Vfunc_mubi4_test_true_loose__282__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__282__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__read_en_b 
        = __Vfunc_mubi4_test_true_loose__282__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__274__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__read_en;
                vlSelf->__Vfunc_mubi4_test_true_loose__274__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__274__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__274__Vfuncout))
            ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__addr_scr)
            : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__waddr_scr_q));
    __Vfunc_mubi4_and_hi__270__b = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__read_en;
    __Vfunc_mubi4_and_hi__270__a = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
    __Vfunc_mubi4_and__271__b = __Vfunc_mubi4_and_hi__270__b;
    __Vfunc_mubi4_and__271__a = __Vfunc_mubi4_and_hi__270__a;
    __Vfunc_mubi4_and__271__a_in = __Vfunc_mubi4_and__271__a;
    __Vfunc_mubi4_and__271__b_in = __Vfunc_mubi4_and__271__b;
    vlSelf->__Vfunc_mubi4_and__271__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__271__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__271__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__271__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__271__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__271__b_in)))));
    vlSelf->__Vfunc_mubi4_and__271__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__271__out)) 
                                           | ((8U & 
                                               ((IData)(__Vfunc_mubi4_and__271__a_in) 
                                                | (IData)(__Vfunc_mubi4_and__271__b_in))) 
                                              | (4U 
                                                 & ((IData)(__Vfunc_mubi4_and__271__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__271__b_in)))));
    __Vfunc_mubi4_and__271__Vfuncout = vlSelf->__Vfunc_mubi4_and__271__out;
    __Vfunc_mubi4_and_hi__270__Vfuncout = __Vfunc_mubi4_and__271__Vfuncout;
    __Vfunc_mubi4_test_true_loose__269__val = __Vfunc_mubi4_and_hi__270__Vfuncout;
    __Vfunc_mubi4_test_true_loose__269__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__269__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__rw_collision 
        = __Vfunc_mubi4_test_true_loose__269__Vfuncout;
    __Vfunc_mubi4_and_hi__254__b = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__addr_scr) 
                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__waddr_scr_q))
                                     ? 6U : 9U);
    __Vfunc_mubi4_and_hi__255__b = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__read_en;
    __Vfunc_mubi4_or_hi__256__b = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q;
    __Vfunc_mubi4_or_hi__256__a = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
    __Vfunc_mubi4_or__257__b = __Vfunc_mubi4_or_hi__256__b;
    __Vfunc_mubi4_or__257__a = __Vfunc_mubi4_or_hi__256__a;
    __Vfunc_mubi4_or__257__a_in = __Vfunc_mubi4_or__257__a;
    __Vfunc_mubi4_or__257__b_in = __Vfunc_mubi4_or__257__b;
    vlSelf->__Vfunc_mubi4_or__257__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__257__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_or__257__a_in) 
                                               | (IData)(__Vfunc_mubi4_or__257__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_or__257__a_in) 
                                                   & (IData)(__Vfunc_mubi4_or__257__b_in)))));
    vlSelf->__Vfunc_mubi4_or__257__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__257__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_or__257__a_in) 
                                               & (IData)(__Vfunc_mubi4_or__257__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_or__257__a_in) 
                                                   | (IData)(__Vfunc_mubi4_or__257__b_in)))));
    __Vfunc_mubi4_or__257__Vfuncout = vlSelf->__Vfunc_mubi4_or__257__out;
    __Vfunc_mubi4_or_hi__256__Vfuncout = __Vfunc_mubi4_or__257__Vfuncout;
    __Vfunc_mubi4_and_hi__255__a = __Vfunc_mubi4_or_hi__256__Vfuncout;
    __Vfunc_mubi4_and__258__b = __Vfunc_mubi4_and_hi__255__b;
    __Vfunc_mubi4_and__258__a = __Vfunc_mubi4_and_hi__255__a;
    __Vfunc_mubi4_and__258__a_in = __Vfunc_mubi4_and__258__a;
    __Vfunc_mubi4_and__258__b_in = __Vfunc_mubi4_and__258__b;
    vlSelf->__Vfunc_mubi4_and__258__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__258__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__258__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__258__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__258__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__258__b_in)))));
    vlSelf->__Vfunc_mubi4_and__258__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__258__out)) 
                                           | ((8U & 
                                               ((IData)(__Vfunc_mubi4_and__258__a_in) 
                                                | (IData)(__Vfunc_mubi4_and__258__b_in))) 
                                              | (4U 
                                                 & ((IData)(__Vfunc_mubi4_and__258__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__258__b_in)))));
    __Vfunc_mubi4_and__258__Vfuncout = vlSelf->__Vfunc_mubi4_and__258__out;
    __Vfunc_mubi4_and_hi__255__Vfuncout = __Vfunc_mubi4_and__258__Vfuncout;
    __Vfunc_mubi4_and_hi__254__a = __Vfunc_mubi4_and_hi__255__Vfuncout;
    __Vfunc_mubi4_and__259__b = __Vfunc_mubi4_and_hi__254__b;
    __Vfunc_mubi4_and__259__a = __Vfunc_mubi4_and_hi__254__a;
    __Vfunc_mubi4_and__259__a_in = __Vfunc_mubi4_and__259__a;
    __Vfunc_mubi4_and__259__b_in = __Vfunc_mubi4_and__259__b;
    vlSelf->__Vfunc_mubi4_and__259__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__259__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__259__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__259__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__259__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__259__b_in)))));
    vlSelf->__Vfunc_mubi4_and__259__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__259__out)) 
                                           | ((8U & 
                                               ((IData)(__Vfunc_mubi4_and__259__a_in) 
                                                | (IData)(__Vfunc_mubi4_and__259__b_in))) 
                                              | (4U 
                                                 & ((IData)(__Vfunc_mubi4_and__259__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__259__b_in)))));
    __Vfunc_mubi4_and__259__Vfuncout = vlSelf->__Vfunc_mubi4_and__259__out;
    __Vfunc_mubi4_and_hi__254__Vfuncout = __Vfunc_mubi4_and__259__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__addr_collision_d 
        = __Vfunc_mubi4_and_hi__254__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__macro_write 
        = ((([&]() {
                    vlSelf->__Vfunc_mubi4_or_hi__266__b 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q;
                    vlSelf->__Vfunc_mubi4_or_hi__266__a 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
                    vlSelf->__Vfunc_mubi4_or__267__b 
                        = vlSelf->__Vfunc_mubi4_or_hi__266__b;
                    vlSelf->__Vfunc_mubi4_or__267__a 
                        = vlSelf->__Vfunc_mubi4_or_hi__266__a;
                    vlSelf->__Vfunc_mubi4_or__267__a_in 
                        = vlSelf->__Vfunc_mubi4_or__267__a;
                    vlSelf->__Vfunc_mubi4_or__267__b_in 
                        = vlSelf->__Vfunc_mubi4_or__267__b;
                    vlSelf->__Vfunc_mubi4_or__267__out 
                        = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__267__out)) 
                           | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__267__a_in) 
                                     | (IData)(vlSelf->__Vfunc_mubi4_or__267__b_in))) 
                              | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__267__a_in) 
                                       & (IData)(vlSelf->__Vfunc_mubi4_or__267__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__267__out 
                        = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__267__out)) 
                           | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__267__a_in) 
                                     & (IData)(vlSelf->__Vfunc_mubi4_or__267__b_in))) 
                              | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__267__a_in) 
                                       | (IData)(vlSelf->__Vfunc_mubi4_or__267__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__267__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__267__out;
                    vlSelf->__Vfunc_mubi4_or_hi__266__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__267__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__265__val 
                        = vlSelf->__Vfunc_mubi4_or_hi__266__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__265__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__265__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__265__Vfuncout)) 
            & (~ ([&]() {
                        vlSelf->__Vfunc_mubi4_test_true_loose__268__val 
                            = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__read_en;
                        vlSelf->__Vfunc_mubi4_test_true_loose__268__Vfuncout 
                            = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__268__val));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__268__Vfuncout)))) 
           & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_w_q)));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__macro_req 
        = (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_w_q)) 
            & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf))) 
           & ([&]() {
                vlSelf->__Vfunc_mubi4_or_hi__261__b 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q;
                vlSelf->__Vfunc_mubi4_or_hi__262__b 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
                vlSelf->__Vfunc_mubi4_or_hi__262__a 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__read_en;
                vlSelf->__Vfunc_mubi4_or__263__b = vlSelf->__Vfunc_mubi4_or_hi__262__b;
                vlSelf->__Vfunc_mubi4_or__263__a = vlSelf->__Vfunc_mubi4_or_hi__262__a;
                vlSelf->__Vfunc_mubi4_or__263__a_in 
                    = vlSelf->__Vfunc_mubi4_or__263__a;
                vlSelf->__Vfunc_mubi4_or__263__b_in 
                    = vlSelf->__Vfunc_mubi4_or__263__b;
                vlSelf->__Vfunc_mubi4_or__263__out 
                    = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__263__out)) 
                       | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__263__a_in) 
                                 | (IData)(vlSelf->__Vfunc_mubi4_or__263__b_in))) 
                          | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__263__a_in) 
                                   & (IData)(vlSelf->__Vfunc_mubi4_or__263__b_in)))));
                vlSelf->__Vfunc_mubi4_or__263__out 
                    = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__263__out)) 
                       | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__263__a_in) 
                                 & (IData)(vlSelf->__Vfunc_mubi4_or__263__b_in))) 
                          | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__263__a_in) 
                                   | (IData)(vlSelf->__Vfunc_mubi4_or__263__b_in)))));
                vlSelf->__Vfunc_mubi4_or__263__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__263__out;
                vlSelf->__Vfunc_mubi4_or_hi__262__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__263__Vfuncout;
                vlSelf->__Vfunc_mubi4_or_hi__261__a 
                    = vlSelf->__Vfunc_mubi4_or_hi__262__Vfuncout;
                vlSelf->__Vfunc_mubi4_or__264__b = vlSelf->__Vfunc_mubi4_or_hi__261__b;
                vlSelf->__Vfunc_mubi4_or__264__a = vlSelf->__Vfunc_mubi4_or_hi__261__a;
                vlSelf->__Vfunc_mubi4_or__264__a_in 
                    = vlSelf->__Vfunc_mubi4_or__264__a;
                vlSelf->__Vfunc_mubi4_or__264__b_in 
                    = vlSelf->__Vfunc_mubi4_or__264__b;
                vlSelf->__Vfunc_mubi4_or__264__out 
                    = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__264__out)) 
                       | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__264__a_in) 
                                 | (IData)(vlSelf->__Vfunc_mubi4_or__264__b_in))) 
                          | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__264__a_in) 
                                   & (IData)(vlSelf->__Vfunc_mubi4_or__264__b_in)))));
                vlSelf->__Vfunc_mubi4_or__264__out 
                    = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__264__out)) 
                       | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__264__a_in) 
                                 & (IData)(vlSelf->__Vfunc_mubi4_or__264__b_in))) 
                          | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__264__a_in) 
                                   | (IData)(vlSelf->__Vfunc_mubi4_or__264__b_in)))));
                vlSelf->__Vfunc_mubi4_or__264__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__264__out;
                vlSelf->__Vfunc_mubi4_or_hi__261__Vfuncout 
                    = vlSelf->__Vfunc_mubi4_or__264__Vfuncout;
                vlSelf->__Vfunc_mubi4_test_true_loose__260__val 
                    = vlSelf->__Vfunc_mubi4_or_hi__261__Vfuncout;
                vlSelf->__Vfunc_mubi4_test_true_loose__260__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__260__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__260__Vfuncout)));
    __Vtableidx5 = ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                      | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint)) 
                     << 8U) | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_trigger)
                                  ? 1U : 3U) << 5U) 
                               | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_trigger) 
                                    | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)) 
                                   << 4U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d) 
                                              << 3U) 
                                             | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q)))));
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = Vdmem_test__ConstPool__TABLE_h8c982ba2_0[__Vtableidx5];
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_pd 
        = Vdmem_test__ConstPool__TABLE_hcf85fe49_0[__Vtableidx5];
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_nd 
        = Vdmem_test__ConstPool__TABLE_ha9c8f8f8_0[__Vtableidx5];
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_clr 
        = Vdmem_test__ConstPool__TABLE_he1094e9d_0[__Vtableidx5];
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr 
        = Vdmem_test__ConstPool__TABLE_hf8b658e0_0[__Vtableidx5];
    vlSelf->dmem_test__DOT__dut__DOT__u_intr_hw_done__DOT__g_intr_event__DOT__new_event 
        = (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
             [2U][0U] >> 0x18U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intr_test_we)) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__done));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_scr_pending_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__macro_write)
            ? 9U : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__rw_collision)
                     ? 6U : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wpending 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__macro_write) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__272__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_en_d;
                vlSelf->__Vfunc_mubi4_test_true_loose__272__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__272__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__272__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__293__val = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__293__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__293__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__293__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__292__val = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__macro_req;
    __Vfunc_mubi4_bool_to_mubi__292__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__292__val)
                                                  ? 6U
                                                  : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__292__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_intr_state__DOT__wr_en 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_intr_hw_done__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intr_state_we));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__u_intr_hw_done__hw2reg_intr_state_d_o 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_intr_hw_done__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state__q));
    __Vfunc_mubi4_test_true_loose__285__val = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__285__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__285__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__285__Vfuncout;
    __Vfunc_mubi4_test_true_loose__284__val = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__284__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__284__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__284__Vfuncout;
    __Vfunc_mubi4_and_hi__290__b = (0xfU & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_d)));
    __Vfunc_mubi4_and_hi__290__a = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_and__291__b = __Vfunc_mubi4_and_hi__290__b;
    __Vfunc_mubi4_and__291__a = __Vfunc_mubi4_and_hi__290__a;
    __Vfunc_mubi4_and__291__a_in = __Vfunc_mubi4_and__291__a;
    __Vfunc_mubi4_and__291__b_in = __Vfunc_mubi4_and__291__b;
    vlSelf->__Vfunc_mubi4_and__291__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__291__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__291__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__291__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__291__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__291__b_in)))));
    vlSelf->__Vfunc_mubi4_and__291__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__291__out)) 
                                           | ((8U & 
                                               ((IData)(__Vfunc_mubi4_and__291__a_in) 
                                                | (IData)(__Vfunc_mubi4_and__291__b_in))) 
                                              | (4U 
                                                 & ((IData)(__Vfunc_mubi4_and__291__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__291__b_in)))));
    __Vfunc_mubi4_and__291__Vfuncout = vlSelf->__Vfunc_mubi4_and__291__out;
    __Vfunc_mubi4_and_hi__290__Vfuncout = __Vfunc_mubi4_and__291__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__290__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__ram_alert 
        = (((([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__295__val 
                            = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_d;
                        vlSelf->__Vfunc_mubi4_test_invalid__295__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__295__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__295__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__295__Vfuncout)) 
             | ([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__296__val 
                            = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_d;
                        vlSelf->__Vfunc_mubi4_test_invalid__296__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__296__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__296__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__296__Vfuncout))) 
            | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__297__val 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                    vlSelf->__Vfunc_mubi4_test_invalid__297__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__297__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__297__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__297__Vfuncout))) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__298__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                vlSelf->__Vfunc_mubi4_test_invalid__298__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__298__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__298__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__298__Vfuncout)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_intr_state__DOT__wr_data 
        = ((~ ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                [2U][0U] >> 0x18U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_intr_hw_done__DOT__g_intr_event__DOT__new_event)
               ? (IData)(vlSelf->dmem_test__DOT__dut__DOT____Vcellout__u_intr_hw_done__hw2reg_intr_state_d_o)
               : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state__q)));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__alert_o 
        = ((((([&]() {
                            vlSelf->__Vfunc_mubi4_test_invalid__278__val 
                                = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_en_q;
                            vlSelf->__Vfunc_mubi4_test_invalid__278__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__278__val)) 
                                            | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__278__val)))));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__278__Vfuncout)) 
              | ([&]() {
                            vlSelf->__Vfunc_mubi4_test_invalid__279__val 
                                = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__addr_collision_q;
                            vlSelf->__Vfunc_mubi4_test_invalid__279__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__279__val)) 
                                            | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__279__val)))));
                        }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__279__Vfuncout))) 
             | ([&]() {
                        vlSelf->__Vfunc_mubi4_test_invalid__280__val 
                            = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q;
                        vlSelf->__Vfunc_mubi4_test_invalid__280__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__280__val)) 
                                        | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__280__val)))));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__280__Vfuncout))) 
            | ([&]() {
                    vlSelf->__Vfunc_mubi4_test_invalid__281__val 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_invalid__281__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__281__val)) 
                                    | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__281__val)))));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__281__Vfuncout))) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__ram_alert));
}
