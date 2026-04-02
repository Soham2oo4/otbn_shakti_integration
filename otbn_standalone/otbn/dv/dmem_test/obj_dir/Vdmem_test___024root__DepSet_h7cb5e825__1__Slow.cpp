// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdmem_test.h for the primary calling header

#include "Vdmem_test__pch.h"
#include "Vdmem_test___024root.h"

extern const VlWide<8>/*255:0*/ Vdmem_test__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vdmem_test___024root___stl_comb__TOP__6(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___stl_comb__TOP__6\n"); );
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__mid[3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_7;
    vlSelf->__VdfgRegularize_hd87f99a1_3_0 = (((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_7 
                                                << 0x17U) 
                                               | (QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_7 
                                                                             >> 0x29U)))))) 
                                              + (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                  [3U][7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                   [3U][6U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__mid[2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_5;
    vlSelf->__VdfgRegularize_hd87f99a1_3_1 = (((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_5 
                                                << 0x17U) 
                                               | (QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_5 
                                                                             >> 0x29U)))))) 
                                              + (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                  [2U][7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                   [2U][6U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__mid[1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3;
    vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[0U] 
        = (IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1 
                     << 0x17U) | (QData)((IData)((0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1 
                                                             >> 0x29U)))))) 
                   + (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U])))));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[1U] 
        = (IData)(((((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1 
                      << 0x17U) | (QData)((IData)((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1 
                                                              >> 0x29U)))))) 
                    + (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U])))) 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[2U] 
        = (IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
                     << 0x17U) | (QData)((IData)((0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
                                                             >> 0x29U)))))) 
                   + (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                       [1U][7U])) << 0x20U) 
                      | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                        [1U][6U])))));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[3U] 
        = (IData)(((((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
                      << 0x17U) | (QData)((IData)((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
                                                              >> 0x29U)))))) 
                    + (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                        [1U][7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                    [1U][6U])))) 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U] 
        = (IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_1);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U] 
        = (IData)((vlSelf->__VdfgRegularize_hd87f99a1_3_1 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U] 
        = (IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_0);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U] 
        = (IData)((vlSelf->__VdfgRegularize_hd87f99a1_3_0 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][5U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][6U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][7U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U];
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q) {
        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_q) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[0U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[1U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[2U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[3U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[4U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[5U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[6U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[7U] 
                = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U];
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[0U] 
                = Vdmem_test__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[1U] 
                = Vdmem_test__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[2U] 
                = Vdmem_test__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[3U] 
                = Vdmem_test__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[4U] 
                = Vdmem_test__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[5U] 
                = Vdmem_test__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[6U] 
                = Vdmem_test__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[7U] 
                = Vdmem_test__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[0U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[0U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[1U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[1U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[2U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[2U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[3U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[3U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[4U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[5U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[6U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U];
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[7U] 
            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U];
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [0U][0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [1U][0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (4U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [2U][0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [3U][0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x10U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [4U][0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x20U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [5U][0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x40U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [6U][0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [7U][0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x100U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [8U][0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][0U] >> 0x1fU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (4U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x10U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x20U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x40U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x100U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][1U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][1U] >> 0x1fU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (4U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x10U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x20U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x40U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x100U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][2U] >> 0x1fU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (4U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x10U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x20U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x40U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x100U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][3U] >> 0x1fU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (4U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x10U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x20U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x40U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x100U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xaU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xcU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xdU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xeU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xfU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x10U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x11U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x13U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x14U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x15U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][4U] >> 0x1fU));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1eU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x1cU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x1bU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x1aU)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x18U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x17U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (4U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x10U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x20U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (0x40U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa7U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa7U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa7U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa7U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa7U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa7U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa7U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa7U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa7U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa7U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa7U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa7U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa7U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa7U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa7U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa7U]) | (0x80U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa7U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa7U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa8U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa8U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa8U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa8U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa8U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa8U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa8U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa8U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa8U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa8U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa8U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa8U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa8U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa8U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa8U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa8U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa8U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa8U]) | (0x100U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa9U] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa9U]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa9U] 
        = ((0x1fdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa9U]) | (2U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 8U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa9U] 
        = ((0x1fbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa9U]) | (4U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 7U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa9U] 
        = ((0x1f7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa9U]) | (8U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa9U] 
        = ((0x1efU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa9U]) | (0x10U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa9U] 
        = ((0x1dfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa9U]) | (0x20U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa9U] 
        = ((0x1bfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa9U]) | (0x40U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa9U] 
        = ((0x17fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa9U]) | (0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa9U] 
        = ((0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa9U]) | (0x100U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaaU] 
        = ((0x1feU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaaU]) | (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0xaU)));
}
