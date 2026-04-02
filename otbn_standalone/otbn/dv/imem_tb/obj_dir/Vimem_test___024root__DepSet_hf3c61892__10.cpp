// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimem_test.h for the primary calling header

#include "Vimem_test__pch.h"
#include "Vimem_test___024root.h"

VL_INLINE_OPT void Vimem_test___024root___nba_comb__TOP__16(Vimem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root___nba_comb__TOP__16\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_142;
    VlWide<4>/*127:0*/ __Vtemp_163;
    VlWide<4>/*127:0*/ __Vtemp_174;
    VlWide<5>/*159:0*/ __Vtemp_195;
    VlWide<5>/*159:0*/ __Vtemp_206;
    VlWide<6>/*191:0*/ __Vtemp_227;
    VlWide<6>/*191:0*/ __Vtemp_238;
    VlWide<7>/*223:0*/ __Vtemp_259;
    VlWide<7>/*223:0*/ __Vtemp_270;
    VlWide<8>/*255:0*/ __Vtemp_291;
    VlWide<8>/*255:0*/ __Vtemp_302;
    // Body
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaaU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaaU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xabU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xabU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xabU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xabU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xabU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xabU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xabU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xabU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xabU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xabU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xabU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xabU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xabU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xabU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xabU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xabU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xabU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xabU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xacU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xacU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xacU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xacU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xacU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xacU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xacU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xacU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xacU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xacU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xacU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xacU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xacU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xacU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xacU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xacU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xacU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xacU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xadU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xadU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xadU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xadU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xadU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xadU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xadU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xadU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xadU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xadU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xadU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xadU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xadU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xadU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xadU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xadU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xadU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xadU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaeU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaeU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaeU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaeU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaeU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaeU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaeU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaeU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaeU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaeU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaeU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaeU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaeU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaeU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xafU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xafU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xafU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xafU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xafU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xafU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xafU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xafU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xafU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xafU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xafU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xafU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xafU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xafU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xafU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xafU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xafU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xafU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb0U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb0U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb0U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb0U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb0U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb0U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb0U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb0U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb0U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb0U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb0U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb0U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb0U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb0U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb0U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb1U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb1U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb1U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb1U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb1U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb1U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb1U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb1U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb1U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb1U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb1U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb1U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb1U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb1U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb1U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb2U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb2U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb2U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb2U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb2U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb2U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb2U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb2U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb2U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb2U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb2U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb2U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb2U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb2U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb2U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb3U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb3U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb3U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb3U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb3U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb3U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb3U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb3U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb3U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb3U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb3U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb3U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb3U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb3U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb3U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb4U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb4U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb4U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb4U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb4U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb4U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb4U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb4U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb4U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb4U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb4U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb4U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb4U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb4U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb5U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb5U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb5U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb5U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb5U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb5U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb5U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb5U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb5U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb5U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb5U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb5U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb5U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb5U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb6U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb6U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb6U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb6U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb6U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb6U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb6U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb6U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb6U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb6U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb6U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb6U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb6U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb6U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb7U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb7U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb7U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb7U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb7U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb7U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb7U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb7U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb7U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb7U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb7U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb7U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb7U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb7U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb8U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb8U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb8U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb8U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb8U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb8U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb8U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb8U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb8U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb8U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb8U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb8U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb8U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb8U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb9U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb9U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb9U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb9U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb9U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb9U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb9U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb9U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb9U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb9U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb9U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb9U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xb9U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xb9U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbaU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbaU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbaU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbaU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbaU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbaU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbaU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbaU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbaU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbaU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbaU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbaU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbaU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbaU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbbU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbbU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbbU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbbU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbbU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbbU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbbU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbbU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbbU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbbU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbbU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbbU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbbU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbbU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbbU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbbU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbbU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbbU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbcU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbcU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbcU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbcU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbcU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbcU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbcU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbcU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbcU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbcU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbcU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbcU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbcU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbcU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbcU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbcU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbcU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbcU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbdU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbdU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbdU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbdU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbdU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbdU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbdU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbdU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbdU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbdU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbdU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbdU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbdU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbdU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbdU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbdU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbdU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbdU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbeU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbeU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbeU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbeU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbeU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbeU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbeU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbeU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbeU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbeU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbeU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbeU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbeU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbeU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbfU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbfU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][5U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbfU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbfU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbfU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbfU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbfU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbfU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbfU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbfU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbfU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbfU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbfU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbfU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbfU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbfU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbfU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbfU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc0U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc0U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc0U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc0U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc0U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc0U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc0U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc0U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc0U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] << 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc0U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc0U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] << 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc0U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc0U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] << 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc0U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc0U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] << 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc1U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc1U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc1U]) | (2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc1U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc1U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc1U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc1U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc1U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc1U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc1U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc1U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] << 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc1U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc1U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] << 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc1U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc1U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] << 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc2U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc2U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc2U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc2U]) | (4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc2U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc2U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc2U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc2U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc2U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc2U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc2U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc2U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc2U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] << 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc2U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc2U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] << 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc3U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc3U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc3U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc3U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc3U]) | (8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc3U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc3U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc3U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc3U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc3U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc3U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc3U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc3U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc3U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc3U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] << 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc4U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc4U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc4U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc4U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc4U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc4U]) | (0x10U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc4U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc4U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc4U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc4U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc4U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc4U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc4U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc4U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc5U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc5U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc5U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc5U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc5U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc5U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc5U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc5U]) | (0x20U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc5U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc5U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc5U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc5U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc5U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc5U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc6U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc6U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc6U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc6U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc6U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc6U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc6U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc6U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc6U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc6U]) | (0x40U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc6U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc6U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc6U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc6U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc7U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc7U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc7U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc7U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc7U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc7U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc7U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc7U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc7U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc7U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc7U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc7U]) | (0x80U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc7U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc7U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc8U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc8U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc8U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc8U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc8U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc8U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc8U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc8U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc8U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc8U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc8U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc8U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc8U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc8U]) | (0x100U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc9U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc9U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc9U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc9U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc9U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc9U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc9U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc9U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc9U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc9U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc9U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc9U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xc9U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xc9U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcaU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcaU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcaU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcaU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcaU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcaU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcaU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcaU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcaU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcaU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcaU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcaU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcaU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcaU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcbU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcbU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcbU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcbU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcbU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcbU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcbU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcbU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcbU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcbU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcbU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcbU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcbU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcbU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcbU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcbU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcbU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcbU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xccU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xccU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xccU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xccU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xccU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xccU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xccU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xccU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xccU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xccU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xccU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xccU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xccU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xccU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xccU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xccU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xccU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xccU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcdU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcdU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcdU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcdU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcdU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcdU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcdU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcdU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcdU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcdU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcdU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcdU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcdU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcdU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcdU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcdU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcdU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcdU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xceU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xceU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xceU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xceU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xceU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xceU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xceU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xceU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xceU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xceU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xceU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xceU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xceU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xceU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xceU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xceU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xceU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xceU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcfU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcfU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcfU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcfU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcfU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcfU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcfU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcfU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcfU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcfU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcfU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcfU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcfU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcfU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcfU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcfU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcfU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcfU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd0U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd0U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd0U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd0U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd0U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd0U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd0U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd0U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd0U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd0U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd0U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd0U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd0U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd0U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd0U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd1U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd1U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd1U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd1U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd1U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd1U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd1U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd1U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd1U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd1U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd1U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd1U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd1U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd1U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd1U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd2U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd2U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd2U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd2U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd2U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd2U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd2U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd2U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd2U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd2U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd2U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd2U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd2U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd2U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd2U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd3U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd3U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd3U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd3U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd3U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd3U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd3U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd3U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd3U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd3U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd3U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd3U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd3U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd3U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd3U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd4U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd4U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd4U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd4U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd4U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd4U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd4U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd4U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd4U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd4U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd4U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd4U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd4U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd4U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd5U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd5U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd5U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd5U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd5U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd5U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd5U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd5U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd5U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd5U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd5U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd5U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd5U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd5U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd6U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd6U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd6U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd6U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd6U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd6U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd6U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd6U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd6U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd6U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd6U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd6U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd6U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd6U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd7U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd7U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd7U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd7U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd7U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd7U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd7U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd7U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd7U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd7U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd7U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd7U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd7U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd7U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd8U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd8U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd8U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd8U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd8U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd8U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd8U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd8U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd8U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd8U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd8U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd8U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd8U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd8U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd9U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd9U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd9U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd9U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd9U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd9U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd9U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd9U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd9U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd9U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd9U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd9U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xd9U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xd9U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdaU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdaU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdaU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdaU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdaU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdaU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdaU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdaU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdaU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdaU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdaU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdaU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdaU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdaU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdbU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdbU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdbU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdbU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdbU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdbU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdbU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdbU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdbU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdbU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdbU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdbU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdbU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdbU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdbU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdbU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdbU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdbU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdcU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdcU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdcU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdcU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdcU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdcU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdcU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdcU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdcU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdcU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdcU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdcU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdcU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdcU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdcU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdcU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdcU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdcU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xddU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xddU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xddU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xddU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xddU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xddU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xddU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xddU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xddU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xddU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xddU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xddU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xddU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xddU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xddU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xddU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xddU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xddU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdeU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][6U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdeU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdeU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdeU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdeU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdeU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdeU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdeU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdeU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdeU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdeU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdeU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdeU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdeU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdfU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdfU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][6U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdfU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdfU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][6U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdfU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdfU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][6U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdfU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdfU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][6U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdfU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdfU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][6U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdfU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdfU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdfU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdfU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdfU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdfU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdfU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdfU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe0U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe0U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe0U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe0U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe0U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe0U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe0U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe0U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe0U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] << 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe0U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe0U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] << 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe0U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe0U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] << 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe0U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe0U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] << 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe1U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe1U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe1U]) | (2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe1U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe1U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe1U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe1U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe1U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe1U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe1U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe1U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] << 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe1U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe1U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] << 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe1U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe1U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] << 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe2U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe2U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe2U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe2U]) | (4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe2U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe2U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe2U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe2U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe2U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe2U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe2U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe2U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe2U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] << 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe2U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe2U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] << 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe3U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe3U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe3U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe3U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe3U]) | (8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe3U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe3U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe3U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe3U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe3U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe3U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe3U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe3U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe3U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe3U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] << 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe4U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe4U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe4U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe4U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe4U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe4U]) | (0x10U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe4U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe4U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe4U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe4U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe4U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe4U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe4U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe4U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] << 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe5U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe5U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe5U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe5U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe5U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe5U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe5U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe5U]) | (0x20U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe5U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe5U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe5U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe5U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe5U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe5U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe6U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe6U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe6U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe6U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe6U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe6U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe6U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe6U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe6U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe6U]) | (0x40U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe6U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe6U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe6U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe6U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe7U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe7U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe7U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe7U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe7U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe7U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe7U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe7U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe7U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe7U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe7U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe7U]) | (0x80U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe7U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe7U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe8U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe8U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe8U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe8U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe8U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe8U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe8U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe8U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe8U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe8U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe8U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe8U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe8U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe8U]) | (0x100U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe9U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe9U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe9U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe9U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe9U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe9U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe9U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe9U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe9U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe9U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe9U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe9U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xe9U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xe9U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeaU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeaU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeaU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeaU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeaU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeaU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeaU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeaU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeaU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeaU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeaU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeaU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeaU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeaU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xebU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xebU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xebU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xebU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xebU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xebU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xebU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xebU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xebU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xebU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xebU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xebU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xebU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xebU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xebU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xebU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xebU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xebU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xecU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xecU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xecU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xecU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xecU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xecU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xecU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xecU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xecU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xecU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xecU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xecU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xecU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xecU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xecU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xecU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xecU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xecU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xedU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xedU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xedU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xedU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xedU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xedU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xedU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xedU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xedU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xedU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xedU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xedU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xedU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xedU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xedU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xedU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xedU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xedU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeeU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeeU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeeU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeeU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeeU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeeU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeeU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeeU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeeU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeeU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeeU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeeU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeeU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeeU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xefU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xefU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xefU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xefU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xefU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xefU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xefU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xefU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xefU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xefU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xefU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xefU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xefU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xefU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xefU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xefU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xefU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xefU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf0U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf0U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf0U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf0U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf0U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf0U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf0U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf0U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf0U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf0U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf0U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf0U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf0U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf0U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf0U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf1U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf1U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf1U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf1U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf1U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf1U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf1U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf1U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf1U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf1U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf1U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf1U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf1U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf1U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf1U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf2U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf2U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf2U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf2U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf2U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf2U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf2U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf2U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf2U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf2U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf2U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf2U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf2U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf2U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf2U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf3U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf3U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf3U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf3U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf3U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf3U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf3U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf3U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf3U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf3U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf3U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf3U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf3U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf3U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf3U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf4U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf4U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf4U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf4U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf4U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf4U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf4U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf4U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf4U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf4U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf4U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf4U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf4U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf4U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf5U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf5U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf5U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf5U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf5U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf5U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf5U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf5U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf5U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf5U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf5U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf5U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf5U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf5U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf6U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf6U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf6U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf6U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf6U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf6U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf6U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf6U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf6U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf6U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf6U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf6U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf6U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf6U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf7U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf7U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf7U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf7U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf7U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf7U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf7U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf7U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf7U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf7U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf7U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf7U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf7U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf7U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf8U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf8U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf8U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf8U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf8U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf8U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf8U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf8U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf8U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf8U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf8U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf8U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf8U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf8U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf9U] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf9U] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf9U] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf9U] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf9U] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf9U]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf9U] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf9U]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf9U] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf9U]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf9U] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf9U]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xf9U] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xf9U]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfaU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfaU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfaU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfaU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfaU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfaU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfaU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfaU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfaU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfaU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfaU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfaU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfaU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfaU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfbU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfbU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfbU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfbU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfbU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfbU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfbU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfbU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfbU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfbU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfbU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfbU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfbU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfbU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfbU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfbU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfbU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfbU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfcU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfcU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfcU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfcU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfcU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfcU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfcU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfcU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfcU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfcU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfcU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfcU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfcU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfcU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfcU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfcU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfcU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfcU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfdU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfdU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfdU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfdU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfdU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfdU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfdU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfdU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfdU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfdU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfdU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfdU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfdU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfdU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfdU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfdU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfdU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfdU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfeU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][7U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfeU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfeU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfeU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfeU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfeU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfeU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfeU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfeU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfeU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfeU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfeU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfeU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfeU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xffU] 
        = ((0x1feU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xffU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][7U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xffU] 
        = ((0x1fdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xffU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][7U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xffU] 
        = ((0x1fbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xffU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][7U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xffU] 
        = ((0x1f7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xffU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][7U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xffU] 
        = ((0x1efU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xffU]) | (0x10U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][7U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xffU] 
        = ((0x1dfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xffU]) | (0x20U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xffU] 
        = ((0x1bfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xffU]) | (0x40U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xffU] 
        = ((0x17fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xffU]) | (0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xffU] 
        = ((0xffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xffU]) | (0x100U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[0U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[1U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[2U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[3U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[4U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[5U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_i 
        = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                            [0x1fU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                       >> 9U)))) << 0x1fU) 
           | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                               [0x1eU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                          >> 9U)))) 
               << 0x1eU) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                             [0x1dU] 
                                             & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                >> 9U)))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                     [0x1cU] 
                                                     & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                        >> 9U)))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                        [0x1bU] 
                                                        & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                           >> 9U)))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                           [0x1aU] 
                                                           & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                              >> 9U)))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                              [0x19U] 
                                                              & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                 >> 9U)))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                 [0x18U] 
                                                                 & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                    >> 9U)))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                    [0x17U] 
                                                                    & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                       >> 9U)))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                       [0x16U] 
                                                                       & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                          >> 9U)))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                          [0x15U] 
                                                                          & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                             >> 9U)))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                             [0x14U] 
                                                                             & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0x13U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0x12U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0x11U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0x10U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0xfU] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0xeU] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0xdU] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0xcU] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0xbU] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0xaU] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [9U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [8U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [7U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [6U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [5U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [4U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [3U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [2U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [1U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
                                                                                [0U] 
                                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                                                >> 9U))))))))))))))))))))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__255__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xffU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__254__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xfeU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__253__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xfdU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__252__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xfcU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__251__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xfbU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__250__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xfaU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__249__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf9U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__248__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf8U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__247__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf7U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__246__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf6U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__245__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf5U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__244__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf4U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__243__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf3U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__242__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf2U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__241__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf1U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__240__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xf0U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__239__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xefU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__238__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xeeU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__237__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xedU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__236__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xecU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__235__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xebU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__234__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xeaU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__233__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe9U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__232__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe8U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__231__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe7U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__230__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe6U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__229__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe5U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__228__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe4U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__227__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe3U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__226__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe2U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__225__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe1U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__224__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xe0U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__223__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xdfU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__222__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xdeU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__221__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xddU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__220__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xdcU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__219__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xdbU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__218__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xdaU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__217__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd9U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__216__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd8U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__215__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd7U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__214__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd6U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__213__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd5U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__212__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd4U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__211__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd3U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__210__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd2U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__209__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd1U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__208__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xd0U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__207__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xcfU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__206__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xceU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__205__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xcdU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__204__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xccU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__203__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xcbU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__202__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xcaU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__201__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc9U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__200__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc8U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__199__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc7U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__198__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc6U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__197__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc5U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__196__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc4U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__195__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc3U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__194__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc2U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__193__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc1U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__192__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xc0U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__191__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xbfU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__190__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xbeU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__189__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xbdU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__188__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xbcU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__187__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xbbU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__186__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xbaU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__185__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb9U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__184__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb8U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__183__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb7U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__182__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb6U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__181__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb5U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__180__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb4U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__179__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb3U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__178__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb2U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__177__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb1U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__176__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xb0U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__175__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xafU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__174__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xaeU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__173__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xadU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__172__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xacU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__171__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xabU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__170__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xaaU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__169__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa9U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__168__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa8U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__167__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa7U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__166__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa6U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__165__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa5U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__164__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa4U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__163__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa3U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__162__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa2U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__161__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa1U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__160__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0xa0U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__159__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x9fU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__158__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x9eU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__157__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x9dU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__156__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x9cU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__155__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x9bU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__154__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x9aU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__153__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x99U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__152__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x98U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__151__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x97U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__150__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x96U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__149__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x95U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__148__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x94U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__147__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x93U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__146__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x92U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__145__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x91U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__144__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x90U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__143__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x8fU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__142__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x8eU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__141__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x8dU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__140__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x8cU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__139__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x8bU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__138__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x8aU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__137__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x89U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__136__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x88U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__135__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x87U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__134__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x86U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__133__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x85U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__132__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x84U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__131__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x83U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__130__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x82U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__129__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x81U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__128__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x80U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__127__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x7fU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__126__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x7eU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__125__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x7dU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__124__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x7cU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__123__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x7bU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__122__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x7aU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__121__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x79U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__120__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x78U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__119__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x77U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__118__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x76U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__117__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x75U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__116__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x74U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__115__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x73U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__114__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x72U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__113__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x71U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__112__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x70U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__111__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x6fU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__110__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x6eU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__109__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x6dU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__108__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x6cU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__107__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x6bU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__106__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x6aU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__105__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x69U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__104__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x68U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__103__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x67U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__102__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x66U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__101__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x65U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__100__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x64U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__99__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x63U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__98__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x62U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__97__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x61U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__96__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x60U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__95__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x5fU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__94__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x5eU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__93__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x5dU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__92__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x5cU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__91__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x5bU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__90__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x5aU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__89__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x59U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__88__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x58U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__87__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x57U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__86__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x56U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__85__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x55U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__84__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x54U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__83__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x53U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__82__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x52U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__81__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x51U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__80__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x50U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__79__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x4fU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__78__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x4eU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__77__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x4dU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__76__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x4cU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__75__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x4bU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__74__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x4aU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__73__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x49U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__72__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x48U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__71__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x47U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__70__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x46U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__69__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x45U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__68__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x44U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__67__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x43U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__66__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x42U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__65__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x41U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__64__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x40U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__63__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x3fU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__62__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x3eU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__61__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x3dU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__60__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x3cU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__59__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x3bU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__58__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x3aU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__57__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x39U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__56__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x38U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__55__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x37U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__54__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x36U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__53__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x35U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__52__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x34U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__51__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x33U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__50__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x32U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__49__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x31U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__48__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x30U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__47__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x2fU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__46__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x2eU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__45__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x2dU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__44__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x2cU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__43__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x2bU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__42__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x2aU] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__41__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x29U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__40__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x28U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__39__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x27U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__38__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x26U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__37__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x25U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__36__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x24U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__35__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x23U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__34__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x22U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__33__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x21U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__32__KET____DOT__out_mux_bits 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
           [0x20U] & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                      >> 9U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_i));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)((((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__255__KET____DOT__out_mux_bits))) 
                            << 0x1fU) | (((IData)((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__254__KET____DOT__out_mux_bits))) 
                                          << 0x1eU) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__253__KET____DOT__out_mux_bits))) 
                                             << 0x1dU) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__252__KET____DOT__out_mux_bits))) 
                                                << 0x1cU) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__251__KET____DOT__out_mux_bits))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__250__KET____DOT__out_mux_bits))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__249__KET____DOT__out_mux_bits))) 
                                                         << 0x19U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__248__KET____DOT__out_mux_bits))) 
                                                            << 0x18U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__247__KET____DOT__out_mux_bits))) 
                                                               << 0x17U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__246__KET____DOT__out_mux_bits))) 
                                                                  << 0x16U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__245__KET____DOT__out_mux_bits))) 
                                                                     << 0x15U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__244__KET____DOT__out_mux_bits))) 
                                                                        << 0x14U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__243__KET____DOT__out_mux_bits))) 
                                                                           << 0x13U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__242__KET____DOT__out_mux_bits))) 
                                                                              << 0x12U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__241__KET____DOT__out_mux_bits))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__240__KET____DOT__out_mux_bits))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__239__KET____DOT__out_mux_bits))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__238__KET____DOT__out_mux_bits))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__237__KET____DOT__out_mux_bits))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__236__KET____DOT__out_mux_bits))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__235__KET____DOT__out_mux_bits))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__234__KET____DOT__out_mux_bits))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__233__KET____DOT__out_mux_bits))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__232__KET____DOT__out_mux_bits))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__231__KET____DOT__out_mux_bits))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__230__KET____DOT__out_mux_bits))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__229__KET____DOT__out_mux_bits))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__228__KET____DOT__out_mux_bits))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__227__KET____DOT__out_mux_bits))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__226__KET____DOT__out_mux_bits))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__225__KET____DOT__out_mux_bits))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__224__KET____DOT__out_mux_bits)))))))))))))))))))))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)((((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__223__KET____DOT__out_mux_bits))) 
                            << 0x1fU) | (((IData)((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__222__KET____DOT__out_mux_bits))) 
                                          << 0x1eU) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__221__KET____DOT__out_mux_bits))) 
                                             << 0x1dU) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__220__KET____DOT__out_mux_bits))) 
                                                << 0x1cU) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__219__KET____DOT__out_mux_bits))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__218__KET____DOT__out_mux_bits))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__217__KET____DOT__out_mux_bits))) 
                                                         << 0x19U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__216__KET____DOT__out_mux_bits))) 
                                                            << 0x18U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__215__KET____DOT__out_mux_bits))) 
                                                               << 0x17U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__214__KET____DOT__out_mux_bits))) 
                                                                  << 0x16U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__213__KET____DOT__out_mux_bits))) 
                                                                     << 0x15U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__212__KET____DOT__out_mux_bits))) 
                                                                        << 0x14U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__211__KET____DOT__out_mux_bits))) 
                                                                           << 0x13U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__210__KET____DOT__out_mux_bits))) 
                                                                              << 0x12U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__209__KET____DOT__out_mux_bits))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__208__KET____DOT__out_mux_bits))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__207__KET____DOT__out_mux_bits))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__206__KET____DOT__out_mux_bits))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__205__KET____DOT__out_mux_bits))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__204__KET____DOT__out_mux_bits))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__203__KET____DOT__out_mux_bits))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__202__KET____DOT__out_mux_bits))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__201__KET____DOT__out_mux_bits))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__200__KET____DOT__out_mux_bits))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__199__KET____DOT__out_mux_bits))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__198__KET____DOT__out_mux_bits))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__197__KET____DOT__out_mux_bits))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__196__KET____DOT__out_mux_bits))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__195__KET____DOT__out_mux_bits))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__194__KET____DOT__out_mux_bits))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__193__KET____DOT__out_mux_bits))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__192__KET____DOT__out_mux_bits)))))))))))))))))))))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)((((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__191__KET____DOT__out_mux_bits))) 
                            << 0x1fU) | (((IData)((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__190__KET____DOT__out_mux_bits))) 
                                          << 0x1eU) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__189__KET____DOT__out_mux_bits))) 
                                             << 0x1dU) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__188__KET____DOT__out_mux_bits))) 
                                                << 0x1cU) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__187__KET____DOT__out_mux_bits))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__186__KET____DOT__out_mux_bits))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__185__KET____DOT__out_mux_bits))) 
                                                         << 0x19U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__184__KET____DOT__out_mux_bits))) 
                                                            << 0x18U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__183__KET____DOT__out_mux_bits))) 
                                                               << 0x17U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__182__KET____DOT__out_mux_bits))) 
                                                                  << 0x16U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__181__KET____DOT__out_mux_bits))) 
                                                                     << 0x15U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__180__KET____DOT__out_mux_bits))) 
                                                                        << 0x14U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__179__KET____DOT__out_mux_bits))) 
                                                                           << 0x13U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__178__KET____DOT__out_mux_bits))) 
                                                                              << 0x12U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__177__KET____DOT__out_mux_bits))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__176__KET____DOT__out_mux_bits))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__175__KET____DOT__out_mux_bits))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__174__KET____DOT__out_mux_bits))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__173__KET____DOT__out_mux_bits))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__172__KET____DOT__out_mux_bits))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__171__KET____DOT__out_mux_bits))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__170__KET____DOT__out_mux_bits))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__169__KET____DOT__out_mux_bits))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__168__KET____DOT__out_mux_bits))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__167__KET____DOT__out_mux_bits))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__166__KET____DOT__out_mux_bits))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__165__KET____DOT__out_mux_bits))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__164__KET____DOT__out_mux_bits))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__163__KET____DOT__out_mux_bits))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__162__KET____DOT__out_mux_bits))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__161__KET____DOT__out_mux_bits))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__160__KET____DOT__out_mux_bits)))))))))))))))))))))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)((((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__159__KET____DOT__out_mux_bits))) 
                            << 0x1fU) | (((IData)((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__158__KET____DOT__out_mux_bits))) 
                                          << 0x1eU) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__157__KET____DOT__out_mux_bits))) 
                                             << 0x1dU) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__156__KET____DOT__out_mux_bits))) 
                                                << 0x1cU) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__155__KET____DOT__out_mux_bits))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__154__KET____DOT__out_mux_bits))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__153__KET____DOT__out_mux_bits))) 
                                                         << 0x19U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__152__KET____DOT__out_mux_bits))) 
                                                            << 0x18U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__151__KET____DOT__out_mux_bits))) 
                                                               << 0x17U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__150__KET____DOT__out_mux_bits))) 
                                                                  << 0x16U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__149__KET____DOT__out_mux_bits))) 
                                                                     << 0x15U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__148__KET____DOT__out_mux_bits))) 
                                                                        << 0x14U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__147__KET____DOT__out_mux_bits))) 
                                                                           << 0x13U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__146__KET____DOT__out_mux_bits))) 
                                                                              << 0x12U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__145__KET____DOT__out_mux_bits))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__144__KET____DOT__out_mux_bits))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__143__KET____DOT__out_mux_bits))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__142__KET____DOT__out_mux_bits))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__141__KET____DOT__out_mux_bits))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__140__KET____DOT__out_mux_bits))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__139__KET____DOT__out_mux_bits))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__138__KET____DOT__out_mux_bits))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__137__KET____DOT__out_mux_bits))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__136__KET____DOT__out_mux_bits))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__135__KET____DOT__out_mux_bits))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__134__KET____DOT__out_mux_bits))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__133__KET____DOT__out_mux_bits))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__132__KET____DOT__out_mux_bits))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__131__KET____DOT__out_mux_bits))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__130__KET____DOT__out_mux_bits))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__129__KET____DOT__out_mux_bits))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__128__KET____DOT__out_mux_bits)))))))))))))))))))))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)((((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__127__KET____DOT__out_mux_bits))) 
                            << 0x1fU) | (((IData)((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__126__KET____DOT__out_mux_bits))) 
                                          << 0x1eU) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__125__KET____DOT__out_mux_bits))) 
                                             << 0x1dU) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__124__KET____DOT__out_mux_bits))) 
                                                << 0x1cU) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__123__KET____DOT__out_mux_bits))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__122__KET____DOT__out_mux_bits))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__121__KET____DOT__out_mux_bits))) 
                                                         << 0x19U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__120__KET____DOT__out_mux_bits))) 
                                                            << 0x18U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__119__KET____DOT__out_mux_bits))) 
                                                               << 0x17U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__118__KET____DOT__out_mux_bits))) 
                                                                  << 0x16U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__117__KET____DOT__out_mux_bits))) 
                                                                     << 0x15U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__116__KET____DOT__out_mux_bits))) 
                                                                        << 0x14U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__115__KET____DOT__out_mux_bits))) 
                                                                           << 0x13U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__114__KET____DOT__out_mux_bits))) 
                                                                              << 0x12U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__113__KET____DOT__out_mux_bits))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__112__KET____DOT__out_mux_bits))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__111__KET____DOT__out_mux_bits))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__110__KET____DOT__out_mux_bits))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__109__KET____DOT__out_mux_bits))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__108__KET____DOT__out_mux_bits))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__107__KET____DOT__out_mux_bits))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__106__KET____DOT__out_mux_bits))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__105__KET____DOT__out_mux_bits))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__104__KET____DOT__out_mux_bits))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__103__KET____DOT__out_mux_bits))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__102__KET____DOT__out_mux_bits))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__101__KET____DOT__out_mux_bits))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__100__KET____DOT__out_mux_bits))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__99__KET____DOT__out_mux_bits))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__98__KET____DOT__out_mux_bits))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__97__KET____DOT__out_mux_bits))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__96__KET____DOT__out_mux_bits)))))))))))))))))))))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)((((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__95__KET____DOT__out_mux_bits))) 
                            << 0x1fU) | (((IData)((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__94__KET____DOT__out_mux_bits))) 
                                          << 0x1eU) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__93__KET____DOT__out_mux_bits))) 
                                             << 0x1dU) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__92__KET____DOT__out_mux_bits))) 
                                                << 0x1cU) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__91__KET____DOT__out_mux_bits))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__90__KET____DOT__out_mux_bits))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__89__KET____DOT__out_mux_bits))) 
                                                         << 0x19U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__88__KET____DOT__out_mux_bits))) 
                                                            << 0x18U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__87__KET____DOT__out_mux_bits))) 
                                                               << 0x17U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__86__KET____DOT__out_mux_bits))) 
                                                                  << 0x16U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__85__KET____DOT__out_mux_bits))) 
                                                                     << 0x15U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__84__KET____DOT__out_mux_bits))) 
                                                                        << 0x14U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__83__KET____DOT__out_mux_bits))) 
                                                                           << 0x13U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__82__KET____DOT__out_mux_bits))) 
                                                                              << 0x12U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__81__KET____DOT__out_mux_bits))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__80__KET____DOT__out_mux_bits))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__79__KET____DOT__out_mux_bits))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__78__KET____DOT__out_mux_bits))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__77__KET____DOT__out_mux_bits))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__76__KET____DOT__out_mux_bits))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__75__KET____DOT__out_mux_bits))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__74__KET____DOT__out_mux_bits))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__73__KET____DOT__out_mux_bits))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__72__KET____DOT__out_mux_bits))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__71__KET____DOT__out_mux_bits))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__70__KET____DOT__out_mux_bits))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__69__KET____DOT__out_mux_bits))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__68__KET____DOT__out_mux_bits))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__67__KET____DOT__out_mux_bits))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__66__KET____DOT__out_mux_bits))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__65__KET____DOT__out_mux_bits))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__64__KET____DOT__out_mux_bits)))))))))))))))))))))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o);
    __Vtemp_121[0U] = (IData)((((QData)((IData)((0U 
                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__63__KET____DOT__out_mux_bits)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__62__KET____DOT__out_mux_bits)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__61__KET____DOT__out_mux_bits)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__60__KET____DOT__out_mux_bits)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__59__KET____DOT__out_mux_bits)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__58__KET____DOT__out_mux_bits)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__57__KET____DOT__out_mux_bits)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__56__KET____DOT__out_mux_bits)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__55__KET____DOT__out_mux_bits)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__54__KET____DOT__out_mux_bits)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__53__KET____DOT__out_mux_bits)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__52__KET____DOT__out_mux_bits)))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__51__KET____DOT__out_mux_bits)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__50__KET____DOT__out_mux_bits)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__49__KET____DOT__out_mux_bits)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__48__KET____DOT__out_mux_bits)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__47__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__46__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__45__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__44__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__43__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__42__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__41__KET____DOT__out_mux_bits)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__40__KET____DOT__out_mux_bits)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__39__KET____DOT__out_mux_bits)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__38__KET____DOT__out_mux_bits)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__37__KET____DOT__out_mux_bits)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__36__KET____DOT__out_mux_bits)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__35__KET____DOT__out_mux_bits)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__34__KET____DOT__out_mux_bits)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__33__KET____DOT__out_mux_bits)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__32__KET____DOT__out_mux_bits)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_i)))))))))))))))))))))))))))))))))));
    __Vtemp_121[1U] = (IData)(((((QData)((IData)((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__63__KET____DOT__out_mux_bits)))) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__62__KET____DOT__out_mux_bits)))) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__61__KET____DOT__out_mux_bits)))) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__60__KET____DOT__out_mux_bits)))) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__59__KET____DOT__out_mux_bits)))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__58__KET____DOT__out_mux_bits)))) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__57__KET____DOT__out_mux_bits)))) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__56__KET____DOT__out_mux_bits)))) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__55__KET____DOT__out_mux_bits)))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__54__KET____DOT__out_mux_bits)))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__53__KET____DOT__out_mux_bits)))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__52__KET____DOT__out_mux_bits)))) 
                                                                             << 0x34U) 
                                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__51__KET____DOT__out_mux_bits)))) 
                                                                                << 0x33U) 
                                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__50__KET____DOT__out_mux_bits)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__49__KET____DOT__out_mux_bits)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__48__KET____DOT__out_mux_bits)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__47__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__46__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__45__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__44__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__43__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__42__KET____DOT__out_mux_bits)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__41__KET____DOT__out_mux_bits)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__40__KET____DOT__out_mux_bits)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__39__KET____DOT__out_mux_bits)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__38__KET____DOT__out_mux_bits)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__37__KET____DOT__out_mux_bits)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__36__KET____DOT__out_mux_bits)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__35__KET____DOT__out_mux_bits)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__34__KET____DOT__out_mux_bits)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__33__KET____DOT__out_mux_bits)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__32__KET____DOT__out_mux_bits)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_i)))))))))))))))))))))))))))))))))) 
                               >> 0x20U));
    __Vtemp_131[2U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__74__KET____DOT__out_mux_bits))) 
                        << 0xaU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__73__KET____DOT__out_mux_bits))) 
                                     << 9U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__72__KET____DOT__out_mux_bits))) 
                                                << 8U) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__71__KET____DOT__out_mux_bits))) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__70__KET____DOT__out_mux_bits))) 
                                                      << 6U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__69__KET____DOT__out_mux_bits))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__68__KET____DOT__out_mux_bits))) 
                                                            << 4U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__67__KET____DOT__out_mux_bits))) 
                                                               << 3U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__66__KET____DOT__out_mux_bits))) 
                                                                  << 2U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__65__KET____DOT__out_mux_bits))) 
                                                                     << 1U) 
                                                                    | (0U 
                                                                       != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__64__KET____DOT__out_mux_bits))))))))))));
    __Vtemp_142[2U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__85__KET____DOT__out_mux_bits))) 
                        << 0x15U) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__84__KET____DOT__out_mux_bits))) 
                                      << 0x14U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__83__KET____DOT__out_mux_bits))) 
                                                    << 0x13U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__82__KET____DOT__out_mux_bits))) 
                                                       << 0x12U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__81__KET____DOT__out_mux_bits))) 
                                                          << 0x11U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__80__KET____DOT__out_mux_bits))) 
                                                             << 0x10U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__79__KET____DOT__out_mux_bits))) 
                                                                << 0xfU) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__78__KET____DOT__out_mux_bits))) 
                                                                   << 0xeU) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__77__KET____DOT__out_mux_bits))) 
                                                                      << 0xdU) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__76__KET____DOT__out_mux_bits))) 
                                                                         << 0xcU) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__75__KET____DOT__out_mux_bits))) 
                                                                            << 0xbU) 
                                                                           | __Vtemp_131[2U])))))))))));
    __Vtemp_163[3U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__106__KET____DOT__out_mux_bits))) 
                        << 0xaU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__105__KET____DOT__out_mux_bits))) 
                                     << 9U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__104__KET____DOT__out_mux_bits))) 
                                                << 8U) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__103__KET____DOT__out_mux_bits))) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__102__KET____DOT__out_mux_bits))) 
                                                      << 6U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__101__KET____DOT__out_mux_bits))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__100__KET____DOT__out_mux_bits))) 
                                                            << 4U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__99__KET____DOT__out_mux_bits))) 
                                                               << 3U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__98__KET____DOT__out_mux_bits))) 
                                                                  << 2U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__97__KET____DOT__out_mux_bits))) 
                                                                     << 1U) 
                                                                    | (0U 
                                                                       != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__96__KET____DOT__out_mux_bits))))))))))));
    __Vtemp_174[3U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__117__KET____DOT__out_mux_bits))) 
                        << 0x15U) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__116__KET____DOT__out_mux_bits))) 
                                      << 0x14U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__115__KET____DOT__out_mux_bits))) 
                                                    << 0x13U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__114__KET____DOT__out_mux_bits))) 
                                                       << 0x12U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__113__KET____DOT__out_mux_bits))) 
                                                          << 0x11U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__112__KET____DOT__out_mux_bits))) 
                                                             << 0x10U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__111__KET____DOT__out_mux_bits))) 
                                                                << 0xfU) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__110__KET____DOT__out_mux_bits))) 
                                                                   << 0xeU) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__109__KET____DOT__out_mux_bits))) 
                                                                      << 0xdU) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__108__KET____DOT__out_mux_bits))) 
                                                                         << 0xcU) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__107__KET____DOT__out_mux_bits))) 
                                                                            << 0xbU) 
                                                                           | __Vtemp_163[3U])))))))))));
    __Vtemp_195[4U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__138__KET____DOT__out_mux_bits))) 
                        << 0xaU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__137__KET____DOT__out_mux_bits))) 
                                     << 9U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__136__KET____DOT__out_mux_bits))) 
                                                << 8U) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__135__KET____DOT__out_mux_bits))) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__134__KET____DOT__out_mux_bits))) 
                                                      << 6U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__133__KET____DOT__out_mux_bits))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__132__KET____DOT__out_mux_bits))) 
                                                            << 4U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__131__KET____DOT__out_mux_bits))) 
                                                               << 3U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__130__KET____DOT__out_mux_bits))) 
                                                                  << 2U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__129__KET____DOT__out_mux_bits))) 
                                                                     << 1U) 
                                                                    | (0U 
                                                                       != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__128__KET____DOT__out_mux_bits))))))))))));
    __Vtemp_206[4U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__149__KET____DOT__out_mux_bits))) 
                        << 0x15U) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__148__KET____DOT__out_mux_bits))) 
                                      << 0x14U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__147__KET____DOT__out_mux_bits))) 
                                                    << 0x13U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__146__KET____DOT__out_mux_bits))) 
                                                       << 0x12U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__145__KET____DOT__out_mux_bits))) 
                                                          << 0x11U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__144__KET____DOT__out_mux_bits))) 
                                                             << 0x10U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__143__KET____DOT__out_mux_bits))) 
                                                                << 0xfU) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__142__KET____DOT__out_mux_bits))) 
                                                                   << 0xeU) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__141__KET____DOT__out_mux_bits))) 
                                                                      << 0xdU) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__140__KET____DOT__out_mux_bits))) 
                                                                         << 0xcU) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__139__KET____DOT__out_mux_bits))) 
                                                                            << 0xbU) 
                                                                           | __Vtemp_195[4U])))))))))));
    __Vtemp_227[5U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__170__KET____DOT__out_mux_bits))) 
                        << 0xaU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__169__KET____DOT__out_mux_bits))) 
                                     << 9U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__168__KET____DOT__out_mux_bits))) 
                                                << 8U) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__167__KET____DOT__out_mux_bits))) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__166__KET____DOT__out_mux_bits))) 
                                                      << 6U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__165__KET____DOT__out_mux_bits))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__164__KET____DOT__out_mux_bits))) 
                                                            << 4U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__163__KET____DOT__out_mux_bits))) 
                                                               << 3U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__162__KET____DOT__out_mux_bits))) 
                                                                  << 2U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__161__KET____DOT__out_mux_bits))) 
                                                                     << 1U) 
                                                                    | (0U 
                                                                       != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__160__KET____DOT__out_mux_bits))))))))))));
    __Vtemp_238[5U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__181__KET____DOT__out_mux_bits))) 
                        << 0x15U) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__180__KET____DOT__out_mux_bits))) 
                                      << 0x14U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__179__KET____DOT__out_mux_bits))) 
                                                    << 0x13U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__178__KET____DOT__out_mux_bits))) 
                                                       << 0x12U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__177__KET____DOT__out_mux_bits))) 
                                                          << 0x11U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__176__KET____DOT__out_mux_bits))) 
                                                             << 0x10U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__175__KET____DOT__out_mux_bits))) 
                                                                << 0xfU) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__174__KET____DOT__out_mux_bits))) 
                                                                   << 0xeU) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__173__KET____DOT__out_mux_bits))) 
                                                                      << 0xdU) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__172__KET____DOT__out_mux_bits))) 
                                                                         << 0xcU) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__171__KET____DOT__out_mux_bits))) 
                                                                            << 0xbU) 
                                                                           | __Vtemp_227[5U])))))))))));
    __Vtemp_259[6U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__202__KET____DOT__out_mux_bits))) 
                        << 0xaU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__201__KET____DOT__out_mux_bits))) 
                                     << 9U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__200__KET____DOT__out_mux_bits))) 
                                                << 8U) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__199__KET____DOT__out_mux_bits))) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__198__KET____DOT__out_mux_bits))) 
                                                      << 6U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__197__KET____DOT__out_mux_bits))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__196__KET____DOT__out_mux_bits))) 
                                                            << 4U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__195__KET____DOT__out_mux_bits))) 
                                                               << 3U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__194__KET____DOT__out_mux_bits))) 
                                                                  << 2U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__193__KET____DOT__out_mux_bits))) 
                                                                     << 1U) 
                                                                    | (0U 
                                                                       != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__192__KET____DOT__out_mux_bits))))))))))));
    __Vtemp_270[6U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__213__KET____DOT__out_mux_bits))) 
                        << 0x15U) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__212__KET____DOT__out_mux_bits))) 
                                      << 0x14U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__211__KET____DOT__out_mux_bits))) 
                                                    << 0x13U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__210__KET____DOT__out_mux_bits))) 
                                                       << 0x12U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__209__KET____DOT__out_mux_bits))) 
                                                          << 0x11U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__208__KET____DOT__out_mux_bits))) 
                                                             << 0x10U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__207__KET____DOT__out_mux_bits))) 
                                                                << 0xfU) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__206__KET____DOT__out_mux_bits))) 
                                                                   << 0xeU) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__205__KET____DOT__out_mux_bits))) 
                                                                      << 0xdU) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__204__KET____DOT__out_mux_bits))) 
                                                                         << 0xcU) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__203__KET____DOT__out_mux_bits))) 
                                                                            << 0xbU) 
                                                                           | __Vtemp_259[6U])))))))))));
    __Vtemp_291[7U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__234__KET____DOT__out_mux_bits))) 
                        << 0xaU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__233__KET____DOT__out_mux_bits))) 
                                     << 9U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__232__KET____DOT__out_mux_bits))) 
                                                << 8U) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__231__KET____DOT__out_mux_bits))) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__230__KET____DOT__out_mux_bits))) 
                                                      << 6U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__229__KET____DOT__out_mux_bits))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__228__KET____DOT__out_mux_bits))) 
                                                            << 4U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__227__KET____DOT__out_mux_bits))) 
                                                               << 3U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__226__KET____DOT__out_mux_bits))) 
                                                                  << 2U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__225__KET____DOT__out_mux_bits))) 
                                                                     << 1U) 
                                                                    | (0U 
                                                                       != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__224__KET____DOT__out_mux_bits))))))))))));
    __Vtemp_302[7U] = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__245__KET____DOT__out_mux_bits))) 
                        << 0x15U) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__244__KET____DOT__out_mux_bits))) 
                                      << 0x14U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__243__KET____DOT__out_mux_bits))) 
                                                    << 0x13U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__242__KET____DOT__out_mux_bits))) 
                                                       << 0x12U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__241__KET____DOT__out_mux_bits))) 
                                                          << 0x11U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__240__KET____DOT__out_mux_bits))) 
                                                             << 0x10U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__239__KET____DOT__out_mux_bits))) 
                                                                << 0xfU) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__238__KET____DOT__out_mux_bits))) 
                                                                   << 0xeU) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__237__KET____DOT__out_mux_bits))) 
                                                                      << 0xdU) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__236__KET____DOT__out_mux_bits))) 
                                                                         << 0xcU) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__235__KET____DOT__out_mux_bits))) 
                                                                            << 0xbU) 
                                                                           | __Vtemp_291[7U])))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg[0U] 
        = __Vtemp_121[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg[1U] 
        = __Vtemp_121[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg[2U] 
        = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__95__KET____DOT__out_mux_bits))) 
            << 0x1fU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__94__KET____DOT__out_mux_bits))) 
                          << 0x1eU) | (((IData)((0U 
                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__93__KET____DOT__out_mux_bits))) 
                                        << 0x1dU) | 
                                       (((IData)((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__92__KET____DOT__out_mux_bits))) 
                                         << 0x1cU) 
                                        | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__91__KET____DOT__out_mux_bits))) 
                                            << 0x1bU) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__90__KET____DOT__out_mux_bits))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__89__KET____DOT__out_mux_bits))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__88__KET____DOT__out_mux_bits))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__87__KET____DOT__out_mux_bits))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__86__KET____DOT__out_mux_bits))) 
                                                           << 0x16U) 
                                                          | __Vtemp_142[2U]))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg[3U] 
        = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__127__KET____DOT__out_mux_bits))) 
            << 0x1fU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__126__KET____DOT__out_mux_bits))) 
                          << 0x1eU) | (((IData)((0U 
                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__125__KET____DOT__out_mux_bits))) 
                                        << 0x1dU) | 
                                       (((IData)((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__124__KET____DOT__out_mux_bits))) 
                                         << 0x1cU) 
                                        | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__123__KET____DOT__out_mux_bits))) 
                                            << 0x1bU) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__122__KET____DOT__out_mux_bits))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__121__KET____DOT__out_mux_bits))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__120__KET____DOT__out_mux_bits))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__119__KET____DOT__out_mux_bits))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__118__KET____DOT__out_mux_bits))) 
                                                           << 0x16U) 
                                                          | __Vtemp_174[3U]))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg[4U] 
        = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__159__KET____DOT__out_mux_bits))) 
            << 0x1fU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__158__KET____DOT__out_mux_bits))) 
                          << 0x1eU) | (((IData)((0U 
                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__157__KET____DOT__out_mux_bits))) 
                                        << 0x1dU) | 
                                       (((IData)((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__156__KET____DOT__out_mux_bits))) 
                                         << 0x1cU) 
                                        | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__155__KET____DOT__out_mux_bits))) 
                                            << 0x1bU) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__154__KET____DOT__out_mux_bits))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__153__KET____DOT__out_mux_bits))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__152__KET____DOT__out_mux_bits))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__151__KET____DOT__out_mux_bits))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__150__KET____DOT__out_mux_bits))) 
                                                           << 0x16U) 
                                                          | __Vtemp_206[4U]))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg[5U] 
        = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__191__KET____DOT__out_mux_bits))) 
            << 0x1fU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__190__KET____DOT__out_mux_bits))) 
                          << 0x1eU) | (((IData)((0U 
                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__189__KET____DOT__out_mux_bits))) 
                                        << 0x1dU) | 
                                       (((IData)((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__188__KET____DOT__out_mux_bits))) 
                                         << 0x1cU) 
                                        | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__187__KET____DOT__out_mux_bits))) 
                                            << 0x1bU) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__186__KET____DOT__out_mux_bits))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__185__KET____DOT__out_mux_bits))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__184__KET____DOT__out_mux_bits))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__183__KET____DOT__out_mux_bits))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__182__KET____DOT__out_mux_bits))) 
                                                           << 0x16U) 
                                                          | __Vtemp_238[5U]))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg[6U] 
        = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__223__KET____DOT__out_mux_bits))) 
            << 0x1fU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__222__KET____DOT__out_mux_bits))) 
                          << 0x1eU) | (((IData)((0U 
                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__221__KET____DOT__out_mux_bits))) 
                                        << 0x1dU) | 
                                       (((IData)((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__220__KET____DOT__out_mux_bits))) 
                                         << 0x1cU) 
                                        | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__219__KET____DOT__out_mux_bits))) 
                                            << 0x1bU) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__218__KET____DOT__out_mux_bits))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__217__KET____DOT__out_mux_bits))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__216__KET____DOT__out_mux_bits))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__215__KET____DOT__out_mux_bits))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__214__KET____DOT__out_mux_bits))) 
                                                           << 0x16U) 
                                                          | __Vtemp_270[6U]))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg[7U] 
        = (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__255__KET____DOT__out_mux_bits))) 
            << 0x1fU) | (((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__254__KET____DOT__out_mux_bits))) 
                          << 0x1eU) | (((IData)((0U 
                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__253__KET____DOT__out_mux_bits))) 
                                        << 0x1dU) | 
                                       (((IData)((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__252__KET____DOT__out_mux_bits))) 
                                         << 0x1cU) 
                                        | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__251__KET____DOT__out_mux_bits))) 
                                            << 0x1bU) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__250__KET____DOT__out_mux_bits))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__249__KET____DOT__out_mux_bits))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__248__KET____DOT__out_mux_bits))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__247__KET____DOT__out_mux_bits))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__246__KET____DOT__out_mux_bits))) 
                                                           << 0x16U) 
                                                          | __Vtemp_302[7U]))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)((((IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__63__KET____DOT__out_mux_bits))) 
                            << 0x1fU) | (((IData)((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__62__KET____DOT__out_mux_bits))) 
                                          << 0x1eU) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__61__KET____DOT__out_mux_bits))) 
                                             << 0x1dU) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__60__KET____DOT__out_mux_bits))) 
                                                << 0x1cU) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__59__KET____DOT__out_mux_bits))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__58__KET____DOT__out_mux_bits))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__57__KET____DOT__out_mux_bits))) 
                                                         << 0x19U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__56__KET____DOT__out_mux_bits))) 
                                                            << 0x18U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__55__KET____DOT__out_mux_bits))) 
                                                               << 0x17U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__54__KET____DOT__out_mux_bits))) 
                                                                  << 0x16U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__53__KET____DOT__out_mux_bits))) 
                                                                     << 0x15U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__52__KET____DOT__out_mux_bits))) 
                                                                        << 0x14U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__51__KET____DOT__out_mux_bits))) 
                                                                           << 0x13U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__50__KET____DOT__out_mux_bits))) 
                                                                              << 0x12U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__49__KET____DOT__out_mux_bits))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__48__KET____DOT__out_mux_bits))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__47__KET____DOT__out_mux_bits))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__46__KET____DOT__out_mux_bits))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__45__KET____DOT__out_mux_bits))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__44__KET____DOT__out_mux_bits))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__43__KET____DOT__out_mux_bits))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__42__KET____DOT__out_mux_bits))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__41__KET____DOT__out_mux_bits))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__40__KET____DOT__out_mux_bits))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__39__KET____DOT__out_mux_bits))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__38__KET____DOT__out_mux_bits))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__37__KET____DOT__out_mux_bits))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__36__KET____DOT__out_mux_bits))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__35__KET____DOT__out_mux_bits))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__34__KET____DOT__out_mux_bits))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__33__KET____DOT__out_mux_bits))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__g_in_mux_outer__BRA__32__KET____DOT__out_mux_bits)))))))))))))))))))))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][0U] 
        = (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o);
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][1U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
            << 7U) | (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__0__KET____DOT__i_secded_enc__data_o 
                              >> 0x20U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][2U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
            << 0xeU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
                         >> 0x19U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][3U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
            << 0x15U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
                          >> 0x12U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][4U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
            << 0x1cU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
                          >> 0xbU) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][5U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
            >> 4U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) << 0x1cU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][6U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
            << 3U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
                               >> 0x20U)) >> 4U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][7U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
            << 0xaU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
                         >> 0x1dU) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][8U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
            << 0x11U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
                          >> 0x16U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[2U][9U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o) 
            >> 0xfU) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_rdata_enc__BRA__7__KET____DOT__i_secded_enc__data_o 
                                 >> 0x20U)) << 0x11U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                     [0U][0U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [1U][0U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [2U][0U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[1U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [0U][0U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[1U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [1U]) | (2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                     [1U][0U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[1U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [2U][0U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[2U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [0U][0U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[2U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [1U][0U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[2U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [2U]) | (4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                     [2U][0U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[3U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [0U][0U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[3U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [1U][0U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[3U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [2U][0U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[4U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [0U][0U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[4U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [1U][0U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[4U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [2U][0U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[5U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [0U][0U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[5U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [1U][0U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[5U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [2U][0U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[6U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [0U][0U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[6U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [1U][0U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[6U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [2U][0U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[7U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [0U][0U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[7U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [1U][0U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[7U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [2U][0U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[8U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [0U][0U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[8U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [1U][0U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[8U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [2U][0U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[9U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [0U][0U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[9U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [1U][0U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[9U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                           [2U][0U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xaU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [0U][0U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xaU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [1U][0U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xaU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [2U][0U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xbU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xbU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [0U][0U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xbU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xbU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [1U][0U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xbU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xbU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [2U][0U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xcU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xcU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [0U][0U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xcU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xcU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [1U][0U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xcU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xcU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [2U][0U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xdU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xdU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [0U][0U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xdU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xdU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [1U][0U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xdU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xdU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [2U][0U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xeU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [0U][0U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xeU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [1U][0U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xeU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [2U][0U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xfU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xfU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [0U][0U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xfU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xfU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [1U][0U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0xfU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0xfU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                             [2U][0U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x10U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x10U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x10U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x10U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x10U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x10U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x11U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x11U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x11U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x11U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x11U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x11U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x12U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x12U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x12U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x12U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x12U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x12U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x13U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x13U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x13U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x13U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x13U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x13U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x14U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x14U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x14U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x14U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x14U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x14U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x15U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x15U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x15U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x15U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x15U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x15U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x16U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x16U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x16U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x16U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x16U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x16U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x17U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x17U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x17U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x17U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x17U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x17U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x18U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x18U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x18U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x18U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x18U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x18U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x19U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x19U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x19U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x19U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x19U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x19U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1aU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1aU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1aU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1aU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1aU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1aU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1bU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1bU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1bU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1bU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1bU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1bU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1cU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1cU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1cU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1cU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1cU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1cU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1dU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1dU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1dU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1dU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1dU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1dU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1eU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1eU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][0U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1eU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1eU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1eU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1eU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1fU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1fU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [0U][0U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1fU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1fU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][0U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x1fU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x1fU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][0U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x20U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x20U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [0U][1U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x20U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x20U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x20U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x20U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x21U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x21U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x21U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x21U]) | (2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [1U][1U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x21U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x21U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x22U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x22U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x22U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x22U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x22U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x22U]) | (4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [2U][1U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x23U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x23U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x23U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x23U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x23U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x23U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x24U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x24U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x24U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x24U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x24U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x24U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x25U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x25U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x25U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x25U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x25U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x25U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x26U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x26U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x26U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x26U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x26U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x26U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x27U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x27U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x27U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x27U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x27U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x27U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x28U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x28U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x28U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x28U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x28U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x28U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x29U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x29U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x29U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x29U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x29U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x29U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2aU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2aU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2aU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2aU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2aU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2aU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2bU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2bU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2bU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2bU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2bU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2bU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2cU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2cU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2cU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2cU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2cU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2cU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2dU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2dU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2dU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2dU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2dU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2dU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2eU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2eU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2eU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2eU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2eU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2eU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2fU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2fU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2fU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2fU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x2fU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x2fU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x30U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x30U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x30U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x30U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x30U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x30U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x31U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x31U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x31U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x31U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x31U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x31U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x32U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x32U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x32U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x32U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x32U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x32U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x33U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x33U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x33U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x33U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x33U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x33U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x34U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x34U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x34U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x34U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x34U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x34U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x35U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x35U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x35U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x35U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x35U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x35U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x36U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x36U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x36U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x36U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x36U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x36U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x37U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x37U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x37U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x37U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x37U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x37U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x38U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x38U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x38U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x38U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x38U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x38U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x39U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x39U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x39U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x39U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x39U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x39U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3aU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3aU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3aU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3aU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3aU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3aU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3bU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3bU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3bU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3bU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3bU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3bU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3cU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3cU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3cU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3cU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3cU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3cU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3dU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3dU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3dU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3dU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3dU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3dU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3eU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3eU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][1U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3eU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3eU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3eU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3eU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3fU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3fU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [0U][1U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3fU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3fU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][1U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x3fU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x3fU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][1U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x40U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x40U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [0U][2U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x40U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x40U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x40U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x40U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x41U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x41U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x41U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x41U]) | (2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [1U][2U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x41U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x41U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x42U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x42U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x42U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x42U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x42U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x42U]) | (4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [2U][2U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x43U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x43U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x43U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x43U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x43U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x43U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x44U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x44U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x44U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x44U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x44U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x44U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x45U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x45U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x45U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x45U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x45U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x45U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x46U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x46U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x46U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x46U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x46U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x46U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x47U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x47U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x47U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x47U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x47U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x47U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x48U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x48U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x48U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x48U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x48U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x48U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x49U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x49U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x49U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x49U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x49U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x49U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4aU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4aU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4aU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4aU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4aU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4aU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4bU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4bU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4bU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4bU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4bU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4bU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4cU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4cU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4cU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4cU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4cU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4cU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4dU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4dU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4dU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4dU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4dU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4dU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4eU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4eU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4eU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4eU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4eU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4eU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4fU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4fU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4fU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4fU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x4fU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x4fU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x50U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x50U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x50U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x50U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x50U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x50U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x51U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x51U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x51U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x51U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x51U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x51U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x52U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x52U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x52U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x52U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x52U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x52U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x53U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x53U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x53U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x53U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x53U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x53U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x54U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x54U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x54U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x54U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x54U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x54U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x55U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x55U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x55U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x55U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x55U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x55U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x56U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x56U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x56U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x56U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x56U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x56U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x57U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x57U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x57U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x57U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x57U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x57U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x58U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x58U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x58U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x58U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x58U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x58U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x59U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x59U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x59U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x59U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x59U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x59U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5aU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5aU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5aU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5aU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5aU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5aU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5bU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5bU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5bU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5bU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5bU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5bU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5cU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5cU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5cU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5cU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5cU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5cU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5dU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5dU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5dU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5dU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5dU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5dU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5eU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5eU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][2U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5eU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5eU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5eU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5eU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5fU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5fU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [0U][2U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5fU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5fU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][2U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x5fU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x5fU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][2U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x60U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x60U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [0U][3U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x60U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x60U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x60U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x60U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x61U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x61U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x61U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x61U]) | (2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [1U][3U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x61U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x61U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x62U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x62U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x62U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x62U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x62U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x62U]) | (4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                        [2U][3U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x63U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x63U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x63U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x63U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x63U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x63U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x64U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x64U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x64U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x64U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x64U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x64U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x65U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x65U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x65U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x65U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x65U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x65U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x66U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x66U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x66U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x66U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x66U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x66U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x67U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x67U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x67U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x67U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x67U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x67U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x68U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x68U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x68U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x68U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x68U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x68U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x69U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x69U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x69U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x69U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x69U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x69U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6aU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6aU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6aU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6aU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6aU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6aU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6bU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6bU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6bU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6bU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6bU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6bU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6cU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6cU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6cU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6cU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6cU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6cU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6dU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6dU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6dU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6dU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6dU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6dU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6eU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6eU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6eU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6eU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6eU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6eU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6fU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6fU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6fU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6fU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x6fU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x6fU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x70U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x70U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x70U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x70U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x70U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x70U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x71U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x71U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x71U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x71U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x71U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x71U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x72U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x72U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x72U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x72U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x72U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x72U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x73U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x73U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x73U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x73U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x73U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x73U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x74U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x74U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x74U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x74U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x74U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x74U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x75U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x75U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x75U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x75U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x75U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x75U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x76U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x76U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x76U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x76U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x76U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x76U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x77U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x77U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x77U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x77U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x77U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x77U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x78U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x78U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x78U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x78U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x78U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x78U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x79U] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x79U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x79U] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x79U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x79U] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x79U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7aU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7aU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7aU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7aU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7aU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7aU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7bU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7bU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7bU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7bU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7bU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7bU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7cU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7cU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7cU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7cU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7cU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7cU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7dU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7dU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7dU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7dU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7dU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7dU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7eU] 
        = ((6U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7eU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [0U][3U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7eU] 
        = ((5U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7eU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [1U][3U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux[0x7eU] 
        = ((3U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__in_mux
            [0x7eU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in
                              [2U][3U] >> 0x1cU)));
}
