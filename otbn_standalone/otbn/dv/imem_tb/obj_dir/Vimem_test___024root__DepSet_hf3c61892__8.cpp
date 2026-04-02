// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimem_test.h for the primary calling header

#include "Vimem_test__pch.h"
#include "Vimem_test___024root.h"

VL_INLINE_OPT void Vimem_test___024root___nba_comb__TOP__2(Vimem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root___nba_comb__TOP__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_74;
    VlWide<5>/*159:0*/ __Vtemp_79;
    VlWide<5>/*159:0*/ __Vtemp_84;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_94;
    VlWide<6>/*191:0*/ __Vtemp_101;
    VlWide<6>/*191:0*/ __Vtemp_106;
    VlWide<6>/*191:0*/ __Vtemp_111;
    VlWide<6>/*191:0*/ __Vtemp_116;
    VlWide<6>/*191:0*/ __Vtemp_121;
    VlWide<6>/*191:0*/ __Vtemp_126;
    VlWide<7>/*223:0*/ __Vtemp_133;
    VlWide<7>/*223:0*/ __Vtemp_138;
    VlWide<7>/*223:0*/ __Vtemp_143;
    VlWide<7>/*223:0*/ __Vtemp_148;
    VlWide<7>/*223:0*/ __Vtemp_153;
    VlWide<7>/*223:0*/ __Vtemp_158;
    VlWide<8>/*255:0*/ __Vtemp_165;
    VlWide<8>/*255:0*/ __Vtemp_170;
    VlWide<8>/*255:0*/ __Vtemp_175;
    VlWide<8>/*255:0*/ __Vtemp_180;
    VlWide<8>/*255:0*/ __Vtemp_185;
    VlWide<8>/*255:0*/ __Vtemp_190;
    // Body
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x92U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x92U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x92U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x92U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x92U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x92U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x93U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x93U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x93U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x93U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x93U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x93U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x93U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x93U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x94U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x94U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x94U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x94U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x94U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x94U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x94U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x94U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x95U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x95U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x95U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x95U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x95U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x95U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x95U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x95U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x96U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x96U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x96U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x96U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x96U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x96U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x96U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x96U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x97U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x97U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x97U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x97U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x97U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x97U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x97U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x97U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x98U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x98U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x98U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x98U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x98U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x98U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x98U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x98U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x99U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x99U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x99U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x99U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x99U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x99U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x99U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x99U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9aU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9aU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9aU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9aU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9aU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9aU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9aU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9aU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9bU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9bU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9bU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9bU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9bU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9bU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9bU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9bU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9cU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9cU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9cU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9cU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9cU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9cU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9cU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9cU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9dU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9dU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9dU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9dU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9dU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9dU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9dU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9dU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9eU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9eU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][4U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9eU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9eU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9eU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9eU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9eU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9eU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9fU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9fU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [0U][4U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9fU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9fU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][4U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9fU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9fU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][4U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0x9fU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0x9fU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][4U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa0U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa0U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [0U][5U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa0U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa0U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa0U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa1U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa1U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa1U]) | (2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [1U][5U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa1U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa1U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa2U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa2U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa2U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa2U]) | (4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [2U][5U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa2U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa3U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa3U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa3U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa3U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa3U]) | (8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [3U][5U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa4U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa4U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa4U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa4U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa5U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa5U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa5U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa5U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa6U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa6U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa6U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa6U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa7U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa7U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa7U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa7U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa8U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa8U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa8U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa8U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa9U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa9U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa9U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xa9U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xa9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xaaU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xaaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xaaU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xaaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xaaU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xaaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xaaU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xaaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xabU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xabU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xabU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xabU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xabU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xabU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xabU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xabU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xacU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xacU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xacU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xacU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xacU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xacU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xacU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xacU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xadU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xadU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xadU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xadU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xadU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xadU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xadU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xadU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xaeU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xaeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xaeU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xaeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xaeU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xaeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xaeU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xaeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xafU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xafU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xafU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xafU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xafU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xafU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xafU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xafU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb0U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb0U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb0U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb0U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb0U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb1U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb1U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb1U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb1U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb1U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb2U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb2U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb2U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb2U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb2U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb3U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb3U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb3U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb3U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb3U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb4U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb4U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb4U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb4U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb5U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb5U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb5U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb5U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb6U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb6U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb6U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb6U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb7U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb7U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb7U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb7U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb8U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb8U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb8U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb8U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb9U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb9U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb9U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xb9U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xb9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbaU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbaU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbaU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbaU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbbU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbbU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbbU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbbU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbbU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbbU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbbU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbbU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbcU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbcU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbcU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbcU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbcU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbcU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbcU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbcU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbdU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbdU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbdU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbdU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbdU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbdU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbdU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbdU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbeU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][5U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbeU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbeU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbeU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbfU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbfU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [0U][5U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbfU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbfU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][5U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbfU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbfU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][5U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xbfU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xbfU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][5U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc0U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc0U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [0U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc0U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc0U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc0U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc1U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc1U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc1U]) | (2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [1U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc1U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc1U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc2U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc2U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc2U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc2U]) | (4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [2U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc2U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc3U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc3U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc3U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc3U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc3U]) | (8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [3U][6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc4U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc4U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc4U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc4U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc5U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc5U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc5U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc5U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc6U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc6U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc6U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc6U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc7U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc7U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc7U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc7U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc8U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc8U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc8U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc8U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc9U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc9U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc9U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xc9U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xc9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcaU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcaU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcaU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcaU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcbU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcbU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcbU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcbU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcbU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcbU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcbU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcbU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xccU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xccU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xccU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xccU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xccU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xccU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xccU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xccU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcdU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcdU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcdU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcdU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcdU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcdU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcdU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcdU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xceU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xceU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xceU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xceU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xceU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xceU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xceU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xceU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcfU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcfU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcfU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcfU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcfU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcfU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xcfU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xcfU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd0U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd0U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd0U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd0U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd0U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd1U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd1U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd1U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd1U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd1U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd2U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd2U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd2U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd2U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd2U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd3U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd3U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd3U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd3U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd3U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd4U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd4U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd4U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd4U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd5U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd5U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd5U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd5U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd6U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd6U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd6U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd6U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd7U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd7U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd7U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd7U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd8U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd8U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd8U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd8U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd9U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd9U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd9U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xd9U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xd9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdaU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdaU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdaU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdaU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdbU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdbU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdbU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdbU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdbU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdbU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdbU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdbU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdcU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdcU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdcU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdcU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdcU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdcU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdcU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdcU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xddU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xddU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xddU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xddU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xddU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xddU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xddU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xddU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdeU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][6U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdeU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdeU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdeU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdfU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdfU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [0U][6U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdfU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdfU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][6U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdfU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdfU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][6U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xdfU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xdfU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][6U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe0U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe0U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [0U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe0U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe0U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe0U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe1U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe1U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe1U]) | (2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [1U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe1U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe1U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe2U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe2U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe2U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe2U]) | (4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [2U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe2U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe3U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe3U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe3U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe3U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe3U]) | (8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [3U][7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe4U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe4U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe4U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe4U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe5U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe5U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe5U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe5U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe6U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe6U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe6U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe6U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe7U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe7U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe7U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe7U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 4U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe8U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe8U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe8U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe8U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 5U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe9U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe9U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe9U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xe9U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xe9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 6U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xeaU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xeaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xeaU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xeaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xeaU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xeaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xeaU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xeaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 7U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xebU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xebU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xebU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xebU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xebU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xebU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xebU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xebU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 8U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xecU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xecU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xecU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xecU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xecU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xecU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xecU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xecU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xedU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xedU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xedU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xedU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xedU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xedU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xedU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xedU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0xaU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xeeU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xeeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xeeU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xeeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xeeU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xeeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xeeU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xeeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0xbU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xefU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xefU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xefU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xefU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xefU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xefU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xefU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xefU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0xcU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf0U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf0U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf0U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf0U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf0U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf0U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0xdU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf1U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf1U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf1U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf1U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf1U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf1U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf1U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0xeU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf2U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf2U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf2U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf2U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf2U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf2U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf2U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf2U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0xfU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf3U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf3U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf3U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf3U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf3U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf3U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf3U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf3U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x10U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf4U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf4U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf4U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf4U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf4U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf4U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf4U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf4U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x11U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf5U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf5U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf5U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf5U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf5U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf5U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf5U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf5U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x12U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf6U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf6U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf6U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf6U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf6U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf6U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf6U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf6U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x13U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf7U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf7U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf7U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf7U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf7U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf7U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf7U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf7U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x14U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf8U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf8U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf8U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf8U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf8U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf8U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf8U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf8U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x15U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf9U] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf9U]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf9U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf9U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf9U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf9U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xf9U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xf9U]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x16U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfaU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfaU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfaU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfaU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfaU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfaU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfaU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfaU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x17U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfbU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfbU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfbU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfbU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfbU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfbU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfbU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfbU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x18U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfcU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfcU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfcU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfcU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfcU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfcU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfcU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfcU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x19U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfdU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfdU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfdU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfdU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfdU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfdU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfdU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfdU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x1aU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfeU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfeU]) | (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [0U][7U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfeU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfeU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfeU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfeU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xfeU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xfeU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x1bU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xffU] 
        = ((0xeU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xffU]) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                        [0U][7U] >> 0x1fU));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xffU] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xffU]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [1U][7U] >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xffU] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xffU]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [2U][7U] >> 0x1dU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux[0xffU] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
            [0xffU]) | (8U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
                              [3U][7U] >> 0x1cU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in[3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_update_flags;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in[3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_update_flags;
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0x3fU] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U)))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0x3eU] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U)))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0x3dU] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U)))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0x3cU] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U)))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                       [0x3bU] 
                                                                       & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                          [0x3aU] 
                                                                          & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                             [0x39U] 
                                                                             & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x38U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x37U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x36U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x35U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x34U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x33U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x32U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x31U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x30U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2fU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2eU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2dU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2cU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2bU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2aU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x29U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x28U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x27U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x26U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x25U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x24U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x23U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x22U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x21U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x20U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1fU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1eU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1dU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1cU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1bU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1aU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x19U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x18U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x17U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x16U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x15U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x14U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x13U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x12U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x11U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x10U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xfU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xeU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xdU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xcU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xbU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xaU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [9U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [8U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [7U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [6U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [5U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [4U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [3U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [2U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [1U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0U 
                                                != 
                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                 [0x3fU] 
                                                 & (IData)(
                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                            >> 0x10U)))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                               [0x3eU] 
                                                               & (IData)(
                                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                          >> 0x10U)))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                  [0x3dU] 
                                                                  & (IData)(
                                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                             >> 0x10U)))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                     [0x3cU] 
                                                                     & (IData)(
                                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                        [0x3bU] 
                                                                        & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                           [0x3aU] 
                                                                           & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                              [0x39U] 
                                                                              & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x38U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x37U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x36U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x35U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x34U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x33U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x32U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x31U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x30U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2fU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2eU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2dU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2cU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2bU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x2aU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x29U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x28U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x27U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x26U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x25U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x24U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x23U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x22U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x21U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x20U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1fU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1eU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1dU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1cU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1bU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x1aU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x19U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x18U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x17U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x16U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x15U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x14U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x13U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x12U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x11U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0x10U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xfU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xeU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xdU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xcU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xbU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0xaU] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [9U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [8U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [7U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [6U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [5U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [4U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [3U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [2U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [1U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                                [0U] 
                                                                                & (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                                >> 0x10U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_5[2U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                      [0x44U] & (IData)(
                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                         >> 0x10U))))) 
                      << 4U) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                 [0x43U] 
                                                 & (IData)(
                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                            >> 0x10U))))) 
                                 << 3U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                      [0x42U] 
                                                      & (IData)(
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                 >> 0x10U))))) 
                                            << 2U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                         [0x41U] 
                                                         & (IData)(
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                    >> 0x10U))))) 
                                               << 1U) 
                                              | (0U 
                                                 != 
                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                  [0x40U] 
                                                  & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))))));
    __Vtemp_10[2U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x49U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 9U) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                  [0x48U] 
                                                  & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                                  << 8U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                       [0x47U] 
                                                       & (IData)(
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                  >> 0x10U))))) 
                                             << 7U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                          [0x46U] 
                                                          & (IData)(
                                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                     >> 0x10U))))) 
                                                << 6U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x45U] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 5U) 
                                                  | __Vtemp_5[2U])))));
    __Vtemp_15[2U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x4eU] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0xeU) | (((IData)((0U != 
                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                              [0x4dU] 
                                              & (IData)(
                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                         >> 0x10U))))) 
                                    << 0xdU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                           [0x4cU] 
                                                           & (IData)(
                                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                      >> 0x10U))))) 
                                                 << 0xcU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0x4bU] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0xbU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0x4aU] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0xaU) 
                                                      | __Vtemp_10[2U])))));
    __Vtemp_20[2U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x53U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0x13U) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0x52U] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0x12U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x51U] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 0x11U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                [0x50U] 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x10U))))) 
                                                      << 0x10U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                   [0x4fU] 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                              >> 0x10U))))) 
                                                         << 0xfU) 
                                                        | __Vtemp_15[2U])))));
    __Vtemp_25[2U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x58U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0x18U) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0x57U] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0x17U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x56U] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 0x16U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                [0x55U] 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x10U))))) 
                                                      << 0x15U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                   [0x54U] 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                              >> 0x10U))))) 
                                                         << 0x14U) 
                                                        | __Vtemp_20[2U])))));
    __Vtemp_30[2U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x5dU] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0x1dU) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0x5cU] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0x1cU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x5bU] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                [0x5aU] 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x10U))))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                   [0x59U] 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                              >> 0x10U))))) 
                                                         << 0x19U) 
                                                        | __Vtemp_25[2U])))));
    __Vtemp_37[3U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x64U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 4U) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                  [0x63U] 
                                                  & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                                  << 3U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                       [0x62U] 
                                                       & (IData)(
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                  >> 0x10U))))) 
                                             << 2U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                          [0x61U] 
                                                          & (IData)(
                                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                     >> 0x10U))))) 
                                                << 1U) 
                                               | (0U 
                                                  != 
                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                   [0x60U] 
                                                   & (IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 0x10U))))))));
    __Vtemp_42[3U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x69U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 9U) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                  [0x68U] 
                                                  & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                                  << 8U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                       [0x67U] 
                                                       & (IData)(
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                  >> 0x10U))))) 
                                             << 7U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                          [0x66U] 
                                                          & (IData)(
                                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                     >> 0x10U))))) 
                                                << 6U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x65U] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 5U) 
                                                  | __Vtemp_37[3U])))));
    __Vtemp_47[3U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x6eU] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0xeU) | (((IData)((0U != 
                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                              [0x6dU] 
                                              & (IData)(
                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                         >> 0x10U))))) 
                                    << 0xdU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                           [0x6cU] 
                                                           & (IData)(
                                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                      >> 0x10U))))) 
                                                 << 0xcU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0x6bU] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0xbU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0x6aU] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0xaU) 
                                                      | __Vtemp_42[3U])))));
    __Vtemp_52[3U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x73U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0x13U) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0x72U] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0x12U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x71U] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 0x11U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                [0x70U] 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x10U))))) 
                                                      << 0x10U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                   [0x6fU] 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                              >> 0x10U))))) 
                                                         << 0xfU) 
                                                        | __Vtemp_47[3U])))));
    __Vtemp_57[3U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x78U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0x18U) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0x77U] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0x17U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x76U] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 0x16U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                [0x75U] 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x10U))))) 
                                                      << 0x15U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                   [0x74U] 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                              >> 0x10U))))) 
                                                         << 0x14U) 
                                                        | __Vtemp_52[3U])))));
    __Vtemp_62[3U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x7dU] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0x1dU) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0x7cU] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0x1cU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x7bU] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                [0x7aU] 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x10U))))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                   [0x79U] 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                              >> 0x10U))))) 
                                                         << 0x19U) 
                                                        | __Vtemp_57[3U])))));
    __Vtemp_69[4U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x84U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 4U) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                  [0x83U] 
                                                  & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                                  << 3U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                       [0x82U] 
                                                       & (IData)(
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                  >> 0x10U))))) 
                                             << 2U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                          [0x81U] 
                                                          & (IData)(
                                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                     >> 0x10U))))) 
                                                << 1U) 
                                               | (0U 
                                                  != 
                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                   [0x80U] 
                                                   & (IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 0x10U))))))));
    __Vtemp_74[4U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x89U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 9U) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                  [0x88U] 
                                                  & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                                  << 8U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                       [0x87U] 
                                                       & (IData)(
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                  >> 0x10U))))) 
                                             << 7U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                          [0x86U] 
                                                          & (IData)(
                                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                     >> 0x10U))))) 
                                                << 6U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x85U] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 5U) 
                                                  | __Vtemp_69[4U])))));
    __Vtemp_79[4U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x8eU] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0xeU) | (((IData)((0U != 
                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                              [0x8dU] 
                                              & (IData)(
                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                         >> 0x10U))))) 
                                    << 0xdU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                           [0x8cU] 
                                                           & (IData)(
                                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                      >> 0x10U))))) 
                                                 << 0xcU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0x8bU] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0xbU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0x8aU] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0xaU) 
                                                      | __Vtemp_74[4U])))));
    __Vtemp_84[4U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x93U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0x13U) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0x92U] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0x12U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x91U] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 0x11U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                [0x90U] 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x10U))))) 
                                                      << 0x10U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                   [0x8fU] 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                              >> 0x10U))))) 
                                                         << 0xfU) 
                                                        | __Vtemp_79[4U])))));
    __Vtemp_89[4U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x98U] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0x18U) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0x97U] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0x17U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x96U] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 0x16U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                [0x95U] 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x10U))))) 
                                                      << 0x15U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                   [0x94U] 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                              >> 0x10U))))) 
                                                         << 0x14U) 
                                                        | __Vtemp_84[4U])))));
    __Vtemp_94[4U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                       [0x9dU] & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                       << 0x1dU) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0x9cU] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0x1cU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                             [0x9bU] 
                                                             & (IData)(
                                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                        >> 0x10U))))) 
                                                   << 0x1bU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                [0x9aU] 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x10U))))) 
                                                      << 0x1aU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                   [0x99U] 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                              >> 0x10U))))) 
                                                         << 0x19U) 
                                                        | __Vtemp_89[4U])))));
    __Vtemp_101[5U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xa4U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 4U) | (((IData)((0U != (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                   [0xa3U] 
                                                   & (IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 0x10U))))) 
                                   << 3U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                        [0xa2U] 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x10U))))) 
                                              << 2U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                           [0xa1U] 
                                                           & (IData)(
                                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                      >> 0x10U))))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                    [0xa0U] 
                                                    & (IData)(
                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                               >> 0x10U))))))));
    __Vtemp_106[5U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xa9U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 9U) | (((IData)((0U != (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                   [0xa8U] 
                                                   & (IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 0x10U))))) 
                                   << 8U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                        [0xa7U] 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x10U))))) 
                                              << 7U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                           [0xa6U] 
                                                           & (IData)(
                                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                      >> 0x10U))))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xa5U] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 5U) 
                                                   | __Vtemp_101[5U])))));
    __Vtemp_111[5U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xaeU] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0xeU) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0xadU] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0xdU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                            [0xacU] 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x10U))))) 
                                                  << 0xcU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                               [0xabU] 
                                                               & (IData)(
                                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                          >> 0x10U))))) 
                                                     << 0xbU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                  [0xaaU] 
                                                                  & (IData)(
                                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                             >> 0x10U))))) 
                                                        << 0xaU) 
                                                       | __Vtemp_106[5U])))));
    __Vtemp_116[5U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xb3U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0x13U) | (((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0xb2U] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                                      << 0x12U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xb1U] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0x11U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0xb0U] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0x10U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0xafU] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U))))) 
                                                          << 0xfU) 
                                                         | __Vtemp_111[5U])))));
    __Vtemp_121[5U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xb8U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0x18U) | (((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0xb7U] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                                      << 0x17U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xb6U] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0x16U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0xb5U] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0x15U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0xb4U] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U))))) 
                                                          << 0x14U) 
                                                         | __Vtemp_116[5U])))));
    __Vtemp_126[5U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xbdU] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0x1dU) | (((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0xbcU] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                                      << 0x1cU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xbbU] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0x1bU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0xbaU] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0x1aU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0xb9U] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U))))) 
                                                          << 0x19U) 
                                                         | __Vtemp_121[5U])))));
    __Vtemp_133[6U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xc4U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 4U) | (((IData)((0U != (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                   [0xc3U] 
                                                   & (IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 0x10U))))) 
                                   << 3U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                        [0xc2U] 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x10U))))) 
                                              << 2U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                           [0xc1U] 
                                                           & (IData)(
                                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                      >> 0x10U))))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                    [0xc0U] 
                                                    & (IData)(
                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                               >> 0x10U))))))));
    __Vtemp_138[6U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xc9U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 9U) | (((IData)((0U != (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                   [0xc8U] 
                                                   & (IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 0x10U))))) 
                                   << 8U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                        [0xc7U] 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x10U))))) 
                                              << 7U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                           [0xc6U] 
                                                           & (IData)(
                                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                      >> 0x10U))))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xc5U] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 5U) 
                                                   | __Vtemp_133[6U])))));
    __Vtemp_143[6U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xceU] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0xeU) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0xcdU] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0xdU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                            [0xccU] 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x10U))))) 
                                                  << 0xcU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                               [0xcbU] 
                                                               & (IData)(
                                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                          >> 0x10U))))) 
                                                     << 0xbU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                  [0xcaU] 
                                                                  & (IData)(
                                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                             >> 0x10U))))) 
                                                        << 0xaU) 
                                                       | __Vtemp_138[6U])))));
    __Vtemp_148[6U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xd3U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0x13U) | (((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0xd2U] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                                      << 0x12U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xd1U] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0x11U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0xd0U] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0x10U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0xcfU] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U))))) 
                                                          << 0xfU) 
                                                         | __Vtemp_143[6U])))));
    __Vtemp_153[6U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xd8U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0x18U) | (((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0xd7U] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                                      << 0x17U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xd6U] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0x16U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0xd5U] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0x15U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0xd4U] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U))))) 
                                                          << 0x14U) 
                                                         | __Vtemp_148[6U])))));
    __Vtemp_158[6U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xddU] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0x1dU) | (((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0xdcU] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                                      << 0x1cU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xdbU] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0x1bU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0xdaU] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0x1aU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0xd9U] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U))))) 
                                                          << 0x19U) 
                                                         | __Vtemp_153[6U])))));
    __Vtemp_165[7U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xe4U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 4U) | (((IData)((0U != (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                   [0xe3U] 
                                                   & (IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 0x10U))))) 
                                   << 3U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                        [0xe2U] 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x10U))))) 
                                              << 2U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                           [0xe1U] 
                                                           & (IData)(
                                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                      >> 0x10U))))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                    [0xe0U] 
                                                    & (IData)(
                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                               >> 0x10U))))))));
    __Vtemp_170[7U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xe9U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 9U) | (((IData)((0U != (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                   [0xe8U] 
                                                   & (IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 0x10U))))) 
                                   << 8U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                        [0xe7U] 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x10U))))) 
                                              << 7U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                           [0xe6U] 
                                                           & (IData)(
                                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                      >> 0x10U))))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xe5U] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 5U) 
                                                   | __Vtemp_165[7U])))));
    __Vtemp_175[7U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xeeU] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0xeU) | (((IData)((0U != 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                               [0xedU] 
                                               & (IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                          >> 0x10U))))) 
                                     << 0xdU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                            [0xecU] 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x10U))))) 
                                                  << 0xcU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                               [0xebU] 
                                                               & (IData)(
                                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                          >> 0x10U))))) 
                                                     << 0xbU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                  [0xeaU] 
                                                                  & (IData)(
                                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                             >> 0x10U))))) 
                                                        << 0xaU) 
                                                       | __Vtemp_170[7U])))));
    __Vtemp_180[7U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xf3U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0x13U) | (((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0xf2U] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                                      << 0x12U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xf1U] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0x11U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0xf0U] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0x10U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0xefU] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U))))) 
                                                          << 0xfU) 
                                                         | __Vtemp_175[7U])))));
    __Vtemp_185[7U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xf8U] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0x18U) | (((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0xf7U] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                                      << 0x17U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xf6U] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0x16U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0xf5U] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0x15U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0xf4U] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U))))) 
                                                          << 0x14U) 
                                                         | __Vtemp_180[7U])))));
    __Vtemp_190[7U] = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                        [0xfdU] & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                        << 0x1dU) | (((IData)((0U != 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                [0xfcU] 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x10U))))) 
                                      << 0x1cU) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                              [0xfbU] 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x10U))))) 
                                                    << 0x1bU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                 [0xfaU] 
                                                                 & (IData)(
                                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                            >> 0x10U))))) 
                                                       << 0x1aU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                                                    [0xf9U] 
                                                                    & (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                               >> 0x10U))))) 
                                                          << 0x19U) 
                                                         | __Vtemp_185[7U])))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[0U] 
        = __Vtemp_1[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[1U] 
        = __Vtemp_1[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[2U] 
        = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                            [0x5fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x10U))))) 
            << 0x1fU) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                          [0x5eU] & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                          << 0x1eU) | __Vtemp_30[2U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[3U] 
        = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                            [0x7fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x10U))))) 
            << 0x1fU) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                          [0x7eU] & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                          << 0x1eU) | __Vtemp_62[3U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[4U] 
        = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                            [0x9fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x10U))))) 
            << 0x1fU) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                          [0x9eU] & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                          << 0x1eU) | __Vtemp_94[4U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[5U] 
        = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                            [0xbfU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x10U))))) 
            << 0x1fU) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                          [0xbeU] & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                          << 0x1eU) | __Vtemp_126[5U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[6U] 
        = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                            [0xdfU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x10U))))) 
            << 0x1fU) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                          [0xdeU] & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                          << 0x1eU) | __Vtemp_158[6U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[7U] 
        = (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                            [0xffU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x10U))))) 
            << 0x1fU) | (((IData)((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                          [0xfeU] & (IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0x10U))))) 
                          << 0x1eU) | __Vtemp_190[7U]));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                         >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                         >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                         >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                         >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                         >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                         >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                         >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                         >> 1U));
    if ((0x20000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U])) {
        if ((1U & (~ (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                      >> 0x10U)))) {
            if ((0x8000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U])) {
                if ((1U & (~ (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                              >> 0xeU)))) {
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[0U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[1U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[2U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[3U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[4U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[5U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[6U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[7U];
                }
            } else {
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[0U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[1U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[2U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[3U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[4U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[5U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[6U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[7U];
            }
        }
    } else if ((0x10000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U])) {
        if ((0x8000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U])) {
            if ((0x4000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U])) {
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[0U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[1U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[2U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[3U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[4U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[5U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[6U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[7U];
            } else {
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[0U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[1U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[2U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[3U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[4U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[5U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[6U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[7U];
            }
        } else if ((0x4000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U])) {
            if ((2U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U])) {
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                     >> 1U));
            } else {
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                     >> 1U));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                     >> 1U));
            }
        } else {
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                 >> 1U));
        }
    } else if ((0x8000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U])) {
        if ((0x4000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U])) {
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                 >> 1U));
        } else if ((2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                          | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U]))) {
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                 >> 1U));
        } else {
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                 >> 1U));
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                    << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                 >> 1U));
        }
    } else {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                             >> 1U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                             >> 1U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                             >> 1U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                             >> 1U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                             >> 1U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                             >> 1U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                             >> 1U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                             >> 1U));
    }
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[0U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
            [0U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[7U] 
                           >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[0U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
            [0U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[0U] 
                           << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[0U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
            [0U]) | (8U & ((~ (IData)((0U != ((((((
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[0U] 
                                                    | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[1U]) 
                                                   | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[2U]) 
                                                  | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[3U]) 
                                                 | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[4U]) 
                                                | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[5U]) 
                                               | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[6U]) 
                                              | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[7U])))) 
                           << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[1U] 
        = ((0xdU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
            [1U]) | (2U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[7U] 
                           >> 0x1eU)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[1U] 
        = ((0xbU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
            [1U]) | (4U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[0U] 
                           << 2U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[1U] 
        = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
            [1U]) | (8U & ((~ (IData)((0U != ((((((
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[0U] 
                                                    | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[1U]) 
                                                   | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[2U]) 
                                                  | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[3U]) 
                                                 | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[4U]) 
                                                | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[5U]) 
                                               | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[6U]) 
                                              | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res[7U])))) 
                           << 3U)));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U];
    if ((0x20U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
        if ((1U & (~ (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
                      >> 4U)))) {
            if ((8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[0U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[0U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[1U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[1U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[2U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[2U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[3U] 
                    = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[3U];
                if ((0x60000000ULL == (0x60000000ULL 
                                       & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q))) {
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[0U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[1U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[2U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[3U];
                } else {
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[4U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[5U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[6U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U] 
                        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[7U];
                }
            }
        }
    } else if ((1U & (~ (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
                         >> 4U)))) {
        if ((1U & (~ (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
                      >> 3U)))) {
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[0U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[1U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[2U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[3U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U];
        }
    }
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in[2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
        [0U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in[2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
        [1U];
}

extern const VlWide<8>/*255:0*/ Vimem_test__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vimem_test___024root___nba_comb__TOP__5(Vimem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root___nba_comb__TOP__5\n"); );
    // Init
    CData/*3:0*/ imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0 = 0;
    CData/*0:0*/ imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 = 0;
    CData/*0:0*/ imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 = 0;
    CData/*0:0*/ imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 = 0;
    CData/*3:0*/ imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0 = 0;
    CData/*0:0*/ imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 = 0;
    CData/*0:0*/ imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 = 0;
    CData/*0:0*/ imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 = 0;
    CData/*0:0*/ imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13;
    imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13 = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__29__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__29__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__29__val;
    __Vfunc_mubi4_bool_to_mubi__29__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__30__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__30__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__30__val;
    __Vfunc_mubi4_bool_to_mubi__30__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__46__Vfuncout;
    __Vfunc_mubi4_test_true_loose__46__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__46__val;
    __Vfunc_mubi4_test_true_loose__46__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__47__Vfuncout;
    __Vfunc_mubi4_and_hi__47__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__47__a;
    __Vfunc_mubi4_and_hi__47__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__47__b;
    __Vfunc_mubi4_and_hi__47__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__48__Vfuncout;
    __Vfunc_mubi4_and__48__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__48__a;
    __Vfunc_mubi4_and__48__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__48__b;
    __Vfunc_mubi4_and__48__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__48__a_in;
    __Vfunc_mubi4_and__48__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__48__b_in;
    __Vfunc_mubi4_and__48__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__59__Vfuncout;
    __Vfunc_mubi4_test_true_loose__59__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__59__val;
    __Vfunc_mubi4_test_true_loose__59__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__60__Vfuncout;
    __Vfunc_mubi4_test_true_loose__60__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__60__val;
    __Vfunc_mubi4_test_true_loose__60__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__62__Vfuncout;
    __Vfunc_mubi4_test_true_loose__62__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__62__val;
    __Vfunc_mubi4_test_true_loose__62__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__70__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__70__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__70__val;
    __Vfunc_mubi4_bool_to_mubi__70__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__223__Vfuncout;
    __Vfunc_mubi4_test_invalid__223__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__223__val;
    __Vfunc_mubi4_test_invalid__223__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__418__Vfuncout;
    __Vfunc_mubi4_test_invalid__418__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__418__val;
    __Vfunc_mubi4_test_invalid__418__val = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__426__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__426__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__426__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__426__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__426__payload;
    __Vfunc_extract_d2h_rsp_intg__426__payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__440__Vfuncout;
    __Vfunc_mubi4_test_invalid__440__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__440__val;
    __Vfunc_mubi4_test_invalid__440__val = 0;
    QData/*63:0*/ __Vtemp_1;
    QData/*63:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_50;
    // Body
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][3U] 
        = ((0xfffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][3U]) | (0x1000U & ((vlSelf->imem_test__DOT__tl_i[3U] 
                                     & ((3U <= (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_steer)) 
                                        << 0xcU)) & 
                                    ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
                                     << 0xcU))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][3U] 
        = ((0xfffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][3U]) | (0x1000U & (vlSelf->imem_test__DOT__tl_i[3U] 
                                    & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select) 
                                       << 0xcU))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][0U] 
        = ((0xffffffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][0U]) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                           ? ((vlSelf->imem_test__DOT__tl_i[1U] 
                               << 8U) | (vlSelf->imem_test__DOT__tl_i[0U] 
                                         >> 0x18U))
                           : 0xffffffffU) << 0x18U));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][1U] 
        = ((0xff000000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][1U]) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                           ? ((vlSelf->imem_test__DOT__tl_i[1U] 
                               << 8U) | (vlSelf->imem_test__DOT__tl_i[0U] 
                                         >> 0x18U))
                           : 0xffffffffU) >> 8U));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][0U] 
        = ((0xff000001U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][0U]) | (0xfffffeU & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                        ? ((vlSelf->imem_test__DOT__tl_i[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->imem_test__DOT__tl_i[0U] 
                                              >> 1U))
                                        : vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                      << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][3U] 
        = ((0xfffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][3U]) | (0x1000U & (vlSelf->imem_test__DOT__tl_i[3U] 
                                    & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select) 
                                       << 0xcU))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][0U] 
        = ((0xffffffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][0U]) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                           ? ((vlSelf->imem_test__DOT__tl_i[1U] 
                               << 8U) | (vlSelf->imem_test__DOT__tl_i[0U] 
                                         >> 0x18U))
                           : 0xffffffffU) << 0x18U));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][1U] 
        = ((0xff000000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][1U]) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                           ? ((vlSelf->imem_test__DOT__tl_i[1U] 
                               << 8U) | (vlSelf->imem_test__DOT__tl_i[0U] 
                                         >> 0x18U))
                           : 0xffffffffU) >> 8U));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][0U] 
        = ((0xff000001U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][0U]) | (0xfffffeU & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                        ? ((vlSelf->imem_test__DOT__tl_i[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->imem_test__DOT__tl_i[0U] 
                                              >> 1U))
                                        : vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                      << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][3U] 
        = ((0xfffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][3U]) | (0x1000U & (vlSelf->imem_test__DOT__tl_i[3U] 
                                    & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select) 
                                       << 0xcU))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][0U] 
        = ((0xffffffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][0U]) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                           ? ((vlSelf->imem_test__DOT__tl_i[1U] 
                               << 8U) | (vlSelf->imem_test__DOT__tl_i[0U] 
                                         >> 0x18U))
                           : 0xffffffffU) << 0x18U));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][1U] 
        = ((0xff000000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][1U]) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                           ? ((vlSelf->imem_test__DOT__tl_i[1U] 
                               << 8U) | (vlSelf->imem_test__DOT__tl_i[0U] 
                                         >> 0x18U))
                           : 0xffffffffU) >> 8U));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][0U] 
        = ((0xff000001U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][0U]) | (0xfffffeU & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                        ? ((vlSelf->imem_test__DOT__tl_i[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->imem_test__DOT__tl_i[0U] 
                                              >> 1U))
                                        : vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                      << 1U)));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][3U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][3U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][3U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[0U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[0U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[0U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[0U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[1U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[2U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[2U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[2U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[2U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][3U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int = 0U;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_intg = 0U;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_intg = 0U;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[7U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_h2d[0U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [0U][0U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_h2d[0U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [0U][1U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_h2d[0U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [0U][2U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_h2d[0U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [0U][3U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_h2d[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [1U][0U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_h2d[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [1U][1U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_h2d[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [1U][2U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_h2d[1U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [1U][3U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg = 0ULL;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg = 0ULL;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x1000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [1U][3U])) {
        VL_ASSIGNSEL_WI(256,8,(0xffU & VL_SHIFTL_III(8,32,32, 
                                                     (7U 
                                                      & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [1U][2U] 
                                                          << 2U) 
                                                         | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][1U] 
                                                            >> 0x1eU))), 5U)), vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][1U] 
                                                   >> 0x18U))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(8U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (7U 
                                                         & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [1U][2U] 
                                                             << 2U) 
                                                            | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                               [1U][1U] 
                                                               >> 0x1eU))), 5U))), vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][1U] 
                                                   >> 0x19U))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (7U 
                                                         & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [1U][2U] 
                                                             << 2U) 
                                                            | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                               [1U][1U] 
                                                               >> 0x1eU))), 5U))), vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][1U] 
                                                   >> 0x1aU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (7U 
                                                         & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [1U][2U] 
                                                             << 2U) 
                                                            | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                               [1U][1U] 
                                                               >> 0x1eU))), 5U))), vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][1U] 
                                                   >> 0x1bU))))));
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____Vlvbound_h8cc7e518__0 = 0x7fU;
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____Vlvbound_h2a2a9920__0 
            = (0x7fU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                        [1U][0U] >> 1U));
        if ((0x37U >= (0x3fU & ((IData)(7U) * (7U & 
                                               ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [1U][2U] 
                                                 << 2U) 
                                                | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][1U] 
                                                   >> 0x1eU))))))) {
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg 
                = (((~ (0x7fULL << (0x3fU & ((IData)(7U) 
                                             * (7U 
                                                & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                    [1U][2U] 
                                                    << 2U) 
                                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [1U][1U] 
                                                      >> 0x1eU))))))) 
                    & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg) 
                   | (0xffffffffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____Vlvbound_h8cc7e518__0)) 
                                             << (0x3fU 
                                                 & ((IData)(7U) 
                                                    * 
                                                    (7U 
                                                     & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                         [1U][2U] 
                                                         << 2U) 
                                                        | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [1U][1U] 
                                                           >> 0x1eU))))))));
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg 
                = (((~ (0x7fULL << (0x3fU & ((IData)(7U) 
                                             * (7U 
                                                & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                    [1U][2U] 
                                                    << 2U) 
                                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [1U][1U] 
                                                      >> 0x1eU))))))) 
                    & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg) 
                   | (0xffffffffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____Vlvbound_h2a2a9920__0)) 
                                             << (0x3fU 
                                                 & ((IData)(7U) 
                                                    * 
                                                    (7U 
                                                     & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                         [1U][2U] 
                                                         << 2U) 
                                                        | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [1U][1U] 
                                                           >> 0x1eU))))))));
        }
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][3U] >> 4U))) || (1U 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [1U][3U] 
                                                           >> 4U)))
                                                       ? 
                                                      (~ 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [1U][1U] 
                                                        >> 0x1cU))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 4U))) 
                                                       && (1U 
                                                           & (~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (3U 
                                                                          & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                             [1U][1U] 
                                                                             >> 0x1cU))))))))));
        if ((0U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [1U][3U] >> 4U)))) {
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xfU & (
                                                   ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [1U][1U] 
                                                     << 8U) 
                                                    | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [1U][1U] 
                                                       >> 0x18U)) 
                                                   & (~ 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [1U][1U] 
                                                           >> 0x1cU))))))))));
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [1U][1U] << 8U) 
                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][1U] >> 0x18U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                            [1U][1U] 
                                            >> 0x1cU))))));
        } else if ((1U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][3U] >> 4U)))) {
            if ((0x20000000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                 [1U][1U])) {
                vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (3U & 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [1U][1U] 
                                                >> 0x18U))))));
                vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [1U][1U] >> 0x1aU)));
            } else {
                vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xcU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][1U] 
                                                  >> 0x18U))))));
                vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [1U][1U] >> 0x18U)));
            }
        } else {
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                = (1U & (2U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][3U] >> 4U))));
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                = ((2U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][3U] >> 4U))) 
                   && (0xfU == (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [1U][1U] >> 0x18U))));
        }
    }
    if ((0x1000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [0U][3U])) {
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffff00U & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | (0xffU & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                            [0U][1U] 
                                            >> 0x18U))))));
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffff00ffU & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | (0xff00U & ((- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [0U][1U] 
                                               >> 0x19U)))) 
                             << 8U)));
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xff00ffffU & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | (0xff0000U & ((- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [0U][1U] 
                                                 >> 0x1aU)))) 
                               << 0x10U)));
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffU & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][1U] >> 0x1bU)))) 
                  << 0x18U));
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_intg = 0x7fU;
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_intg 
            = (0x7fU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                        [0U][0U] >> 1U));
        vlSelf->imem_test__DOT__dut__DOT__imem_index_bus 
            = (0x7ffU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [0U][2U] << 2U) | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][1U] 
                                             >> 0x1eU)));
    } else {
        vlSelf->imem_test__DOT__dut__DOT__imem_index_bus = 0U;
    }
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__417__val 
                    = (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0xfU));
                vlSelf->__Vfunc_mubi4_test_true_strict__417__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__417__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__417__Vfuncout)) 
           & ((0U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [1U][3U] >> 9U))) | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [1U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__418__val = (0xfU & 
                                            (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][0U] 
                                             >> 0xfU));
    __Vfunc_mubi4_test_invalid__418__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__418__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__418__val)))));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__418__Vfuncout;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__instr_error 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__412__val 
                    = (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0xfU));
                vlSelf->__Vfunc_mubi4_test_invalid__412__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__412__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__412__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__412__Vfuncout)) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__413__val 
                    = (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0xfU));
                vlSelf->__Vfunc_mubi4_test_true_strict__413__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__413__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__413__Vfuncout)));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x1000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [0U][3U])) {
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [0U][3U] >> 4U))) || (1U 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [0U][3U] 
                                                           >> 4U)))
                                                       ? 
                                                      (~ 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [0U][1U] 
                                                        >> 0x1cU))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [0U][3U] 
                                                            >> 4U))) 
                                                       && (1U 
                                                           & (~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (3U 
                                                                          & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                             [0U][1U] 
                                                                             >> 0x1cU))))))))));
        if ((0U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [0U][3U] >> 4U)))) {
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xfU & (
                                                   ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [0U][1U] 
                                                     << 8U) 
                                                    | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [0U][1U] 
                                                       >> 0x18U)) 
                                                   & (~ 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [0U][1U] 
                                                           >> 0x1cU))))))))));
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][1U] << 8U) 
                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [0U][1U] >> 0x18U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                            [0U][1U] 
                                            >> 0x1cU))))));
        } else if ((1U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][3U] >> 4U)))) {
            if ((0x20000000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                 [0U][1U])) {
                vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (3U & 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][1U] 
                                                >> 0x18U))))));
                vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][1U] >> 0x1aU)));
            } else {
                vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xcU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][1U] 
                                                  >> 0x18U))))));
                vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][1U] >> 0x18U)));
            }
        } else {
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                = (1U & (2U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [0U][3U] >> 4U))));
            vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                = ((2U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][3U] >> 4U))) 
                   && (0xfU == (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [0U][1U] >> 0x18U))));
        }
    }
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__222__val 
                    = (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0xfU));
                vlSelf->__Vfunc_mubi4_test_true_strict__222__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__222__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__222__Vfuncout)) 
           & ((0U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [0U][3U] >> 9U))) | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [0U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__223__val = (0xfU & 
                                            (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][0U] 
                                             >> 0xfU));
    __Vfunc_mubi4_test_invalid__223__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__223__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__223__val)))));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__223__Vfuncout;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__instr_error 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__217__val 
                    = (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0xfU));
                vlSelf->__Vfunc_mubi4_test_invalid__217__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__217__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__217__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__217__Vfuncout)) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__218__val 
                    = (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0xfU));
                vlSelf->__Vfunc_mubi4_test_true_strict__218__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__218__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__218__Vfuncout)));
    vlSelf->__VdfgRegularize_hd87f99a1_2_5 = ((0U == 
                                               (7U 
                                                & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][3U] 
                                                   >> 9U))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [1U][3U] 
                                                     >> 9U))));
    vlSelf->__VdfgRegularize_hd87f99a1_2_3 = ((0U == 
                                               (7U 
                                                & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [0U][3U] 
                                                   >> 9U))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [0U][3U] 
                                                     >> 9U))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x7f8U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((8U == (0xfffcU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                   [2U][2U] << 4U) 
                                  | (0xcU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [2U][1U] 
                                             >> 0x1cU))))) 
               << 2U) | (((4U == (0xfffcU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                              [2U][2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][1U] 
                                                   >> 0x1cU))))) 
                          << 1U) | (0U == (0xfffcU 
                                           & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [2U][2U] 
                                               << 4U) 
                                              | (0xcU 
                                                 & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][1U] 
                                                    >> 0x1cU))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x7c7U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x14U == (0xfffcU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [2U][2U] << 4U) 
                                     | (0xcU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][1U] 
                                                >> 0x1cU))))) 
               << 5U) | (((0x10U == (0xfffcU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [2U][2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][1U] 
                                                      >> 0x1cU))))) 
                          << 4U) | ((0xcU == (0xfffcU 
                                              & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  << 4U) 
                                                 | (0xcU 
                                                    & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][1U] 
                                                       >> 0x1cU))))) 
                                    << 3U))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x63fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x20U == (0xfffcU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [2U][2U] << 4U) 
                                     | (0xcU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][1U] 
                                                >> 0x1cU))))) 
               << 8U) | (((0x1cU == (0xfffcU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [2U][2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][1U] 
                                                      >> 0x1cU))))) 
                          << 7U) | ((0x18U == (0xfffcU 
                                               & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][2U] 
                                                   << 4U) 
                                                  | (0xcU 
                                                     & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        >> 0x1cU))))) 
                                    << 6U))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1ffU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x28U == (0xfffcU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [2U][2U] << 4U) 
                                     | (0xcU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][1U] 
                                                >> 0x1cU))))) 
               << 0xaU) | ((0x24U == (0xfffcU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  << 4U) 
                                                 | (0xcU 
                                                    & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][1U] 
                                                       >> 0x1cU))))) 
                           << 9U)));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x1000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [2U][3U])) {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [2U][3U] >> 4U))) || (1U 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [2U][3U] 
                                                           >> 4U)))
                                                       ? 
                                                      (~ 
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        >> 0x1cU))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [2U][3U] 
                                                            >> 4U))) 
                                                       && (1U 
                                                           & (~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (3U 
                                                                          & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                             [2U][1U] 
                                                                             >> 0x1cU))))))))));
        if ((0U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][3U] >> 4U)))) {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xfU & (
                                                   ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][1U] 
                                                     << 8U) 
                                                    | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][1U] 
                                                       >> 0x18U)) 
                                                   & (~ 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [2U][1U] 
                                                           >> 0x1cU))))))))));
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [2U][1U] << 8U) 
                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [2U][1U] >> 0x18U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                            [2U][1U] 
                                            >> 0x1cU))))));
        } else if ((1U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][3U] >> 4U)))) {
            if ((0x20000000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                 [2U][1U])) {
                vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (3U & 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][1U] 
                                                >> 0x18U))))));
                vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [2U][1U] >> 0x1aU)));
            } else {
                vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xcU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][1U] 
                                                  >> 0x18U))))));
                vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [2U][1U] >> 0x18U)));
            }
        } else {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (2U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [2U][3U] >> 4U))));
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = ((2U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][3U] >> 4U))) 
                   && (0xfU == (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [2U][1U] >> 0x18U))));
        }
    }
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelf->__Vfunc_mubi4_test_true_strict__437__val 
                = (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [2U][0U] >> 0xfU));
            vlSelf->__Vfunc_mubi4_test_true_strict__437__Vfuncout 
                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__437__val));
        }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__437__Vfuncout));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__439__val 
                    = (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [2U][0U] >> 0xfU));
                vlSelf->__Vfunc_mubi4_test_true_strict__439__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__439__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__439__Vfuncout)) 
           & ((0U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][3U] >> 9U))) | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__440__val = (0xfU & 
                                            (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [2U][0U] 
                                             >> 0xfU));
    __Vfunc_mubi4_test_invalid__440__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__440__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__440__val)))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__440__Vfuncout;
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                  [2U][3U] >> 0xcU) & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U]));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_rready 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
           & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
           [0U][0U]);
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_rready 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
           & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
           [1U][0U]);
    vlSelf->imem_test__DOT__dut__DOT__dmem_index = 
        (0x7fU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__busy_execute_q)
                   ? ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked) 
                      >> 5U) : ((0x1000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][3U]) ? ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [1U][2U] 
                                                 >> 1U))
                                 : 0U)));
    vlSelf->imem_test__DOT__dut__DOT__dmem_write_bus 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [1U][3U] >> 0xcU) & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_5));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_det 
        = (1U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_5) 
                  & ((0xfU != (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [1U][1U] >> 0x18U))) 
                     | (2U != (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [1U][3U] >> 4U))))) 
                 | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                          [1U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [1U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__addr_sz_chk) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk) 
                                 & ((4U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [1U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_type_err) 
                          | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->imem_test__DOT__dut__DOT__imem_write_bus 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [0U][3U] >> 0xcU) & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_3));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_det 
        = (1U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_3) 
                  & ((0xfU != (0xfU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][1U] >> 0x18U))) 
                     | (2U != (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][3U] >> 4U))))) 
                 | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                          [0U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [0U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__addr_sz_chk) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk) 
                                 & ((4U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_type_err) 
                          | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))))) {
        if ((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state__q));
        } else if ((2U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable__q));
        } else if ((4U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x10U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xffffff00U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x20U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->imem_test__DOT__dut__DOT__software_errs_fatal_q));
        } else if ((0x40U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_status__DOT__q));
        } else {
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffU & (IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q)));
            vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xff0000U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                   << 8U)));
        }
    } else if ((0x100U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff0U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bus_intg_violation__DOT__q) 
                   << 3U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_reg_intg_violation__DOT__q) 
                              << 2U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_dmem_intg_violation__DOT__q) 
                                         << 1U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_imem_intg_violation__DOT__q)))));
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff0fU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_fatal_software__DOT__q) 
                   << 7U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_lifecycle_escalation__DOT__q) 
                              << 6U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_illegal_bus_access__DOT__q) 
                                         << 5U) | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__q) 
                                                   << 4U)))));
    } else {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x200U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))
                ? vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q
                : ((0x400U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))
                    ? (~ vlSelf->imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_q)
                    : 0xffffffffU));
    }
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [2U][3U] >> 9U))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][3U] >> 9U))) | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][3U] 
                                                     >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                  ? (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h3dc25d6d__0) 
                        & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h3dc20f1e__0)) 
                           & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_rready))))
                  : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_rready)));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                  ? (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h3dc25d6d__2) 
                        & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h3dc20f1e__2)) 
                           & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_rready))))
                  : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_rready)));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = (0x7fU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_index) 
                    ^ (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x70U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x3fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 6U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x5fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 5U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x6fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 4U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x77U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 3U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7bU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 2U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7dU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 1U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7eU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | (IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 
        = (1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7eU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x77U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0) 
              << 3U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7dU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0) 
              << 1U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x6fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0) 
              << 4U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7bU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0) 
              << 2U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x5fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0) 
              << 5U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__13__03a7__KET__ 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox;
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                     << 7U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_index))) 
                   ^ vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)(((((vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                      << 7U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_index))) 
                    ^ vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0) 
                   >> 0x20U));
    __Vtemp_1 = ((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                 ^ (((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)(((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                   ^ (((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U])))));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_1 >> 0x20U));
    __Vtemp_2 = (((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U])));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_2 >> 0x20U));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[0U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[1U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[2U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[3U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[4U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[5U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[6U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[7U] 
        = Vimem_test__ConstPool__CONST_h9e67c271_0[7U];
    if ((0x1000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [1U][3U])) {
        VL_ASSIGNSEL_WI(256,8,(0xffU & VL_SHIFTL_III(8,32,32, 
                                                     (7U 
                                                      & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [1U][2U] 
                                                          << 2U) 
                                                         | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][1U] 
                                                            >> 0x1eU))), 5U)), vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][1U] >> 0x18U) & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][0U] >> 0x18U) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(8U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (7U 
                                                         & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [1U][2U] 
                                                             << 2U) 
                                                            | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                               [1U][1U] 
                                                               >> 0x1eU))), 5U))), vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][1U] >> 0x19U) & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (0xffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][1U]) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (7U 
                                                         & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [1U][2U] 
                                                             << 2U) 
                                                            | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                               [1U][1U] 
                                                               >> 0x1eU))), 5U))), vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][1U] >> 0x1aU) & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][1U] >> 8U))
                          : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (7U 
                                                         & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [1U][2U] 
                                                             << 2U) 
                                                            | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                               [1U][1U] 
                                                               >> 0x1eU))), 5U))), vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][1U] >> 0x1bU) & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][1U] >> 0x10U))
                          : 0U));
    }
    vlSelf->imem_test__DOT__dut__DOT__dmem_req_bus 
        = (1U & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                  [1U][3U] >> 0xcU) & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_det)) 
                                       & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int = 0U;
    if ((0x1000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [0U][3U])) {
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffff00U & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | (((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                    [0U][1U] >> 0x18U) & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_write_bus))
                   ? (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                      [0U][0U] >> 0x18U) : 0U));
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffff00ffU & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                     [0U][1U] >> 0x19U) & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_write_bus))
                    ? (0xffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                       [0U][1U]) : 0U) << 8U));
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xff00ffffU & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                     [0U][1U] >> 0x1aU) & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_write_bus))
                    ? (0xffU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                [0U][1U] >> 8U)) : 0U) 
                  << 0x10U));
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffU & vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                     [0U][1U] >> 0x1bU) & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_write_bus))
                    ? (0xffU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                [0U][1U] >> 0x10U))
                    : 0U) << 0x18U));
    }
    vlSelf->imem_test__DOT__dut__DOT__imem_write = 
        ((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_access_core))) 
         && (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_write_bus));
    vlSelf->imem_test__DOT__dut__DOT__imem_req_bus 
        = (1U & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                  [0U][3U] >> 0xcU) & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_det)) 
                                       & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                  [2U][1U] >> 0x1cU)))) 
                 | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                          [2U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [2U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [2U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                 & ((4U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err) 
                          | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = (0x7fU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__13__03a7__KET__) 
                    ^ (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x70U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x3fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 6U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x5fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 5U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x6fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 4U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x77U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 3U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7bU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 2U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7dU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 1U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7eU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | (IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped;
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 
        = (1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7eU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x77U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0) 
              << 3U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7dU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0) 
              << 1U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x6fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0) 
              << 4U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7bU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0) 
              << 2U));
    imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x5fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0) 
              << 5U));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__20__03a14__KET__ 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox;
    vlSelf->imem_test__DOT__dut__DOT__dmem_dummy_response_d 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__busy_execute_q) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_req_bus));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_wvalid 
        = ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_write_bus)) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_req_bus));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h4d1de382_1_2 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_req_bus) 
            | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__missed_err_gnt_q)) 
           & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
              & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelf->imem_test__DOT__dut__DOT__imem_dummy_response_d 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_req_bus) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_access_core));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_wvalid 
        = ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_write_bus)) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_req_bus));
    vlSelf->imem_test__DOT__dut__DOT__mem_crc_data_in 
        = (((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_req_bus)) 
            << 0x2fU) | (((QData)((IData)(((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_req_bus)
                                            ? (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_index_bus)
                                            : (0x3ffU 
                                               & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   << 2U) 
                                                  | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [1U][1U] 
                                                     >> 0x1eU)))))) 
                          << 0x20U) | (QData)((IData)(
                                                      ((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_req_bus)
                                                        ? vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int
                                                        : 
                                                       ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                         [1U][1U] 
                                                         << 8U) 
                                                        | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [1U][0U] 
                                                           >> 0x18U)))))));
    vlSelf->imem_test__DOT__dut__DOT__imem_req = ((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_access_core)
                                                   ? (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en)
                                                   : (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_req_bus));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8c225e8c_1_2 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_req_bus) 
            | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__missed_err_gnt_q)) 
           & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
              & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_scr 
        = (0x7fU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__20__03a14__KET__) 
                    ^ (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_rready))
                  : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_wvalid)));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_wvalid 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [1U][3U] >> 0xcU) & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h4d1de382_1_2));
    __Vtemp_3[1U] = (((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h3dc25d6d__2)) 
                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid))
                        ? 0U : 1U) << 0x1eU) | (IData)(
                                                       ((((QData)((IData)(
                                                                          ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                                            ? 
                                                                           ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                             ? 
                                                                            (3U 
                                                                             & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                                                >> 8U))
                                                                             : 0U)
                                                                            : 0U))) 
                                                          << 0x39U) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                                               ? 
                                                                              ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                                ? 
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                                                : 0U)
                                                                               : 0U))) 
                                                             << 0x31U) 
                                                            | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                                                                                 ? 
                                                                                ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                                                                                 ? (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data))) 
                                                                << 0x10U) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__data_intg) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error) 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h4d1de382_1_2)))))))) 
                                                        >> 0x20U)));
    vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                      ? ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                          ? (3U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                   >> 8U))
                                          : 0U) : 0U))) 
                    << 0x39U) | (((QData)((IData)(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                    ? 
                                                   ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                     ? 
                                                    (0xffU 
                                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                     : 0U)
                                                    : 0U))) 
                                  << 0x31U) | (((QData)((IData)(
                                                                (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                                                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                                                                  ? 
                                                                 ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                                                                   ? (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                              >> 8U))
                                                                   : 0U)
                                                                  : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__data_intg) 
                                                                   << 2U) 
                                                                  | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error) 
                                                                       & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h4d1de382_1_2)))))))));
    vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[1U] 
        = __Vtemp_3[1U];
    vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[2U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
            << 1U) | ((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h3dc25d6d__2)) 
                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid))
                        ? 0U : 1U) >> 2U));
    vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U] 
        = ((0xffff0003U & vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U]) 
           | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__data_intg) 
              << 2U));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_rready))
                  : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_wvalid)));
    vlSelf->imem_test__DOT__dut__DOT__imem_gnt = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q) 
                                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_req));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_wvalid 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [0U][3U] >> 0xcU) & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8c225e8c_1_2));
    __Vtemp_4[1U] = (((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h3dc25d6d__0)) 
                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid))
                        ? 0U : 1U) << 0x1eU) | (IData)(
                                                       ((((QData)((IData)(
                                                                          ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                                            ? 
                                                                           ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                             ? 
                                                                            (3U 
                                                                             & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                                                >> 8U))
                                                                             : 0U)
                                                                            : 0U))) 
                                                          << 0x39U) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                                               ? 
                                                                              ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                                ? 
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                                                : 0U)
                                                                               : 0U))) 
                                                             << 0x31U) 
                                                            | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                                                                                 ? 
                                                                                ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                                                                                 ? (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data))) 
                                                                << 0x10U) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__data_intg) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error) 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8c225e8c_1_2)))))))) 
                                                        >> 0x20U)));
    vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                      ? ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                          ? (3U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                   >> 8U))
                                          : 0U) : 0U))) 
                    << 0x39U) | (((QData)((IData)(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                    ? 
                                                   ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                     ? 
                                                    (0xffU 
                                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                     : 0U)
                                                    : 0U))) 
                                  << 0x31U) | (((QData)((IData)(
                                                                (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                                                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                                                                  ? 
                                                                 ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                                                                   ? (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                              >> 8U))
                                                                   : 0U)
                                                                  : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__data_intg) 
                                                                   << 2U) 
                                                                  | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error) 
                                                                       & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8c225e8c_1_2)))))))));
    vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[1U] 
        = __Vtemp_4[1U];
    vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[2U] 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
            << 1U) | ((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h3dc25d6d__0)) 
                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid))
                        ? 0U : 1U) >> 2U));
    vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U] 
        = ((0xffff0003U & vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U]) 
           | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__data_intg) 
              << 2U));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_we) 
           & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
               & (0U != (1U & (~ ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                   [2U][1U] << 8U) 
                                  | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [2U][1U] >> 0x18U)))))) 
              | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                   >> 1U) & (0U != (1U & (~ ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                              [2U][1U] 
                                              << 8U) 
                                             | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][1U] 
                                                >> 0x18U)))))) 
                 | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                      >> 2U) & (0U != (1U & (~ ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [2U][1U] 
                                                 << 8U) 
                                                | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][1U] 
                                                   >> 0x18U)))))) 
                    | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                         >> 3U) & (0U != (1U & (~ (
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][1U] 
                                                    << 8U) 
                                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][1U] 
                                                      >> 0x18U)))))) 
                       | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                            >> 4U) & (0U != (1U & (~ 
                                                   ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][1U] 
                                                     << 8U) 
                                                    | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][1U] 
                                                       >> 0x18U)))))) 
                          | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                               >> 5U) & (0U != (1U 
                                                & (~ 
                                                   ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][1U] 
                                                     << 8U) 
                                                    | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][1U] 
                                                       >> 0x18U)))))) 
                             | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                                  >> 6U) & (0U != (1U 
                                                   & (~ 
                                                      ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][1U] 
                                                          >> 0x18U)))))) 
                                | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                                     >> 7U) & (0U != 
                                               (7U 
                                                & (~ 
                                                   ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][1U] 
                                                     << 8U) 
                                                    | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][1U] 
                                                       >> 0x18U)))))) 
                                   | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (0U 
                                                  != 
                                                  (1U 
                                                   & (~ 
                                                      ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][1U] 
                                                          >> 0x18U)))))) 
                                      | ((IData)((0U 
                                                  != 
                                                  (0x600U 
                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)))) 
                                         & (0U != (0xfU 
                                                   & (~ 
                                                      ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][1U] 
                                                          >> 0x18U))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addrmiss 
        = ((~ (IData)((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)))) 
           & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_re) 
              | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_we)));
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_rready))
                  : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_wvalid)));
    vlSelf->imem_test__DOT__dut__DOT__tl_win_d2h[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_d2h[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[1U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_d2h[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[2U];
    __Vfunc_mubi4_bool_to_mubi__30__val = ((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_gnt) 
                                           & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_write));
    __Vfunc_mubi4_bool_to_mubi__30__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__30__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_en_d 
        = __Vfunc_mubi4_bool_to_mubi__30__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__29__val = ((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_gnt) 
                                           & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_write)));
    __Vfunc_mubi4_bool_to_mubi__29__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__29__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__read_en 
        = __Vfunc_mubi4_bool_to_mubi__29__Vfuncout;
    vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_rready))
                  : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_wvalid)));
    vlSelf->imem_test__DOT__dut__DOT__tl_win_d2h[0U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_d2h[0U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[1U];
    vlSelf->imem_test__DOT__dut__DOT__tl_win_d2h[0U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h[0U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h[0U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_error 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__intg_err)));
    __Vfunc_mubi4_test_true_loose__60__val = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_en_d;
    __Vfunc_mubi4_test_true_loose__60__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__60__val));
    vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_en_b 
        = __Vfunc_mubi4_test_true_loose__60__Vfuncout;
    __Vfunc_mubi4_test_true_loose__59__val = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_test_true_loose__59__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__59__val));
    vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__read_en_b 
        = __Vfunc_mubi4_test_true_loose__59__Vfuncout;
    __Vfunc_mubi4_and_hi__47__b = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_and_hi__47__a = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
    __Vfunc_mubi4_and__48__b = __Vfunc_mubi4_and_hi__47__b;
    __Vfunc_mubi4_and__48__a = __Vfunc_mubi4_and_hi__47__a;
    __Vfunc_mubi4_and__48__a_in = __Vfunc_mubi4_and__48__a;
    __Vfunc_mubi4_and__48__b_in = __Vfunc_mubi4_and__48__b;
    vlSelf->__Vfunc_mubi4_and__48__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__48__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_and__48__a_in) 
                                               & (IData)(__Vfunc_mubi4_and__48__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_and__48__a_in) 
                                                   | (IData)(__Vfunc_mubi4_and__48__b_in)))));
    vlSelf->__Vfunc_mubi4_and__48__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__48__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_and__48__a_in) 
                                               | (IData)(__Vfunc_mubi4_and__48__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_and__48__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__48__b_in)))));
    __Vfunc_mubi4_and__48__Vfuncout = vlSelf->__Vfunc_mubi4_and__48__out;
    __Vfunc_mubi4_and_hi__47__Vfuncout = __Vfunc_mubi4_and__48__Vfuncout;
    __Vfunc_mubi4_test_true_loose__46__val = __Vfunc_mubi4_and_hi__47__Vfuncout;
    __Vfunc_mubi4_test_true_loose__46__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__46__val));
    vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__rw_collision 
        = __Vfunc_mubi4_test_true_loose__46__Vfuncout;
    vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__macro_write 
        = ((([&]() {
                    vlSelf->__Vfunc_mubi4_or_hi__43__b 
                        = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_pending_q;
                    vlSelf->__Vfunc_mubi4_or_hi__43__a 
                        = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
                    vlSelf->__Vfunc_mubi4_or__44__b 
                        = vlSelf->__Vfunc_mubi4_or_hi__43__b;
                    vlSelf->__Vfunc_mubi4_or__44__a 
                        = vlSelf->__Vfunc_mubi4_or_hi__43__a;
                    vlSelf->__Vfunc_mubi4_or__44__a_in 
                        = vlSelf->__Vfunc_mubi4_or__44__a;
                    vlSelf->__Vfunc_mubi4_or__44__b_in 
                        = vlSelf->__Vfunc_mubi4_or__44__b;
                    vlSelf->__Vfunc_mubi4_or__44__out 
                        = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__44__out)) 
                           | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__44__a_in) 
                                     | (IData)(vlSelf->__Vfunc_mubi4_or__44__b_in))) 
                              | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__44__a_in) 
                                       & (IData)(vlSelf->__Vfunc_mubi4_or__44__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__44__out 
                        = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__44__out)) 
                           | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__44__a_in) 
                                     & (IData)(vlSelf->__Vfunc_mubi4_or__44__b_in))) 
                              | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__44__a_in) 
                                       | (IData)(vlSelf->__Vfunc_mubi4_or__44__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__44__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__44__out;
                    vlSelf->__Vfunc_mubi4_or_hi__43__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__44__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__42__val 
                        = vlSelf->__Vfunc_mubi4_or_hi__43__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__42__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__42__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__42__Vfuncout)) 
            & (~ ([&]() {
                        vlSelf->__Vfunc_mubi4_test_true_loose__45__val 
                            = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__read_en;
                        vlSelf->__Vfunc_mubi4_test_true_loose__45__Vfuncout 
                            = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__45__val));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__45__Vfuncout)))) 
           & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__intg_error_w_q)));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h
        [0U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h
        [0U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h
        [0U][2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h
        [1U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h
        [1U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h
        [1U][2U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h
        [2U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h
        [2U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_d2h
        [2U][2U];
    imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13 
        = ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_we));
    vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_scr_pending_d 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__macro_write)
            ? 9U : ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__rw_collision)
                     ? 6U : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_pending_q)));
    vlSelf->imem_test__DOT__dut__DOT__imem_wpending 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__macro_write) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__49__val 
                    = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_en_d;
                vlSelf->__Vfunc_mubi4_test_true_loose__49__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__49__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__49__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__70__val = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__70__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__70__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__70__Vfuncout;
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][0U] 
        = (IData)((((QData)((IData)(((1U == (7U & (
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                    [0U][2U] 
                                                    << 2U) 
                                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                      [0U][1U] 
                                                      >> 0x1eU))))
                                      ? ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                          [0U][1U] 
                                          << 0x10U) 
                                         | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                            [0U][0U] 
                                            >> 0x10U))
                                      : 0U))) << 0x10U) 
                   | (QData)((IData)((0xffffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                      [0U][0U])))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][1U] 
        = ((0xffff0000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [0U][1U]) | (IData)(((((QData)((IData)(
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                          [0U][2U] 
                                                          << 2U) 
                                                         | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                            [0U][1U] 
                                                            >> 0x1eU))))
                                                     ? 
                                                    ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                      [0U][1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [0U][0U] 
                                                        >> 0x10U))
                                                     : 0U))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                [0U][0U])))) 
                                 >> 0x20U)));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][2U] 
        = ((2U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [0U][2U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                         [0U][2U]));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][0U] 
        = (IData)((((QData)((IData)(((1U == (7U & (
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                    [1U][2U] 
                                                    << 2U) 
                                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                      [1U][1U] 
                                                      >> 0x1eU))))
                                      ? ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                          [1U][1U] 
                                          << 0x10U) 
                                         | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                            [1U][0U] 
                                            >> 0x10U))
                                      : 0U))) << 0x10U) 
                   | (QData)((IData)((0xffffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                      [1U][0U])))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][1U] 
        = ((0xffff0000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [1U][1U]) | (IData)(((((QData)((IData)(
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                          [1U][2U] 
                                                          << 2U) 
                                                         | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                            [1U][1U] 
                                                            >> 0x1eU))))
                                                     ? 
                                                    ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                      [1U][1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [1U][0U] 
                                                        >> 0x10U))
                                                     : 0U))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                [1U][0U])))) 
                                 >> 0x20U)));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][2U] 
        = ((2U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [1U][2U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                         [1U][2U]));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[2U][0U] 
        = (IData)((((QData)((IData)(((1U == (7U & (
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                    [2U][2U] 
                                                    << 2U) 
                                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                      [2U][1U] 
                                                      >> 0x1eU))))
                                      ? ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                          [2U][1U] 
                                          << 0x10U) 
                                         | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                            [2U][0U] 
                                            >> 0x10U))
                                      : 0U))) << 0x10U) 
                   | (QData)((IData)((0xffffU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                      [2U][0U])))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[2U][1U] 
        = ((0xffff0000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [2U][1U]) | (IData)(((((QData)((IData)(
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                          [2U][2U] 
                                                          << 2U) 
                                                         | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                            [2U][1U] 
                                                            >> 0x1eU))))
                                                     ? 
                                                    ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                      [2U][1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [2U][0U] 
                                                        >> 0x10U))
                                                     : 0U))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                [2U][0U])))) 
                                 >> 0x20U)));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[2U][2U] 
        = ((2U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [2U][2U]) | (1U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                         [2U][2U]));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 1U) & (IData)(imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__intr_state_we 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
           & (IData)(imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__cmd_we 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 4U) & (IData)(imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__load_checksum_we 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 0xaU) & (IData)(imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__ctrl_we 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 5U) & (IData)(imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 7U) & (IData)(imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 9U) & (IData)(imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__intr_test_we 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 2U) & (IData)(imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we 
        = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 3U) & (IData)(imem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    __Vfunc_mubi4_test_true_loose__62__val = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__62__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__62__val));
    vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__62__Vfuncout;
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
        = (1U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
           [3U][0U]);
    if ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_steer))) {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
            = (1U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
               [0U][0U]);
    }
    if ((1U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_steer))) {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
            = (1U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
               [1U][0U]);
    }
    if ((2U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_steer))) {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
            = (1U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
               [2U][0U]);
    }
    if (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests) {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready = 0U;
    }
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [3U][0U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [3U][1U];
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [3U][2U];
    if ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding))) {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][0U];
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][1U];
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][2U];
    }
    if ((1U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding))) {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][0U];
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][1U];
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][2U];
    }
    if ((2U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding))) {
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [2U][0U];
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [2U][1U];
        vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [2U][2U];
    }
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_intr_enable__DOT__wr_data 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en) 
           & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
              [2U][0U] >> 0x18U));
    vlSelf->imem_test__DOT__dut__DOT__software_errs_fatal_d 
        = (1U & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__ctrl_we) 
                  & (0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__status_q)))
                  ? (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                     [2U][0U] >> 0x18U) : (IData)(vlSelf->imem_test__DOT__dut__DOT__software_errs_fatal_q)));
    vlSelf->imem_test__DOT__dut__DOT__err_bits_clear 
        = ((0xffffU == (0xffffU & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we))))) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__is_not_running_q));
    vlSelf->imem_test__DOT__dut__DOT__unused_reg2hw_err_bits 
        = (1U & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                  [2U][0U] >> 0x18U) ^ VL_REDXOR_32(
                                                    (((2U 
                                                       & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][0U] 
                                                          >> 0x18U)) 
                                                      | (0xffffU 
                                                         == 
                                                         (0xffffU 
                                                          & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                     ^ 
                                                     (((2U 
                                                        & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [2U][0U] 
                                                           >> 0x19U)) 
                                                       | (0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                      ^ 
                                                      (((2U 
                                                         & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [2U][0U] 
                                                            >> 0x1aU)) 
                                                        | (0xffffU 
                                                           == 
                                                           (0xffffU 
                                                            & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                       ^ 
                                                       (((2U 
                                                          & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [2U][0U] 
                                                             >> 0x1bU)) 
                                                         | (0xffffU 
                                                            == 
                                                            (0xffffU 
                                                             & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                        ^ 
                                                        (((2U 
                                                           & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                              [2U][0U] 
                                                              >> 0x1cU)) 
                                                          | (0xffffU 
                                                             == 
                                                             (0xffffU 
                                                              & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                         ^ 
                                                         (((2U 
                                                            & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                               [2U][0U] 
                                                               >> 0x1dU)) 
                                                           | (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                          ^ 
                                                          (((2U 
                                                             & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                [2U][0U] 
                                                                >> 0x1eU)) 
                                                            | (0xffffU 
                                                               == 
                                                               (0xffffU 
                                                                & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                           ^ 
                                                           (((2U 
                                                              & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                 [2U][1U] 
                                                                 >> 7U)) 
                                                             | (0xffffU 
                                                                == 
                                                                (0xffffU 
                                                                 & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                            ^ 
                                                            (((2U 
                                                               & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                  [2U][1U] 
                                                                  >> 8U)) 
                                                              | (0xffffU 
                                                                 == 
                                                                 (0xffffU 
                                                                  & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                             ^ 
                                                             (((2U 
                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                   [2U][1U] 
                                                                   >> 9U)) 
                                                               | (0xffffU 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                              ^ 
                                                              (((2U 
                                                                 & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                    [2U][1U] 
                                                                    >> 0xaU)) 
                                                                | (0xffffU 
                                                                   == 
                                                                   (0xffffU 
                                                                    & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                               ^ 
                                                               (((2U 
                                                                  & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                     [2U][1U] 
                                                                     >> 0xbU)) 
                                                                 | (0xffffU 
                                                                    == 
                                                                    (0xffffU 
                                                                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                                ^ 
                                                                (((2U 
                                                                   & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                      [2U][1U] 
                                                                      >> 0xcU)) 
                                                                  | (0xffffU 
                                                                     == 
                                                                     (0xffffU 
                                                                      & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                                 ^ 
                                                                 (((2U 
                                                                    & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                       [2U][1U] 
                                                                       >> 0xdU)) 
                                                                   | (0xffffU 
                                                                      == 
                                                                      (0xffffU 
                                                                       & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                                  ^ 
                                                                  ((2U 
                                                                    & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                       [2U][1U] 
                                                                       >> 0xeU)) 
                                                                   | (0xffffU 
                                                                      == 
                                                                      (0xffffU 
                                                                       & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))))))))))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_we_check 
        = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__load_checksum_we) 
             << 0xaU) | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we) 
                         << 9U)) | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we) 
                                      << 7U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__ctrl_we) 
                                                 << 5U) 
                                                | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__cmd_we) 
                                                   << 4U))) 
                                    | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we) 
                                        << 3U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__intr_test_we) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__intr_state_we))))));
    vlSelf->imem_test__DOT__dut__DOT____Vcellinp__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__alert_test_i 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [2U][0U] >> 0x19U) & (3U == (3U & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we))))));
    vlSelf->imem_test__DOT__dut__DOT____Vcellinp__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__alert_test_i 
        = ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [2U][0U] >> 0x18U) & (3U == (3U & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we))))));
    __Vtemp_18[2U] = (((IData)((0xffffU == (0xffffU 
                                            & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                       << 8U) | ((0x80U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                           [2U][0U] 
                                           >> 0x13U)) 
                                 | (((IData)((0xffffU 
                                              == (0xffffU 
                                                  & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                     << 6U) | ((0x20U 
                                                & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][0U] 
                                                   >> 0x14U)) 
                                               | (((IData)(
                                                           (0xffffU 
                                                            == 
                                                            (0xffffU 
                                                             & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                         [2U][0U] 
                                                         >> 0x15U)) 
                                                     | (((IData)(
                                                                 (0xffffU 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                         << 2U) 
                                                        | (3U 
                                                           & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                              [2U][1U] 
                                                              >> 0x16U)))))))));
    __Vtemp_25[2U] = ((0x8000U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                  [2U][0U] >> 0xfU)) 
                      | (((IData)((0xffffU == (0xffffU 
                                               & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                          << 0xeU) | ((0x2000U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][0U] 
                                                  >> 0x10U)) 
                                      | (((IData)((0xffffU 
                                                   == 
                                                   (0xffffU 
                                                    & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][0U] 
                                                >> 0x11U)) 
                                            | (((IData)(
                                                        (0xffffU 
                                                         == 
                                                         (0xffffU 
                                                          & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                << 0xaU) 
                                               | ((0x200U 
                                                   & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][0U] 
                                                      >> 0x12U)) 
                                                  | __Vtemp_18[2U])))))));
    __Vtemp_32[2U] = (((IData)((0xffffU == (0xffffU 
                                            & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                       << 0x16U) | ((0x200000U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][1U] 
                                                  << 0xcU)) 
                                    | (((IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                        << 0x14U) | 
                                       ((0x80000U & 
                                         (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                          [2U][1U] 
                                          << 0xbU)) 
                                        | (((IData)(
                                                    (0xffffU 
                                                     == 
                                                     (0xffffU 
                                                      & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                            << 0x12U) 
                                           | ((0x20000U 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][0U] 
                                                  >> 0xeU)) 
                                              | (((IData)(
                                                          (0xffffU 
                                                           == 
                                                           (0xffffU 
                                                            & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                  << 0x10U) 
                                                 | __Vtemp_25[2U])))))));
    __Vtemp_39[2U] = ((0x20000000U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [2U][1U] << 0x10U)) 
                      | (((IData)((0xffffU == (0xffffU 
                                               & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                          << 0x1cU) | ((0x8000000U 
                                        & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                           [2U][1U] 
                                           << 0xfU)) 
                                       | (((IData)(
                                                   (0xffffU 
                                                    == 
                                                    (0xffffU 
                                                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                           << 0x1aU) 
                                          | ((0x2000000U 
                                              & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [2U][1U] 
                                                 << 0xeU)) 
                                             | (((IData)(
                                                         (0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                 << 0x18U) 
                                                | ((0x800000U 
                                                    & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][1U] 
                                                       << 0xdU)) 
                                                   | __Vtemp_32[2U])))))));
    __Vtemp_50[3U] = (((IData)((3U == (3U & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we)))))) 
                       << 0xfU) | ((0x4000U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [2U][0U] 
                                               >> 0xaU)) 
                                   | (((IData)((3U 
                                                == 
                                                (3U 
                                                 & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we)))))) 
                                       << 0xdU) | (
                                                   (0x1fe0U 
                                                    & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][0U] 
                                                       >> 0x13U)) 
                                                   | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__cmd_we) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [2U][0U] 
                                                             >> 0x15U)) 
                                                         | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__ctrl_we) 
                                                             << 2U) 
                                                            | ((2U 
                                                                & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                   [2U][1U] 
                                                                   >> 0xeU)) 
                                                               | (0xffffU 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))))))))));
    vlSelf->imem_test__DOT__dut__DOT__reg2hw[0U] = (IData)(
                                                           (((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we)) 
                                                             << 0x21U) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                                [2U][1U] 
                                                                                << 8U) 
                                                                                | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                                [2U][0U] 
                                                                                >> 0x18U)))) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__load_checksum_we)))));
    vlSelf->imem_test__DOT__dut__DOT__reg2hw[1U] = 
        ((0xfffffffcU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][1U] << 0xaU) | (0x3fcU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][0U] 
                                                  >> 0x16U)))) 
         | (IData)(((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we)) 
                      << 0x21U) | (((QData)((IData)(
                                                    ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][1U] 
                                                      << 8U) 
                                                     | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__load_checksum_we)))) 
                    >> 0x20U)));
    vlSelf->imem_test__DOT__dut__DOT__reg2hw[2U] = 
        ((0x80000000U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                         [2U][1U] << 0x11U)) | (((IData)(
                                                         (0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                 << 0x1eU) 
                                                | __Vtemp_39[2U]));
    vlSelf->imem_test__DOT__dut__DOT__reg2hw[3U] = 
        (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
          << 0x14U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable__q) 
                        << 0x13U) | ((0x40000U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][0U] 
                                                  >> 6U)) 
                                     | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__intr_test_we) 
                                         << 0x11U) 
                                        | ((0x10000U 
                                            & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [2U][0U] 
                                               >> 9U)) 
                                           | __Vtemp_50[3U])))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o 
        = ((vlSelf->imem_test__DOT__tl_i[3U] >> 0xcU) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__accept_t_rsp 
        = (IData)(((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                    >> 1U) & vlSelf->imem_test__DOT__tl_i[0U]));
    vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT____Vcellinp__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__alert_test_i) 
           | (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = ((IData)(vlSelf->imem_test__DOT__dut__DOT____Vcellinp__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__alert_test_i) 
           | (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelf->imem_test__DOT__dut__DOT__start_d = 0U;
    if ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__status_q))) {
        if ((0x10U & vlSelf->imem_test__DOT__dut__DOT__reg2hw[3U])) {
            if ((0xd8U == (0xffU & (vlSelf->imem_test__DOT__dut__DOT__reg2hw[3U] 
                                    >> 5U)))) {
                vlSelf->imem_test__DOT__dut__DOT__start_d = 1U;
            }
        }
    }
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__accept_t_req 
        = ((vlSelf->imem_test__DOT__tl_i[3U] >> 0xcU) 
           & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_o_pre[0U] 
        = (IData)((((QData)((IData)(((1U == (7U & (
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                                                    << 2U) 
                                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
                                                      >> 0x1eU))))
                                      ? ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
                                          << 0x10U) 
                                         | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
                                            >> 0x10U))
                                      : 0U))) << 0x10U) 
                   | (QData)((IData)(((0xfffeU & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U]) 
                                      | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o))))));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_o_pre[1U] 
        = ((0xffff0000U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U]) 
           | (IData)(((((QData)((IData)(((1U == (7U 
                                                 & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                                                     << 2U) 
                                                    | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
                                                       >> 0x1eU))))
                                          ? ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
                                              << 0x10U) 
                                             | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
                                                >> 0x10U))
                                          : 0U))) << 0x10U) 
                       | (QData)((IData)(((0xfffeU 
                                           & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U]) 
                                          | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o))))) 
                      >> 0x20U)));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_o_pre[2U] 
        = (3U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U]);
    __Vfunc_extract_d2h_rsp_intg__426__tl[0U] = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_o_pre[0U];
    __Vfunc_extract_d2h_rsp_intg__426__tl[1U] = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_o_pre[1U];
    __Vfunc_extract_d2h_rsp_intg__426__tl[2U] = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_o_pre[2U];
    __Vfunc_extract_d2h_rsp_intg__426__payload = ((0x38U 
                                                   & ((__Vfunc_extract_d2h_rsp_intg__426__tl[2U] 
                                                       << 5U) 
                                                      | (0x18U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__426__tl[1U] 
                                                            >> 0x1bU)))) 
                                                  | ((6U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__426__tl[1U] 
                                                         >> 0x18U)) 
                                                     | (1U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__426__tl[0U] 
                                                           >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__426__Vfuncout = __Vfunc_extract_d2h_rsp_intg__426__payload;
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__426__Vfuncout;
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfdffffffffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x39U));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfbffffffffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3aU));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xf7ffffffffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3bU));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xefffffffffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3cU));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xdfffffffffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3dU));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xbfffffffffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3eU));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0x7fffffffffffffffULL & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3fU));
    vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (0x5400000000000000ULL ^ vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o);
    vlSelf->imem_test__DOT__tl_o[0U] = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_o_pre[0U];
    vlSelf->imem_test__DOT__tl_o[1U] = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_o_pre[1U];
    vlSelf->imem_test__DOT__tl_o[2U] = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_o_pre[2U];
    vlSelf->imem_test__DOT__tl_o[0U] = ((0xffff0003U 
                                         & vlSelf->imem_test__DOT__tl_o[0U]) 
                                        | (0xfffffffcU 
                                           & ((0xfe00U 
                                               & ((IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                           >> 0x39U)) 
                                                  << 9U)) 
                                              | (0x1fcU 
                                                 & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U]))));
}
